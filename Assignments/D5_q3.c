#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a patient node
typedef struct Patient {
    int id;
    char name[50];
    struct Patient *prev, *next;
} Patient;

// Head and Tail pointers
Patient *head = NULL, *tail = NULL;

// Function to add a new patient
void addPatient(int id, char *name) {
    Patient *newPatient = (Patient *)malloc(sizeof(Patient));
    newPatient->id = id;
    strcpy(newPatient->name, name);
    newPatient->prev = newPatient->next = NULL;

    if (!head) {
        head = tail = newPatient;
    } else {
        tail->next = newPatient;
        newPatient->prev = tail;
        tail = newPatient;
    }
    printf("New Patient Admitted: %s (ID %d)\n", name, id);
}

// Function to remove a discharged patient
void dischargePatient(int id) {
    Patient *temp = head;
    while (temp) {
        if (temp->id == id) {
            if (temp->prev)
                temp->prev->next = temp->next;
            else
                head = temp->next;

            if (temp->next)
                temp->next->prev = temp->prev;
            else
                tail = temp->prev;

            printf("Discharging: %s\n", temp->name);
            free(temp);
            return;
        }
        temp = temp->next;
    }
    printf("Patient with ID %d not found!\n", id);
}

// Function to display patient list
void displayPatients() {
    Patient *temp = head;
    printf("Remaining Patients: ");
    while (temp) {
        printf("%s", temp->name);
        if (temp->next)
            printf(" \u2194 "); // Bidirectional arrow
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    addPatient(201, "John");
    addPatient(202, "Mary");
    addPatient(203, "David");

    dischargePatient(202);
    displayPatients();
    
    return 0;
}
