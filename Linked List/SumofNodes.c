#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function to create a new node
struct node *createNode(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(struct node **headRef, int data) {
    struct node *newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
    } else {
        struct node *temp = *headRef;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the linked list
void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to calculate the sum of elements in the linked list
int sumOfLinkedList(struct node *head) {
    int sum = 0;
    struct node *temp = head;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

int main() {
    struct node *head = NULL;
    int choice, data;

    do {
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Sum of Linked List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter data to insert: ");
                scanf("%d", &data);
                insertNode(&head, data);
                break;
            case 2:
                printf("\nLinked List: ");
                display(head);
                break;
            case 3:
                printf("\nSum of Linked List: %d\n", sumOfLinkedList(head));
                break;
            case 4:
                printf("\nExiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Output:  
// 1. Insert
// 2. Display
// 3. Sum of Linked List
// 4. Exit
// Enter your choice: 1
//      
// Enter data to insert: 5
// 1. Insert
// 2. Display
// 3. Sum of Linked List
// 4. Exit
