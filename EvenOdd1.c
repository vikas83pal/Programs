// program to find even and odd without exctracting the digit

#include<stdio.h>

int main(){
	int n;
	printf("Enter The Number:");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Number Is Even\n");
	}
	else{
		printf("Number Is Odd\n");
	}
	
	return 0;
}
