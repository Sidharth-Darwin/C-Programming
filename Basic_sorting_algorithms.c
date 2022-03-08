# Program to show Selection sort, Insertion sort and Bubble sort

#include <stdio.h>

void bubble_sort(int[],int);
void Insertion_sort(int[],int);
void Selection_sort(int[],int);
void Display(int[],int);
void main(){
	int no,i,choice,arr[50];
	printf("Enter the no of elements in the array: ");
	scanf("%d",&no);
	printf("Enter elements of array: ");
	for (i=0;i<no;i++){
		scanf("%d",&arr[i]);
	}
	printf("The unsorted array is : ");
	Display(arr,no);
    printf("Enter 1 for Bubble Sort\n");
    printf("Enter 2 for Insertion Sort\n");
    printf("Enter 3 for Selection Sort\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            bubble_sort(arr,no);
            break;
        case 2:
            Insertion_sort(arr,no);
            break;
        case 3:
            Selection_sort(arr,no);
            break;
        default:
            printf("Enter a valid option\n");
    }
	printf("The sorted array is : ");
    Display(arr,no);
}

void bubble_sort(int arr[],int no){
    int temp;
    for(int i=0; i<no-1; i++){
        for(int j=0; j<no-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void Insertion_sort(int arr[],int no){
    int j,key;
    for (int i=1;i<no;i++){
        j=i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void Selection_sort(int arr[],int no){
    int temp,min;
    for (int i=0;i<no-1;i++){
        min = i;
        for (int j=i+1;j<no;j++){
            if (arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void Display(int arr[],int no){
    int i;
	for (i=0;i<no-1;i++){
		printf("%d,",arr[i]);
	}
	printf("%d\n",arr[i]);
}
