#include <stdio.h>

void Quick_sort(int,int);
int partition(int,int);
int no,arr[50];
void main(void){
	int i;
	printf("Enter the no of elements in the array: ");
	scanf("%d",&no);
	printf("Enter elements of array: ");
	for (i=0;i<no;i++){
		scanf("%d",&arr[i]);
	}
	printf("The unsorted array is : ");
	for (i=0;i<no-1;i++){
		printf("%d,",arr[i]);
	}
	printf("%d\n",arr[i]);
    Quick_sort(0,no-1);
	printf("The sorted array is : ");
	for (i=0;i<no-1;i++){
		printf("%d,",arr[i]);
	}
	printf("%d\n",arr[i]);
}

void Quick_sort(int l,int h){
    int pi;
    if (l<h){
        pi = partition(l,h);
        Quick_sort(l,pi);
        Quick_sort(pi+1,h);
    }
}

int partition(int l,int h){
    int pivot = arr[l];
    int temp, ptr1=l, ptr2=h;
    while(ptr1<ptr2){
        while (arr[ptr1]<=pivot){
            ptr1++;
        }
        while (arr[ptr2]>pivot){
            ptr2--;
        }
        if (ptr1<ptr2){
            temp = arr[ptr1];
            arr[ptr1] = arr[ptr2];
            arr[ptr2] = temp;
        }
    }
    temp = arr[ptr2];
    arr[ptr2] = arr[l];
    arr[l] = temp;
    return ptr2;
}
