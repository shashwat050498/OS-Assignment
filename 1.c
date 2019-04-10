#include<stdio.h>

int main()
 {
   int a,n,tq,awt,att,m;
   int pr[10],pt[10],ps[10],Waiting[10],time[10],at[10];
 
 
   printf("Enter Number Of Processes ");
   scanf("%d",&n);
   printf("\nEnter the quantum time given- ");
   scanf("%d",&tq);
   printf("\n\t Burst_Time : Time_Priorities : Arrival_Time  \n");
 
   for(m=0;m<n;m++)
    {
      printf("\n Process %d ",m+1);
      scanf("%d %d %d",&ps[m],&pt[m],&at[m]);
  pr[m]=m+1;
    }
 

int p;
  for(m=0;m<n-1;m++)
   {
     for(p=m+1;p<n;p++)
     {
       if(pt[m]<pt[p])
       {
     a=pt[m];
     pt[m]=pt[p];
     pt[p]=a;
     a=ps[p];
     ps[m]=ps[p];
     ps[p]=a;
     a=pr[p];
     pr[m]=pr[p];
     pr[p]=a;
      }
   }
}
Waiting[0]=0;
awt=0;
time[0]=ps[0];
att=time[0];
for(m=1;m<n;m++)
 {
 	if(tq<n || tq>n) {

   Waiting[m]=time[m-1];
   awt=awt+Waiting[m];
   time[m]=Waiting[m]+ps[m];
   att=att+time[m];
}
 }
 
 //Gantt chart
 printf("\n");
 printf("Gantt chart\n");
 for(m=0;m<n;m++)
 {
 	printf("P %d ",pr[m]);
 }
 
printf("\n\nProcess \t Burst Time \t Waiting Time \t Turn Around Time   Priority \tArrival time \n");
for(m=0;m<n;m++)
{
printf("\n  %d",pr[m]); printf("\t\t %d",ps[m]); printf("\t\t %d",Waiting[m]); printf("\t\t %d",time[m]); printf("\t\t %d",pt[m]); printf("\t\t %d",at[m]);
}
awt=awt/n;
att=att/n;
printf("\n Average Waiting Time : %d ",awt);
printf("\n Average Turn Around Time : %d",att);
getch();
}
