#include <stdio.h>
int array[50],F=-1,R=-1;
void InsertionF(int N);
void InsertionR(int N);
void DeletionF(int N);
void DeletionR(int N);
void Display(int N);
void main(){
    int N, choice1, choice2, f=0, g=0;
    printf("Enter the no of elements in De-Queue: ");
    scanf("%d",&N);
    while(f==0){
        printf("Enter 1 for input restricted\n");
        printf("Enter 2 for output restricted\n");
        printf("Enter any other no to exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice1);
        switch(choice1){
            case 1:
            g=0;
            while(g==0){
                printf("Enter 1 for insertion via Rear\n");
                printf("Enter 2 for deletion via Front\n");
                printf("Enter 3 for deletion via Rear\n");
                printf("Enter 4 to display the DeQueue\n");
                printf("Enter any other no to exit Input Restricted\n");
                printf("Enter your choice: ");
                scanf("%d",&choice2);
                switch(choice2){
                    case 1:
                    InsertionR(N-1);
                    break;
                    case 2:
                    DeletionF(N-1);
                    break;
                    case 3:
                    DeletionR(N-1);
                    break;
                    case 4:
                    Display(N);
                    break;
                    default:
                    printf("Exited Input Restricted\n");
                    g=1;
                }
            }
            break;
            case 2:
            g=0;
            while(g==0){
                printf("Enter 1 for insertion via Front\n");
                printf("Enter 2 for insertion via Rear\n");
                printf("Enter 3 for deletion via Front\n");
                printf("Enter any other no to exit Output Restricted\n");
                printf("Enter your choice: ");
                scanf("%d",&choice2);
                switch(choice2){
                    case 1:
                    InsertionF(N-1);
                    break;
                    case 2:
                    InsertionR(N-1);
                    break;
                    case 3:
                    DeletionF(N-1);
                    break;
                    case 4:
                    Display(N);
                    break;
                    default:
                    printf("Exited Output Restricted\n");
                    g=1;
                }   
            }
            break;
            default:
            f=1;
        }

    }
}

void InsertionF(int N){
    int item;
    if ((F==R+1)||(F==0 && R==N)){
        printf("DeQueue Overflow\n");
    }else{
        if (F==0 || F==-1){
            F = N;
        }else{
            F--;
        }
        printf("Enter the element to enter: ");
        scanf("%d",&item);
        array[F]=item;
        if (R==-1){
            R = N;
        }
    }
}

void InsertionR(int N){
    int item;
    if ((F==0 && R==N)||(F==R+1)){
        printf("DeQueue Overflow\n");
    }else{
        if (R==N){
            R = 0;
        }else{
            R++;
        }
        printf("Enter the element to enter: ");
        scanf("%d",&item);
        array[R]=item;
        if (F==-1){
            F = 0;
        }
    }
}

void DeletionF(int N){
    int item;
    if (F==-1){
        printf("DeQueue Underflow\n");
    }else{
        item = array[F];
        printf("The deleted element is %d\n",item);
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

void DeletionR(int N){
    int item;
    if (F==-1){
        printf("DeQueue Underflow\n");
    }else{
        item = array[R];
        printf("The deleted element is %d\n",item);
        if (R==F){
            R=-1;
            F=-1;
        }else if (R==0){
            R=N;
        }else{
            R--;
        }
    }
}

void Display(int N){
    if(F<=R){
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
