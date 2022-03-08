#include <stdio.h>

void Heap_sort();
void Build_heap();
void Heapify(int);
int no,heap[50];

void main(void){
	int i,len;
	printf("Enter the no of elements in the heap: ");
	scanf("%d",&no);
    len = no-1;
	printf("Enter elements of heap: ");
	for (i=0;i<=len;i++){
		scanf("%d",&heap[i]);
	}
	printf("The unsorted heap is : ");
	for (i=0;i<len;i++){
        
		printf("%d,",heap[i]);
	}
	printf("%d\n",heap[i]);
    Heap_sort();
	printf("The sorted heap is : ");
	for (i=0;i<len;i++){
		printf("%d,",heap[i]);
	}
	printf("%d\n",heap[i]);
}

void Heap_sort(){
    int temp;
    Build_heap();
    for (int i=no-1;i>=1;i--){
        Build_heap();
        temp = heap[i];
        heap[i] = heap[0];
        heap[0] = temp;
        no--;
        Heapify(0);
    }
}

void Build_heap(){
    for (int i=((no-1)/2);i>=0;i--){
        Heapify(i);
    }
}

void Heapify(int i){
    int largest,temp,l=(2*i+1), r=(2*i+2);
    if (l<=no-1 && heap[l]>heap[i]){
        largest = l;
    }else{
        largest = i;
    }
    if (r<no-1 && heap[r]>heap[largest]){
        largest = r;
    }
    if (i!=largest){
        temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        Heapify(largest);
    }
}
