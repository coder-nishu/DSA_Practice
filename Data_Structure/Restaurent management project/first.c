#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for customer information
struct Customer {
    char name[50];
    char phoneNumber[15];
    int customerId;
    // You can define the order food list here as needed
    struct Customer* next;
};

// Function to insert a new customer node at the end of the linked list
void insertCustomer(struct Customer** head, const char* name, const char* phoneNumber, int customerId) {
    // Create a new customer node
    struct Customer* newCustomer = (struct Customer*)malloc(sizeof(struct Customer));
    
    // Copy data into the new node
    strncpy(newCustomer->name, name, sizeof(newCustomer->name));
    strncpy(newCustomer->phoneNumber, phoneNumber, sizeof(newCustomer->phoneNumber));
    newCustomer->customerId = customerId;
    newCustomer->next = NULL;

    // If the linked list is empty, make this the head
    if (*head == NULL) {
        *head = newCustomer;
    } else {
        // Traverse the list to find the last node
        struct Customer* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        // Attach the new node at the end
        current->next = newCustomer;
    }
}

// Function to display the customer information in the linked list
void displayCustomers(struct Customer* head) {
    struct Customer* current = head;
    while (current != NULL) {
        printf("Name: %s\n", current->name);
        printf("Phone Number: %s\n", current->phoneNumber);
        printf("Customer ID: %d\n", current->customerId);
        // Print food list or any additional data here
        printf("\n");
        current = current->next;
    }
}

int main() {
    struct Customer* customerList = NULL;

    // Insert customer data
    insertCustomer(&customerList, "John Doe", "555-1234", 1);
    insertCustomer(&customerList, "Alice Smith", "555-5678", 2);
    insertCustomer(&customerList, "Bob Johnson", "555-9876", 3);

    // Display customer data
    displayCustomers(customerList);

    // Free allocated memory
    while (customerList != NULL) {
        struct Customer* temp = customerList;
        customerList = customerList->next;
        free(temp);
    }

    return 0;
}
