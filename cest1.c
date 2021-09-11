#include <stdio.h>
#include <string.h>
void main(){
    int  a,i,j,len,AR[10]={2,3,1000,5,7,2,8,1,9,234},f, no;
    len=sizeof(AR)/sizeof(int);
    printf("the unsorted list is: ");
    for (j=0;j<len;j++){
        printf("%d, ",AR[j]);
    }
    printf("\nlength of the array is %d\n",len);
    for (i=0;i<len-1;i++){
        for (f=0;f<len-i-1;f++){
            if (AR[f]>AR[f+1]){
                no=AR[f];
                AR[f]=AR[f+1];
                AR[f+1]=no;
            }
        }
    }
    printf("the sorted list is: ");
    for (j=0;j<len;j++){
        printf("%d, ",AR[j]);
    }
}


// int recur_fib(int first,int middle,int last,int lim);
// void main(){
//     auto int limit,first=0,middle=1,last;
//     printf("Limit of fibonacci series: ");
//     scanf("%d",&limit);
//     last=first+middle;
//     printf("%d %d %d",first, middle, last);
//     recur_fib(first,middle,last,limit-3);
// }
// int recur_fib(int first,int middle,int last,int lim){
//     first=middle;
//     middle=last;
//     last=first+middle;
//     if (lim<=0){
//         printf("\nfinished");
//     }else{
//         printf(" %d",last);
//         return recur_fib(first,middle,last,lim-1);
//     }
// }

// int recur_fact(int fact);
// void main(){
//     auto int fact;
//     printf("Enter the no to find factorial: ");
//     scanf("%d",&fact);
//     printf("%d",recur_fact(fact));
// }
// int recur_fact(int fact){
//     if (fact==0){
//         return 1;
//     }else{
//         return fact*recur_fact(fact-1);
//     }
// }



// int palin_fun(char str1[50],int x);
// void main(){
//     auto char str1[50];
//     int len;
//     printf("Enter a string to check for palindrome: ");
//     gets(str1);
//     len=strlen(str1);
//     if (palin_fun(str1,len)==0){
//         printf("The string isnt a palindrome");
//     }else{
//         printf("The string is a palindrome");
//     }
// }
// int palin_fun(char str1[50],int x){
//     int i,j=0;
//     for(i=0;i<x;i++){
//         if(str1[i]!=str1[x-i-1]){
//             return 0;
//         }
//         j++;
//     }
//     return 1;
// }


// int linear_search(int list[50],int l_len,int find);
// void main(){
//     int l_len,list[50],find;
//     printf("Enter the no of elements in the list: ");
//     scanf("%d",&l_len);
//     printf("Enter the values of list:\n");
//     for(int i=0;i<l_len;i++){
//         scanf("%d",&list[i]);
//     }
//     printf("Enter the value to find: ");
//     scanf("%d",&find);
//     linear_search(list,l_len,find);
// }
// int linear_search(int list[50],int l_len,int find){
//     for(int j=0;j<l_len;j++){
//         if(list[j]==find){
//             printf("The element %d was found in the index %d of list.",find,j);
//         }
//     }
// }




// void main()
// {
//   	char str1[100], str2[100], str3[100];
//   	int i, j;
//   	printf("\n Please Enter the First String :  ");
//   	gets(str1); 	
//   	printf("\n Please Enter the Second String :  ");
//   	gets(str2);
//     for (i = 0; str1[i]!='\0'; i++){
//         str3[i] = str1[i];
//     }
//   	for (j = 0; str2[j]!='\0'; j++, i++)
//   	{
//   		str3[i] = str2[j];
//   	}
//   	str3[i] = '\0';
//   	printf("\n String after the Concatenate = %s", str3);
// }



// void main(){
//     int r,num2[3],number=982;
// 	for(int j=1;j<4;j++){
// 		r=number%10;
// 		number=number/10;
// 		printf("%d\n",r);
// 		num2[3-j]=r;
// 	}
// 	for(int i=0;i<3;i++){
// 		printf("%c",num2[i]+48);
// 	}
// }