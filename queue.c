#include <stdio.h>

int array[50];
int N, F=-1, R=-1;
void Insert();
void Delete();;
void Display();
void main(){
    int choice,t=0;
    printf("Enter the no of elements in queue: ");
    scanf("%d",&N);
    printf("Enter 1 to insert element\n");
    printf("Enter 2 to delete element\n");
    printf("Enter 3 to display\n");
    while (t==0){
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            Insert();
            break;
            case 2:
            Delete();
            break;
            case 3:
            Display();
            break;
            default:
            t=1;
        }
    }
}

void Insert(){
    int item;
    printf("Enter the element to insert: ");
    scanf("%d",&item);
    if(R>=N-1){
        printf("Queue overflow\n");
    }else{
        if (R==-1){
            R=0;
        }else{
            R++;
        }
        array[R]=item;
    }
    if(F==-1){
        F=0;
    }
}

void Delete(){
    if (F==-1){
        printf("Queue underflow\n");
    }else{
        if(F==R){
            F=-1;R=-1;
        }else{
            F++;
        }
    }
}

void Display(){
    for (int i=F; i<=R; i++){
        printf("The element at index %d is %d\n",i,array[i]);
    }
}
