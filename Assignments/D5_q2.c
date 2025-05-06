#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEATS 2  // Maximum confirmed reservations
#define MAX_QUEUE 5   // Maximum waiting list

typedef struct Passenger {
    char name[50];
    struct Passenger* next;
} Passenger;

typedef struct Queue {
    Passenger* front;
    Passenger* rear;
    int size;
} Queue;

void initQueue(Queue* q) {
    q->front = q->rear = NULL;
    q->size = 0;
}

int isFull(Queue* q, int maxSize) {
    return q->size >= maxSize;
}

int isEmpty(Queue* q) {
    return q->size == 0;
}

void enqueue(Queue* q, char* name) {
    Passenger* newPassenger = (Passenger*)malloc(sizeof(Passenger));
    strcpy(newPassenger->name, name);
    newPassenger->next = NULL;
    if (q->rear) {
        q->rear->next = newPassenger;
    } else {
        q->front = newPassenger;
    }
    q->rear = newPassenger;
    q->size++;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) return;
    Passenger* temp = q->front;
    q->front = q->front->next;
    if (!q->front) q->rear = NULL;
    free(temp);
    q->size--;
}

void displayQueue(Queue* q, char* message) {
    printf("%s", message);
    Passenger* temp = q->front;
    while (temp) {
        printf(" %s", temp->name);
        temp = temp->next;
    }
    printf("\n");
}

void bookTicket(Queue* confirmed, Queue* waiting, char* name) {
    if (!isFull(confirmed, MAX_SEATS)) {
        enqueue(confirmed, name);
        printf("Booking Confirmed: %s\n", name);
    } else if (!isFull(waiting, MAX_QUEUE)) {
        enqueue(waiting, name);
        printf("Waiting List: %s\n", name);
    } else {
        printf("Booking Full: %s cannot be accommodated.\n", name);
    }
}

void cancelTicket(Queue* confirmed, Queue* waiting) {
    if (isEmpty(confirmed)) {
        printf("No confirmed bookings to cancel.\n");
        return;
    }
    printf("Cancelled: %s\n", confirmed->front->name);
    dequeue(confirmed);
    
    if (!isEmpty(waiting)) {
        char nextPassenger[50];
        strcpy(nextPassenger, waiting->front->name);
        dequeue(waiting);
        enqueue(confirmed, nextPassenger);
        printf("Moved from Waiting List to Confirmed: %s\n", nextPassenger);
    }
}

int main() {
    Queue confirmed, waiting;
    initQueue(&confirmed);
    initQueue(&waiting);
    
    bookTicket(&confirmed, &waiting, "Alice");
    bookTicket(&confirmed, &waiting, "Bob");
    bookTicket(&confirmed, &waiting, "Charlie");
    bookTicket(&confirmed, &waiting, "David");
    
    displayQueue(&confirmed, "Confirmed Bookings:");
    displayQueue(&waiting, "Waiting List:");
    
    printf("\nCancelling a ticket...\n");
    cancelTicket(&confirmed, &waiting);
    
    displayQueue(&confirmed, "Confirmed Bookings:");
    displayQueue(&waiting, "Waiting List:");
    
    return 0;
}
