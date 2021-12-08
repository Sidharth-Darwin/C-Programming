#include <stdio.h>
#include <string.h>
char stack[150], array[150], expression[150];
int ele=0, top=-1;

int Precedence(int i, int t);
void Push(char item);
void Pop();
void Display();

void main(){
    printf("Enter the expression: ");
    scanf("%s",expression);
    int i = 0;
    while(i<strlen(expression)){
        if(expression[i]=='*'||expression[i]=='/'||expression[i]=='+'||expression[i]=='-'||expression[i]=='^'){
            int n=i;
            int t=top;
            while(Precedence(i,t)>0 && n>=0){
                if (Precedence(i,t)==0||expression[n]=='('){
                    if (expression[n]=='('){
                        Pop();
                    }
                    break;
                }else{
                    if (expression[n]==')'){
                        Pop();
                    }else{
                        array[ele]=stack[top];
                        Pop();
                        ele++;
                    }
                }
                t--;
                n--;
            }
            Push(expression[i]);
        }
        else if(expression[i]=='('||expression[i]==')'){
            if (expression[i]==')'){
                for (int k=i;k>=0;k--){
                    if (stack[top]!='('){
                        array[ele]=stack[top];
                        Pop();
                        ele++;
                    }
                }
                Pop();
            }else{
                Push(expression[i]);
            }
        }else{
            array[ele]=expression[i];
            ele++;
        }
        i++;
    }
    while(top>-1){
        array[ele]=stack[top];
        Pop();
        ele++;
        i++;
    }
    printf("\nThe postfix is : ");
    printf("%s",array);
}


int Precedence(int i, int tp){
    if (expression[i]=='-'||expression[i]=='+'){
        if (stack[tp]=='^'||stack[tp]=='*'||stack[tp]=='/'||stack[tp]=='+'||stack[tp]=='-'){
            return 1;
        }
    } else if (expression[i]=='*'||expression[i]=='/'){
        if (stack[tp]=='^'||stack[tp]=='*'||stack[tp]=='/'){
            return 1;
        }
    } else if (expression[i]=='^'){
        if (stack[tp]=='^'){
            return 1;
        }
    } else{
        return 0;
    }
    return 0;
}


void Push(char item){
    if (top == -1){
        top = 0;
    }else{
        top = top+1;
    }
    stack[top]=item;
}

void Pop(){
    if (top<0){
        printf("Stack underflow\n");
    }else{
        top = top - 1;
    }
}
