#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter the element to push in the stack : ");
    scanf("%d", &x);
    
    if(top >= N-1)
    {
        printf("Stack is full!");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty!");
    }
    else
    {
        int item = stack[top];
        top--;
        printf("%d is removed", item);

    }
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("Top of stack is %d", stack[top]);
    }
}

void display()
{
    if(top >= 0)
    {
        for(int i = top; i >=0; i--)
        {
            int element = stack[i];
            printf("%d\t", element);
        }
    }
    else
    {
        printf("Stack is empty!");
        
    }
}

int main()
{
    int ch;
    do
    {
        printf("\nEnter the operation to perform on the Stack : \n1.Push \n2.Pop\n3.Peek\n4.Display \n5.Exit \n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push();
                break;

                case 2:
                    pop();
                    break;

                    case 3:
                        peek();
                        break;

                        case 4:
                            display();
                            break;

                            case 5:
                                break;

                                default:
                                    printf("Invalid choice!");
                
        }
    }
   
    while(ch != 5);

    return 0;
}
// Output: Enter the operation to perform on the Stack :
// 1.Push
// 2.Pop
// 3.Peek
// 4.Display
// 5.Exit
// 1
// Enter the element to push in the stack : 5
// Enter the operation to perform on the Stack :
// 1.Push
// 2.Pop
// 3.Peek
// 4.Display
// 5.Exit
// 4
// 5
// Enter the operation to perform on the Stack :
