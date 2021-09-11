#include <stdio.h>
// #include <string.h>
// int main(){
//     int num, rem, rev=0, i=0;
//     printf("enter no to get reciprocal: ");
//     scanf("%d", &num);
//     for (i; num>0; i++){
//         rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
//     }
//     printf("%d", rev);
// };


// int main()
// {
//   	char name1[100], name2[100], name[100];
//   	int i, j;
//   	printf("\n Please Enter the First String :  ");
//   	gets(name1); 	
//   	printf("\n Please Enter the Second String :  ");
//   	gets(name2);
//      for (i = 0; name1[i]!='\0'; i++){
//         name[i] = name1[i];
//      }
//      name[i] =' '; //for string use " " and use ' ' for characters
// 	    i++;
//   	for (j = 0; name2[j]!='\0'; j++, i++)
//   	{
//   		name[i] = name2[j];
//   	}
//   	name[i] = '\0';

//   	printf("\n String after the Concatenate = %s", name);
  	
//   	return 0;
// }


// void main(){
//     int len,j,k,count=0, last; 
//     printf("print the no of items for the list: ");
//     scanf("%d",&len);
//     int array[len];
//     for (j=1;j<=len;j++){
//         printf("enter array content no %d: ", j);
//         scanf("%d",&array[j-1]);
//     };
//     while(count<len){
//         for (k=0;k<len;k++){
//             if (array[k]<array[k+1]){
//                 continue;
//             }else{
//                 last=array[k];
//                 array[k]=array[k+1];
//                 array[k+1]=last;
//             }
//         };
//         count++;
//     };
//     for (j=0;j<len;j++){
//         printf("%d",array[j]);
//     };
// }

// void main(){
//     int i,inp;
//     long long int f=0,m=1,l=1;
//     printf("ENTER TILL HOW MANY NO OF FIBONACCI: ");
//     scanf("%d",&inp);
//     printf("%lld %lld %lld",f,m,l);
//     for(i=3;i<inp;i++){
//         f=l;
//         l+=m;
//         m=f;
//         printf(" %lld",l);
//     }
// }

// void main(){
//     int i;
//     int no,count=1;
//     printf("enter the no to check prime or not: ");
//     scanf("%d",&no);
//     for(i=1;i<=no/2;i++){
//         if (no%i==0){
//             count++;
//         }
//     }
//     if (count>2){
//         printf("%d is not a prime no",no);
//     }else{
//         printf("%d is a prime no",no);
//     }
// }

// void main(){
//     int i;
//     int no,sum=0;
//     printf("No to print sum of its factors: ");
//     scanf("%d",&no);
//     for(i=1;i<=no/2;i++){
//         if (no%i==0){
//             sum+=i;
//         }
//     }
//     printf("sum of factors of %d is %d",no,sum+no);
// }

// void main(){
//     int list[50];
//     int no,i;
//     float avg,sum=0,prod=1;
//     printf("enter no of values in the array: ");
//     scanf("%d",&no);
//     printf("enter values of array");
//     for(i=0;i<no;i++){
//         scanf("%d",&list[i]);       
//     }
//     for(i=0;i<no;i++){
//         sum+=list[i];
//     }
//     printf("The sum of elements in the array is %f\n",sum);
//     avg=sum/no;
//     printf("The average of elements in the array is %f\n",avg);
//     for(i=0;i<no;i++){
//         prod=prod*list[i];
//     }
//     printf("The product of elements in the array is %f",prod);
// }

// void main(){
//     int no,i,key,j=0;
//     int list[50], occur[50];
//     printf("enter no of values in the array: ");
//     scanf("%d",&no);
//     printf("enter values of array");
//     for(i=0;i<no;i++){
//          scanf("%d",&list[i]);       
//     }
//     printf("enter the value to find the occurance: ");
//     scanf("%d",&key);
//     for(i=0;i<no;i++){
//         if (list[i]==key){
//             occur[j]=i;
//             j++;
//         }
//     }
//     printf("The occurance of %d in array is at index",key);
//     for(i=0;i<j;i++){
//         printf(" %d,",occur[i]);
//     }
// }

// void main(){
//     int i,j,f=0,choice,count;
//     char str[50],str2[50],str3[100];
//     printf("Enter the string:");
//     gets(str);
//     while(f==0){
//         printf("Enter 1 to find length of string\nEnter 2 to copy one string to another\nEnter 3 for concatenation of two strings\nEnter 4 for comparing two strings\n Enter your choice: ");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//                 count=0;
//                 for(i=0;str[i]!='\0';i++){
//                     count++;
//                 }
//                 printf("the length of string is %d\n",count);
//                 break;
//             case 2:
//                 for(i=0;str[i]!='\0';i++){
//                     str2[i]=str[i];
//                 }
//                 printf("string copied %s\n",str2);
//                 break;
//             case 3:
//                 for (i = 0; str[i]!='\0'; i++){
//                     str3[i] = str[i];
//                 }
//                 for (j = 0; str2[j]!='\0'; j++, i++){
//                     str3[i] = str2[j];
//                 }
//                 str3[i] = '\0';
//                 printf("\n String after the Concatenate = %s\n", str3);
//                 break;
//             case 4:
//                 i=0;
//                 while(str[i]==str2[i] && str[i]!='\0' && str2[i]!='\0'){
//                     i++;
//                 }
//                 if(str[i]=='\0' && str2[i]=='\0'){
//                     printf("both are same\n");
//                 }else{
//                     printf("they are different\n");
//                 }
//                 break;
//             default:
//                 f=1;                
//         }
//     }
// }

// int main(){
//     char von, vow[]="aeiou";
//     int i,r=0;
//     printf("enter the value to search:\t");
//     scanf("%c",&von);
//     for(i=0;i<5;i++){
//         if(vow[i]==von){
//             r++;
//         }
//     }
//     if (r==0){
//         printf("input doesnt have vowel");
//     }else{
//         printf("input have vowel %c",von);
//     }

// }



void main(){
    int row1,col1,row2,col2,i,j,choice,f=0, m, n, o;
    printf("Enter the order of first matrix:");
    scanf("%d %d",&row1,&col1);
    printf("Enter the order of second matrix:");
    scanf("%d %d",&row2,&col2);
    printf("Enter values of first matrix: ");
    int First[row1][col1], Second[row2][col2], Final[row1][col2];
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d", &First[i][j]);
        }
    }
    printf("Enter value of second matrix: ");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            scanf("%d",&Second[i][j]);
        }
    }
    printf("First matrix is\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d\t",First[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is\n");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            printf("%d\t",Second[i][j]);
        }
        printf("\n");
    }
    while(f==0){
            printf("Menu:\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter your choice :");
            scanf("%d",&choice);
        switch(choice){
            case 1:
                if(row1==row2 && col1==col2){
                    for(m=0;m<row1;m++){
                        for(n=0;n<col1;n++){
                            Final[m][n]=First[m][n]+Second[m][n];
                        }
                    }
                    for(i=0;i<row1;i++){
                        for(j=0;j<col1;j++){
                            printf("%d\t",Final[i][j]);
                        }
                        printf("\n");
                    }
                }
                // else{
                //     printf("Addition isnt possible\n");
                // }
                break;
            case 2:
                if(row1==row2 && col1==col2){
                    for(m=0;m<row1;m++){
                        for(n=0;n<col1;n++){
                            Final[m][n]=First[m][n]-Second[m][n];
                        }
                    }
                    for(i=0;i<row1;i++){
                        for(j=0;j<col1;j++){
                            printf("%d\t",Final[i][j]);
                        }
                        printf("\n");
                    }
                }
                // else{
                //     printf("Subtraction isnt possible\n");
                // }
                break;
            case 3:
                if(col1==row2){
                    for(m=0;m<row1;m++){
                        for(n=0;n<col2;n++){
                            Final[m][n]=0;
                            for(o=0;o<col1;o++){
                                Final[m][n]=Final[m][n]+ First[m][o]*Second[o][n];
                            }
                        }
                    }
                    for(i=0;i<row1;i++){
                        for(j=0;j<col2;j++){
                            printf("%d\t",Final[i][j]);
                        }
                        printf("\n");
                    }
                }
                // else{
                //     printf("Multiplication isnt possible\n");
                // }
                break;
            default:
                f=1;
        }
    }

}


// void main(){
//     int col1,col2,row1,row2,i,j,choose,t=1;
//     printf("enter no of rows in the array1: ");
//     scanf("%d",&row1);
//     printf("enter no of columns in the array1: ");
//     scanf("%d",&col1);
//     int array1[row1][col1];
//     printf("enter values of array 1:\n");
//     for(i=0;i<row1;i++){
//         for(j=0;j<col1;j++){
//             scanf("%d",&array1[i][j]);
//         }
//     }
//     printf("enter no of rows in the array2: ");
//     scanf("%d",&row2);
//     printf("enter no of columns in the array2: ");
//     scanf("%d",&col2);
//     int array2[row2][col2], array3[row1][col2];
//     printf("enter values of array 2:\n");
//     for(i=0;i<row2;i++){
//         for(j=0;j<col2;j++){
//             scanf("%d",&array2[i][j]);
//         }
//     }
//     for(i=0;i<row1;i++){
//         for(j=0;j<col1;j++){
//             printf("%d\t",array1[i][j]);
//         }
//     }
//     while (t==1){
//         printf("Enter 1 for adding matrix\nEnter 2 for subtracting matrix\nEnter 3 for multiplying matrix\nEnter any other no to stop\nEnter your choice: ");
//         scanf("%d",&choose);
//         switch(choose){
//             case 1:
//                 if(row1==row2 && col1==col2){
//                     for(i=0;i<row1;i++){
//                         for(j=0;j<col1;j++){
//                             array3[i][j]=array1[i][j]+array2[i][j];
//                         }
//                     }
//                     for(i=0;i<row1;i++){
//                         for(j=0;j<col2;j++){
//                             printf("%d\t",array3[i][j]);
//                         }
//                         printf("\n");
//                     }
//                 }
//             case 2:
//                 if(row1==row2 && col1==col2){
//                     for(i=0;i<row1;i++){
//                         for(j=0;j<col1;j++){
//                             array3[i][j]=array1[i][j]-array2[i][j];
//                         }
//                     }
//                     for(i=0;i<row1;i++){
//                         for(j=0;j<col2;j++){
//                             printf("%d\t",array3[i][j]);
//                         }
//                         printf("\n");
//                     }
//                 }
//             case 3:
//                 if(col1==row2){
//                     for(i=0;i<row1;i++){
//                         for(j=0;j<col1;j++){
//                             array3[i][j]=array1[i][j]-array2[i][j];
//                         }
//                     }
//                     for(i=0;i<row1;i++){
//                         for(j=0;j<col2;j++){
//                             array3[i][j]=0;
//                             for()
//                         }
//                         printf("\n");
//                     }
//                 }
                

//         }
//     }
// }