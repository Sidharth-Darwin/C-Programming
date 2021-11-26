#include <stdio.h>
void Push();
void Pop();
void Display();

int array[50];
int N, top, choice, t=0;

void main(){
    printf("Enter the no of elements in array: ");
    scanf("%d",&N);
    top = -1;
    printf("Enter 1 to push\n");
    printf("Enter 2 to pop\n");
    printf("Enter 3 to display\n");
    while (t==0){
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            Push();
            break;
            case 2:
            Pop();
            break;
            case 3:
            Display();
            break;
            default:
            t=1;
        }
    }
}


void Push(){
    int item;
    printf("Enter the element to push: ");
    scanf("%d", &item);
    if(top==N-1){
        printf("Stack overflow\n");
    }else{
        if (top == -1){
            top = 0;
        }else{
            top = top+1;
        }
        array[top]=item;
    }
}

void Pop(){
    if (top<0){
        printf("Stack underflow\n");
    }else{
        top = top - 1;
    }
}

void Display(){
    for(int i=0; i<=top; i++){
        printf("The element at index %d is %d\n",i,array[i]);
    }
}
