#include <stdio.h>
int array[50];
void Insertion(int N,int i,int item);
void Deletion(int N,int i);
void Display(int N);
void main(){
    int N, item, i, k=0, choice;
    printf("Enter the total no of elements in array:");
    scanf("%d",&N);

    while(k==0){
        printf("\nTo insert element enter 1\n");
        printf("To delete element enter 2\n");
        printf("To display array enter 3\n");
        printf("To exit enter any other no\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d",&item);
            printf("Enter the index: ");
            scanf("%d",&i);
            Insertion(N-1,i,item);
            break;
            case 2:
            printf("Enter the index for element to be deleted: ");
            scanf("%d",&i);
            Deletion(N-1,i);
            break;
            case 3:
            Display(N-1);
            break;
            default:
            k=1;
        }
    }
}

void Insertion(int N,int i,int item){
    for (int j=i;j<=N;j++){
        array[j+1]=array[j];
    }
    array[i]=item;
}

void Deletion(int N, int i){
    for(int j=i;j<=N;j++){
        array[j]=array[j+1];
    }
}

void Display(int N){
    for(int j=0;j<=N;j++){
        printf("%d,",array[j]);
    }
    printf("\n");
}
