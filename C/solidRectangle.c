// program to print patter
/* 
	* * * * *
	* * * * * 
	* * * * * 
*/

#include<stdio.h>

int main(){

	int row,erow;
	printf("Enter The Number Of rows:");
	scanf("%d",&row);
	printf("Enter The Number Of Each Rows:");
	scanf("%d",&erow);
	
	for(int i=0;i<row;i++){
		for(int j=0;j<erow;j++){
			printf("*");
		}
		printf("\n");
	}
			
	return 0;
}
