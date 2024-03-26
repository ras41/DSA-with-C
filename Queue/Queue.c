#include <stdio.h>
#define N 5 
int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
	int x;
	// initialize var for the ele from user
	printf("Enter element in queue : ");
	scanf("%d", &x);  
	
	if(rear == N-1)
	{
		printf("Queue is full");
	}
	else if(front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = x;
		printf("Entered element is %d", x);

	}
	else
	{
		rear++;
		queue[rear] = x;
		printf("Entered element is %d", x);

	}
}

void dequeue()
{
	if(front == -1 && rear == -1)	
	{
		printf("Queue is empty");
	}
	else if(front == rear)
	{
		front = rear = -1;
	}
	else
	{
	printf("Deleted element is  %d", queue[front]);
	front++;

	}
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty!");
    }
    else
    {
        printf("%d", queue[front]);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue ie empty!");
    }
    else
    {
        printf("Queue : \n");
        for(int i =0; i <= rear; i++)
    {
        printf("%d \t", queue[i]);
    }    
    
    }
}

int main()
{
	int choice;
	do
	{
	printf("\n\nEnter your choice : \n ");
	printf("1. INSERT \n 2. DELETE \n 3. PEEK \n 4. DISPLAY \n 5. EXIT\n\n");
	scanf("%d", &choice);	

	switch(choice)
	{
		case 1:
			enqueue();
			break;
			
			case 2:
				dequeue();
				break;
				
				case 3:
					peek();
					break;
					
					case 4:
						display();
						break;
						
							case 5:
						        -1;
						        break;
				
						default:
							printf("Invalid choice!");
							break;
	}
	}while(choice != 0);
	
	return 0;
}

// Output:	
// Enter your choice :
// 1. INSERT
// 2. DELETE
// 3. PEEK
// 4. DISPLAY
// 5. EXIT
// 1
// Enter element in queue : 5
// Entered element is 5
//	
// Enter your choice :
// 1. INSERT
// 2. DELETE
// 3. PEEK
// 4. DISPLAY
// 5. EXIT