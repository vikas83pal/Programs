#include<stdio.h>

int main(){

	int n;
	printf("Enter The Number Of Process:");
	scanf("%d",&n);
	int at[n],bt[n],ct[n],tat[n],wt[n],sum=0;
	float avgwt=0.0,avgtat=0.0;
	
	for(int i=0;i<n;i++){
		printf("Enter The Arrival Time of P%d:",i);
		scanf("%d",&at[i]);
		printf("Enter The Brust Time of P%d:",i);
		scanf("%d",&bt[i]);
		printf("\n");
	}
	
	for(int i=0;i<n;i++){
		sum=sum+bt[i];
		ct[i]=sum;
	}
	
	for(int i=0;i<n;i++){
		tat[i]=ct[i]-at[i];
		avgtat=avgtat+tat[i];
	}
	
	for(int i=0;i<n;i++){
		wt[i]=tat[i]-bt[i];
		avgwt=avgwt+wt[i];
	}
	
	printf("Process\tAt\tBt\tCt\tTat\twt\n");
	for(int i=0;i<n;i++){
		printf("P%d\t%d\t%d\t%d\t%d\t%d",i,at[i],bt[i],ct[i],tat[i],wt[i]);
		printf("\n");
	}
	
	printf("Average Waiting Time:%f\n",(avgwt/n));
	printf("Average Trunaroud Time:%f\n",(avgtat/n));
	
	return 0;
}
