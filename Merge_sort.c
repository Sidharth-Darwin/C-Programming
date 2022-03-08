#include <stdio.h>

void Merge_sort(int[],int,int);
void Merge(int[],int,int,int);

void main(void){
	int no,i,arr[50];
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
	Merge_sort(arr,0,no-1);
	printf("The sorted array is : ");
	for (i=0;i<no-1;i++){
		printf("%d,",arr[i]);
	}
	printf("%d\n",arr[i]);
}

void Merge_sort(int arr[],int l,int h){
	if (l<h){
		int m = l+(h-l)/2;
		Merge_sort(arr,l,m);
		Merge_sort(arr,m+1,h);
		// Merging the divided sorted arrays 
		Merge(arr,l,m,h);
	}
}

void Merge(int arr[],int l,int m,int h){
	int ta=l, sa1=l, sa2=m+1; // ta :- temporary array index, sa1 :- 1st part main array index, sa2 :- 2nd part main array index
	int tar[h+1]; // temporary array max size till only h+1 required 
	// Inserting the elements to temporary array in a sorted way from main array divided by two
	while(sa1<=m && sa2<=h){
		if(arr[sa1]<=arr[sa2]){
			tar[ta] = arr[sa1];
			sa1++;
		}else{
			tar[ta] = arr[sa2];
			sa2++;
		}
		ta++;
	}
	// Inserting the other elements that are left in main array to temporary array
	if (sa1>m){
		for (int i=sa2;i<=h;i++){
			tar[ta] = arr[i];
			ta++;
		}
	}else{
		for (int i=sa1;i<=h;i++){
			tar[ta] = arr[i];
			ta++;
		}
	}
	// Copying the elements from temporary array to main array
	for (int i=l;i<=h;i++){
		arr[i] = tar[i];
	}
}
