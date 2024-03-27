// program to calculate the sum of n number

#include<stdio.h>

int main(){
	int n,sum=0;
	printf("Enter The Number:");
	scanf("%d",&n);
	
	while(n>0){
		sum=sum+n;
		n--;
	}
	
	printf("Sum Of N Natural Number Is:%d\n",sum);
	
	return 0;
}
