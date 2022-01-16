#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* link;
}*first=NULL,*ptr,*cpt,*rpt;

void Insert();
void Delete();
void Display();
void Reverse();

void main(){
    int f=0, choice;
    printf("=============================================\n");
    printf("   Program to reverse a singly linked list\n");
    printf("=============================================\n");
    printf("Enter 1 to insert element in Linked list\n");
    printf("Enter 2 to delete element from Linked list\n");
    printf("Enter 3 to display the Linked List\n");
    printf("Enter 4 to print the reversed Linked List\n");
    while(f==0){
        printf("Enter your option:");
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
            case 4:
            Reverse();
            break;
            default:
            f=1;
        }
    }
}

void Insert(){
    ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter element to insert: ");
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

void Delete(){
    int find;
    if (first==NULL){
        printf("Linked List Empty\n");
    }else{
        printf("Enter the element to delete: ");
        scanf("%d",&find);
        ptr = first;
        while(ptr->info!=find){
            cpt = ptr;
            ptr = ptr->link;
        }
        cpt->link = cpt->link->link;
        free(ptr);
    }
}

void Display(){
    ptr = first;
    if (first==NULL){
        printf("Empty Linked List\n");
    }else{
        while(ptr!=NULL){
            printf("%d->",ptr->info);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

void Reverse(){
    ptr = first;
    while(ptr->link!=NULL){
        cpt = ptr;
        ptr = ptr->link;
        if (cpt==first){
            cpt->link = NULL;
        }else{
            cpt->link = rpt;
        }
        rpt = cpt;
    }
    ptr->link = rpt;
    first = ptr;
}
