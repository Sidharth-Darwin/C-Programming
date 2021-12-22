#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* link;
}*ptr, *cpt, *first=NULL;

void InsertionE();
void DeletionE();
void Display();

void main(){
    int choice, f=0;
    printf("Program for queue in Linked List\n");
    while(f==0){
        printf("Enter 1 to inserting elements at end\n");
        printf("Enter 2 for deleting element at beginning\n");
        printf("Enter 3 for displaying the linked list\n");
        printf("Enter any other number to exit from loop\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            InsertionE();
            break;
            case 2:
            DeletionE();
            break;
            case 3:
            Display();
            break;
            default:
            f=1;
        }
    }
}

void InsertionE(){
    ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the info to add: ");
    scanf("%d",&(ptr->info));
    cpt = first;
    if (cpt==NULL){
        first = ptr;
    }else{
        while(cpt->link!=NULL){
            cpt = cpt->link;
            printf("oof");
        }
        cpt->link = ptr;
    }
    ptr->link = NULL;    
}

void DeletionE(){
    if (first==NULL){
        printf("Linked list underflow\n");
    }else{
        cpt = first;
        first = first->link;
        free(cpt);
    }
}

void Display(){
    if (first==NULL){
        printf("Linked list empty\n");
    }else{
        cpt = first;
        while(cpt!=NULL){
            printf("%d, ",cpt->info);
            cpt = cpt->link;
        }
        printf("\n");
    }
}
