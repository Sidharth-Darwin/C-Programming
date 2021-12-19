//Implementing Linear search in Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* link;
}*ptr,*cpt,*first;

void main(){
    int choice, search, f=0, index=0;
    first = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element to insert: ");
    scanf("%d",&(first->info));
    first->link = NULL;
    while(f==0){
        printf("Enter 1 for entering elements\n");
        printf("Enter any other numbers to stop entering elements\n");
        printf("Enter an element: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            ptr = (struct Node*)malloc(sizeof(struct Node));
            printf("Enter the element to insert: ");
            scanf("%d",&(ptr->info));
            cpt = first;
            while(cpt->link!=NULL){
                cpt = cpt->link;
            }
            cpt->link = ptr;
            ptr->link = NULL;
            break;
            default:
            f=1;
        }
    }
    ptr = (struct Node*)malloc(sizeof(struct Node));
    cpt = first;
    printf("Enter the value to search: ");
    scanf("%d",&search);
    while(cpt!=NULL){
        index++;
        if (cpt->info==search){
            printf("The element is in the %dth position of the Linked List\n",index);
            break;
        }
        cpt = cpt->link;
    }
}
