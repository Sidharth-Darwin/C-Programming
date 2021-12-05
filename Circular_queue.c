#include <stdio.h>

int array[100],F=-1,R=-1;
void Insert(int N);
void Delete(int N);
void Display(int N);
void main(){
    int N, j=0, choice;
    printf("Enter the total no of elements in the circular queue: ");
    scanf("%d",&N);
    while(j==0){
        printf("Enter 1 for inserting element\n");
        printf("Enter 2 for deleting element\n");
        printf("Enter 3 for displaying elements in circular queue\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            Insert(N-1);
            break;
            case 2:
            Delete(N-1);
            break;
            case 3:
            Display(N-1);
            break;
            default:
            j=1;
        }
    }
}

void Insert(int N){
    if ((F==0 && R==N)||(F==R+1)){
        printf("Queue overflow\n");
    }else{
        int item;
        printf("Enter the element to add: ");
        scanf("%d",&item);
        if (R==N){
            R=0;
        }else{
            R++;
        }
        array[R]=item;
        if (F==-1){
            F=0;
        }
    }
}


void Delete(int N){
    int item;
    if (F==-1){
        printf("Queue underflow\n");
    }else{
        if (F==R){
            F=-1;
            R=-1;
        }else if (F==N){
            F=0;
        }else{
            F++;
        }
    }
}


void Display(int N){
    if (F<=R){
        for (int i=F;i<=R;i++){
            printf("%d,",array[i]);
        }
    }else{
        for (int i=F;i<=N;i++){
            printf("%d,",array[i]);
        }
        for (int i=0;i<=R;i++){
            printf("%d,",array[i]);
        }
    }
    printf("\n");
}

