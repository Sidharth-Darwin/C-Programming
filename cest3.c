// //practice pointers and fns
// #include <stdio.h>
// #include <string.h>

// void big_func(int *x,int *y);
// void main(){
//     int a,b;
//     printf("Enter the first no:");
//     scanf("%d",&a);
//     printf("Enter the second no:");
//     scanf("%d",&b);
//     big_func(&a,&b);
//     printf("The biggest no is %d\n",a);
//     printf("The smallest no is %d",b);
// }
// void big_func(int *x,int *y){
//     auto int t;
//     if (*x<*y){
//         t=*x;
//         *x=*y;
//         *y=t;
//     }
// }


// void main(){
//     char str1[20],str2[20],str3[40];
//     printf("enter the first string: ");
//     gets(str1);
//     printf("enter the second string: ");
//     gets(str2);
//     char *p=str1, *q=str2;
//     int i,len1=strlen(str1),len2=strlen(str2);
//     for(i=0;i<len1;i++,p++){
//         str3[i]=*p;
//     }
//     for(i;i<len2+len1;i++,q++){
//         str3[i]=*q;
//     }
//     str3[i]='\0';
//     printf("The concatenated string is %s",str3);
// }


// void main(){
//     char str1[40],str2[20];
//     int l1,l2;
//     printf("Enter the first string: ");
//     gets(str1);
//     printf("Enter the second string: ");
//     gets(str2);
//     l1=strlen(str1);
//     l2=strlen(str2);
//     for(int i=l1;i<l1+l2;i++){
//         *(str1+i)=str2[i-l1];
//     }
//     printf("The modified string is %s",str1);
// }


// void main(){
//     int array1[]={1,3,2,4,3};
//     printf("%d",*(array1+2));
// }


// #include <stdio.h>
// struct Employee{
//     int empid;
//     char empname[20];
//     char empdept[30];
// };
// void main(){
//     struct Employee E1;
//     printf("Enter the details of employee");
//     scanf("%d%s%s",&E1.empid,E1.empname,E1.empdept);
//     printf("The details of employee is:");
//     printf("%d %s %s",E1.empid,E1.empname,E1.empdept);
// }


