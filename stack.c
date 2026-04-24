#include <stdio.h>
#define size 10
int stack[size];
int top = -1;
void push(int value)
{
    if (top == size - 1)
        printf("Stack is Full\n");
    else
    {
        top++;
        stack[top] = value;
        printf("%d is succesfully pushed\n", value);
    }
}
void pop()
{
    if (top == -1)
        printf("Stack is Empty");
    else
    {
        printf("%d is succesfully poped\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
    printf("Stack Value : ");
    for(int i=0;i<=top;i++)
     printf("%d ",stack[i]);
     printf("\n");
}
int main(){
    printf("Stack Implementation\n");
    push(20);
    push(30);
    push(40);
    pop();
    display();
    push(60);
    pop();
    display();
    pop();
    display();
    return 0;
}