#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free

struct node
{
    int data;
    struct node *next;
};

// Function to create a linked list
struct node* createLinkedList()
{
    struct node *head = NULL; // Initialize head to NULL
    struct node *temp = NULL; // Initialize temp to NULL
    struct node *newnode = NULL;
    int choice = 1;

    while(choice)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) // Check if memory allocation failed
        {
            printf("Memory allocation failed!\n");
            exit(1); // Exit the program
        }

        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL; // Assign NULL to next pointer

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Continue..?\n 1.Continue \t0.Exit \n\n");
        scanf("%d", &choice);
    }

    return head;
}

// Function to display a linked list
void display(struct node *head)
{
    struct node *temp = head; // Declare and initialize temp locally within display()

    while(temp != NULL) // Use NULL instead of 0 for clarity
    {
        printf("%d ", temp->data); // Add a space after %d for readability
        temp = temp->next;
    }
}

int main()
{
    struct node *head = createLinkedList(); // Call the function to create the linked list
    printf("Linked list is : ");
    display(head); // Call the function to display the linked list
    printf("\n\n");
    return 0;
}
