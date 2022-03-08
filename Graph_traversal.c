# Program to perform graph traversal using depth first search and breadth first search 

#include <stdio.h>
#include <string.h>

int no,top=-1,F=-1,R=-1;
int adj_matrix[20][20],stack[20],queue[20];

void dir_graph();
void un_dir_graph();
void dfs(int);
void push(int);
int pop();
void bfs(int);
void Insert(int);
int Delete();

void main(){
    int choice1, choice2, f=0;
    printf("Enter the total no of vertices/nodes in the Graph: ");
    scanf("%d",&no);
    for (int i=0;i<no;i++){
        memset(adj_matrix[i],0,no*sizeof(int));
    }
    printf("Enter 1 if the graph is directed and 2 for undirected: ");
    scanf("%d",&choice1);
    if (choice1==1){
        dir_graph();
    }else{
        un_dir_graph();
    }
    printf("Enter 1 for depth first search\n");
    printf("Enter 2 for breadth first search");
    while(f==0){
        printf("\nEnter your choice: ");
        scanf("%d",&choice2);
        switch(choice2){
            case 1:
            dfs(0);
            break;
            case 2:
            bfs(0);
            break;
            default:
            printf("Enter a valid choice\n");
            f=1;
        }
    }
}

void dir_graph(){
    int edges,n1,n2;
    printf("Enter the no of edges in the directed graph: ");
    scanf("%d",&edges);
    for (int i=0;i<edges;i++){
        printf("Enter the nodes for edge %d: ",i+1);
        scanf("%d %d",&n1,&n2);
        adj_matrix[n1][n2]=1;
    }
    for (int i=0;i<no;i++){
        for (int j=0;j<no;j++){
            printf("%d  ",adj_matrix[i][j]);
        }
        printf("\n");
    }
}

void un_dir_graph(){
    int edges,n1,n2;
    printf("Enter the no of edges in the undirected graph: ");
    scanf("%d",&edges);
    for (int i=0;i<edges;i++){
        printf("Enter the nodes for edge %d:",i+1);
        scanf("%d %d",&n1,&n2);
        adj_matrix[n1][n2]=1;
        adj_matrix[n2][n1]=1;
    }
    for (int i=0;i<no;i++){
        for (int j=0;j<no;j++){
            printf("%d  ",adj_matrix[i][j]);
        }
        printf("\n");
    }
}

void dfs(int source){
    int value,visited[20];
    memset(visited,0,no*sizeof(int));
    push(source);
    while(top!=-1){
        value = pop();
        if (visited[value]==0){
            printf("%d, ",value);
            visited[value]=1;
            for(int i=0;i<no;i++){
                if (adj_matrix[value][i]==1){
                    if (visited[i]!=1){
                        push(i);
                    }
                }
            }
        }
    }
}
void push(int val){
    top++;
    stack[top]=val;
}
int pop(){
    int val=stack[top];
    top--;
    return val;
}

void bfs(int source){
    int value,visited[20];
    memset(visited,0,no*sizeof(int));
    Insert(source);
    while(F!=-1){
        value = Delete();
        if (visited[value]==0){
            printf("%d, ",value);
            visited[value]=1;
            for (int i=0;i<no;i++){
                if (adj_matrix[value][i]==1){
                    if (visited[i]==0){
                        Insert(i);
                    }
                }
            }
        }
    }
}
void Insert(int val){
    R++;
    queue[R]=val;
    if (F==-1){
        F=0;
    }
}
int Delete(){
    int val=queue[F];
    if (F==R){
        F=-1;
        R=-1;
    }else{
        F++;
    }
    return val;
}
