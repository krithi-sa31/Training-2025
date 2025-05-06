#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CALLS 100

typedef struct {
    int id;
    char name[50];
} Call;

typedef struct {
    Call calls[MAX_CALLS];
    int front, rear;
} Queue;

void initQueue(Queue *q) {
    q->front = q->rear = -1;
}

int isFull(Queue *q) {
    return q->rear == MAX_CALLS - 1;
}

int isEmpty(Queue *q) {
    return q->front == -1 || q->front > q->rear;
}

void enqueue(Queue *q, int id, char *name) {
    if (isFull(q)) {
        printf("Queue is full. Cannot add new call.\n");
        return;
    }
    if (q->front == -1) q->front = 0;
    q->rear++;
    q->calls[q->rear].id = id; /*at the rear position of the id ka array ur adding the next id*/
    strcpy(q->calls[q->rear].name, name);
    printf("New Call Added: Call %d from %s\n", id, name);
}

void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("No calls to process.\n");
        return;
    }
    printf("Processing Call: %d from %s\n", q->calls[q->front].id, q->calls[q->front].name);
    q->front++;
}

void displayQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("No remaining calls in the queue.\n");
        return;
    }
    printf("Remaining Calls:\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d from %s\n", q->calls[i].id, q->calls[i].name);
    }
}

int main() {
    Queue q;
    initQueue(&q);
    
    enqueue(&q, 101, "Alice");
    enqueue(&q, 102, "Bob");
    dequeue(&q);
    displayQueue(&q);
    
    return 0;
}
