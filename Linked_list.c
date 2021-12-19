#include <stdio.h>
#include <stdlib.h>

void Insertion_beginning();
void Insertion_inbetween();
void Insertion_end();
void Deletion_beginning();
void Deletion_inbetween();
void Deletion_end();
void Display_linkedlist();


struct Node{
    int info;
    struct Node *link;
}*ptr,*cpt,*first=NULL;


void main(){
    // ptr = (struct Node*)malloc(sizeof(struct Node));
    int choice, f=0;
    while(f==0){
        printf("Enter 1 for insertion into linked list beginning\n");
        printf("Enter 2 for insertion into linked list inbetween\n");
        printf("Enter 3 for insertion into linked list end\n");
        printf("Enter 4 for deletion from beginning\n");
        printf("Enter 5 for deletion inbetween\n");
        printf("Enter 6 for deletion at end\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            Insertion_beginning();
            break;
            case 2:
            Insertion_inbetween();
            break;
            case 3:
            Insertion_end();
            break;
            case 4:
            Deletion_beginning();
            break;
            case 5:
            Deletion_inbetween();
            break;
            case 6:
            Deletion_end();
            break;
            case 7:
            Display_linkedlist();
            break;
            default:
            f=1;
        }
    }
}

void Insertion_beginning(){
    ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the info to insert: ");
    scanf("%d",&(ptr->info));
    ptr->link = first;
    first = ptr;
}

void Insertion_inbetween(){
    int find;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the info to insert: ");
    scanf("%d",&(ptr->info));
    printf("Enter the element after to insert the info: ");
    scanf("%d",&find);
    cpt = first;
    while(cpt->info!=find){
        cpt = cpt->link;
    }
    ptr->link = cpt->link;
    cpt->link = ptr;
}

void Insertion_end(){
    ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the info to insert: ");
    scanf("%d",&(ptr->info));
    cpt = first;
    while(cpt->link!=NULL){
        cpt = cpt->link;
    }
    cpt->link = ptr;
    ptr->link = NULL;
}

void Deletion_beginning(){
    if (first==NULL){
        printf("Linked List Empty\n");
    }else{
        cpt = first;
        first = cpt->link;
        free(cpt);
    }
}

void Deletion_inbetween(){
    if (first==NULL){
        printf("Linked List Empty\n");
    }else{
        int find;
        printf("Enter the element to delete: ");
        scanf("%d",&find);
        cpt = first;
        while(cpt->info!=find){
            ptr = cpt;
            cpt = cpt->link;
        }
        ptr->link = cpt->link;
        free(cpt);
    }
}

void Deletion_end(){
    if (first==NULL){
        printf("Linked List Empty\n");
    }else{
        cpt = first;
        while(cpt->link!=NULL){
            ptr = cpt;
            cpt = cpt->link;
        }
        ptr->link = NULL;
        free(cpt);
    }
}

void Display_linkedlist(){
    cpt = first;
    printf("The linked list is : ");
    while(cpt!=NULL){
        printf("%d, ",cpt->info);
        cpt = cpt->link;
    }
    printf("\n");
}
