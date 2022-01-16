// Implement polynomial addition using Linked List.

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int coef;
    int expo;
    struct Node* link;
}*ptr1,*ptr2,*ptr3, *cpt, *first1=NULL, *first2=NULL, *first3=NULL;

void main(){
    int max;
    printf("Program to implement polynomial ");
    printf("Enter the max exponent of first expression: ");
    scanf("%d",&max);
    for(int i=max-1;i>=0;i--){
        ptr1 = (struct Node*)malloc(sizeof(struct Node));
        ptr1->expo = i;
        printf("Enter the coefficient in %d exponent: ");
        scanf("%d",&(ptr1->coef));
        if (first1==NULL){
            first1=ptr1;
        }else{
            cpt->link = ptr1;
        }
        cpt = ptr1;
        ptr1->link=NULL;
    }
    printf("Enter the max exponent of second expression: ");
    scanf("%d",&max);
    for(int i=max-1;i>=0;i--){
        ptr2 = (struct Node*)malloc(sizeof(struct Node));
        ptr2->expo = i;
        printf("Enter the coefficient in %d exponent: ");
        scanf("%d",&(ptr2->coef));
        if (first2==NULL){
            first2=ptr2;
        }else{
            cpt->link = ptr2;
        }
        cpt = ptr2;
        ptr2->link=NULL;
    }
    printf("Expression 1: ");
    ptr1 = first1;
    while(ptr1->link!=NULL){
        printf("%dx^%d + ",ptr1->coef,ptr1->expo);
        ptr1 = ptr1->link;
    }
    printf("%d ",ptr1->coef);
    printf("\nExpression 2: ");
    ptr2 = first2;
    while(ptr2->link!=NULL){
        printf("%dx^%d + ",ptr2->coef,ptr2->expo);
        ptr2 = ptr2->link;
    }
    printf("%d ",ptr2->coef);
    ptr1 = first1; ptr2 = first2;
    while(ptr1!=NULL && ptr2!=NULL){
        ptr3 = (struct Node*)malloc(sizeof(struct Node));
        if (ptr1->expo>ptr2->expo){
            ptr3->expo = ptr1->expo;
            ptr3->coef = ptr1->coef;
            ptr1 = ptr1->link;

        }else if(ptr2->expo>ptr1->expo){
            ptr3->expo = ptr2->expo;
            ptr3->coef = ptr2->coef;
            ptr2 = ptr2->link;
        }else{
            ptr3->expo = ptr1->expo ;
            ptr3->coef = ptr1->coef + ptr2->coef;
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        if (first3==NULL){
            first3 = ptr3;
            cpt = ptr3;
        }else{
            cpt->link = ptr3;
            cpt = ptr3;
        }
        ptr3->link=NULL;
    }
    if (ptr1!=NULL){
        ptr3->expo = ptr1->expo;
        ptr3->coef = ptr1->coef;
        if (first3==NULL){
            first3 = ptr3;
            cpt = ptr3;
        }else{
            cpt->link = ptr3;
            cpt = ptr3;
        }
        ptr3->link=NULL;
        ptr1 = ptr1->link;
    }
    if (ptr2!=NULL){
        ptr3->expo = ptr2->expo;
        ptr3->coef = ptr2->coef;
        if (first3==NULL){
            first3 = ptr3;
            cpt = ptr3;
        }else{
            cpt->link = ptr3;
            cpt = ptr3;
        }
        ptr3->link=NULL;
        ptr2 = ptr2->link;
    }
    printf("\nFinal expression: ");
    ptr3 = first3;
    while(ptr3->link!=NULL){
        printf("%dx^%d + ",ptr3->coef,ptr3->expo);
        ptr3 = ptr3->link;
    }
    printf("%d ",ptr3->coef);
}
