// program to print below pattern
/*
	*
	* *
	* * * 
	* * * *
	* * * * *
*/

#include<stdio.h>

int main(){
	int row;
	printf("Enter The Number Of Rows:");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++){ // no of rows
		for(int j=0;j<=i;j++){ //no of chacter in each row
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}

