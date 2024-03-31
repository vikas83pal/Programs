// program to print the pattern
/*
	* * * *
	* * *
	* *
	*
*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter The NUmber Of Lines To Print:");
	scanf("%d",&n);
	
	for(int i=n;i>=0;i--){
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
