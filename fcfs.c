// Program to simulate FCFS scheduling (First Come First Serve Scheduling)

#include <stdio.h>

void SortingArrivalTime(int n,int Process[30][6]);
void FindWTandTaT(int n,int Process[30][6]);

void main(){
    int n, Process[30][6]; 
    // First columns is process no (0), arrival time (1),burst time (2),
    // completion time (3), waiting time (4) and turnaround time (5).
    float awt=0, atat=0;
    printf("Enter the total no of processes: ");
    scanf("%d",&n);
    printf("Enter the Arrival time and Burst time of the processes:\n");
    for (int i=0;i<n;i++){
        Process[i][0]=i;
        printf("P%d\nArrival time : ",i);
        scanf("%d",&Process[i][1]);
        printf("Burst time : ");
        scanf("%d",&Process[i][2]);
    }
    SortingArrivalTime(n,Process);
    FindWTandTaT(n,Process);
    printf("Processes \tArrival Time \tBurst Time \tCompletion Time \tWaiting Time \tTurnaround Time\n");
    for (int i=0;i<n;i++){
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t%d\n",Process[i][0],Process[i][1],Process[i][2],Process[i][3],Process[i][4],Process[i][5]);
    }
    for (int i=0;i<n;i++){
        awt+=Process[i][3];
        atat+=Process[i][4];
    }
    printf("The average Waiting time is %f\n",(awt/n));
    printf("The average Turnaround time is %f\n",(atat/n));
}

void SortingArrivalTime(int n,int Process[30][6]){
    int temp,min;
    for (int i=0;i<n;i++){
        min=i;
        for (int j=i+1;j<n;j++){
            if ((Process[j][1]==Process[min][1]) && (Process[j][0]<Process[min][0])){
                for (int k=0;k<=5;k++){ 
                    temp=Process[j][k];
                    Process[j][k]=Process[min][k];
                    Process[min][k]=temp;
                }
            }
            else{
                if (Process[j][1]<Process[min][1]){
                    min=j;
                }
            }
        }
        for (int k=0;k<=5;k++){ // Swapping all columns instead of just arrival time column
            temp=Process[i][k];
            Process[i][k]=Process[min][k];
            Process[min][k]=temp;
        }
    }
}

void FindWTandTaT(int n,int Process[30][6]){
    int wastetime=0;
    Process[0][3]=Process[0][1]+Process[0][2];
    Process[0][5]=Process[0][3]-Process[0][1];
    Process[0][4]=Process[0][5]-Process[0][2];
    for (int i=1;i<n;i++){
        if (Process[i][1]<=Process[i-1][3]){
            Process[i][3]=Process[i-1][3]+Process[i][2];
        }else{
            wastetime=Process[i][1]-Process[i-1][3];
            Process[i][3]=Process[i-1][3]+Process[i][2]+wastetime;
        }
        Process[i][5]=Process[i][3]-Process[i][1];
        Process[i][4]=Process[i][5]-Process[i][2];
    }
}
