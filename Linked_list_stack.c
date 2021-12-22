#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* link;
}*ptr, *cpt, *first=NULL;

void PUSH();
void POP();
void Display();

void main(){
    int choice, f=0;
    printf("Program to implement stack using Linked List\n");
    while(f==0){
        printf("Enter 1 for PUSH\n");
        printf("Enter 2 for POP\n");
        printf("Enter 3 for displaying elements in Linked list stack\n");
        printf("Enter any other number for exiting the loop\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            PUSH();
            break;
            case 2:
            POP();
            break;
            case 3:
            Display();
            break;
            default:
            f=1;
        }
    }
}

void PUSH(){
    ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter info be pushed: ");
    scanf("%d",&(ptr->info));
    if (first==NULL){
        first = ptr;
    }else{
        cpt = first;
        while(cpt->link!=NULL){
            cpt = cpt->link;
        }
        cpt->link = ptr;
    }
    ptr->link = NULL;
}

void POP(){
    if(first==NULL){
        printf("Linked list underflow\n");
    }else{
        ptr = first;
        if (first->link==NULL){
            first = NULL;
        }else{
            while(ptr->link!=NULL){
                cpt = ptr;
                ptr = ptr->link;
            }
            cpt->link = NULL;
            free(ptr);
        }

    }
}

void Display(){
    if (first==NULL){
        printf("Linked list stack empty\n");
    }else{
        cpt = first;
        while(cpt!=NULL){
            printf("%d, ",cpt->info);
            cpt = cpt->link;
        }
        printf("\n");
    }
}
