#include <stdio.h>

void main(){
    FILE *F1,*F2;
    int num,count=0,nums[10]={},no,i,j;
    F1=fopen("numbers.txt","w");
    for(i=0;i<10;i++){
        printf("Enter a no: ");
        scanf("%d",&nums[i]);
        putw(nums[i],F1);
    }
    // for (j=0;j<10;j++){
    //     printf("%d, ",nums[j]);
    // }
    fclose(F1);
    F1 = fopen ("numbers.txt","r");
    num= getw(F1);
    while(num!=EOF){
        printf("\nData in unsorted file is %d", num);
        num= getw(F1);
        count++;
    }
    fclose(F1);
    for (i=0;i<9;i++){
        for (j=0;j<9-i;j++){
            if (nums[j]>nums[j+1]){
                no=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=no;
            }
        }
    }
    // printf("\n");
    // for (j=0;j<10;j++){
    //     printf("%d, ",nums[j]);
    // }
    F2=fopen("sort_nums.txt","w");
    for(i=0;i<10;i++){
        putw(nums[i],F2);
    }
    fclose(F2);
    F2 = fopen ("sort_nums.txt","r");
    count = 0;
    num= getw(F2);
    while(num!=EOF){
        printf("\nData in sorted file is %d", num);
        num= getw(F2);
        count++;
    }
    fclose(F2);
}