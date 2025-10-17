#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack
{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;
void push(STACK*s,int item)
{
    if(s->top==SIZE-1){
        printf("\nstack overflow \n");}
    else{
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}
void pop(STACK*s)
{
    if(s->top==-1){
        printf("\nStack underflow\n");}
    else{
        printf("\nElement popped is %d\n",s->data[s->top]);
        s->top=s->top-1;}
}
void display(STACK*s)
{
    int i;
    if(s->top==-1){
        printf("\nstack is empty\n");}
    else{
        printf("stack elements are:\n");
        for(i=s->top;i>=0;i--)
            printf("%d\n",s->data[i]);
    }
}
int main()
{
    int ch,item;
    STACK s;
    s.top=-1;
    for(;;){
        printf("\nSTACK OPERATIONS\n1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("\nEnter Elements:");
            scanf("%d",&item);
            push(&s,item);
            break;
            case 2:pop(&s);
            break;
            case 3:display(&s);
            break;
            default:exit(0);
        }}
        return 0;
}




