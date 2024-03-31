// Program to print pattern
/* 
	1 2 3 4
	1 2 3 4
	1 2 3 4
	1 2 3 4
*/
#include<stdio.h>
int main(){

	int row,col;
	printf("Enter The Numbere Of Rows: ");
	scanf("%d",&row);
	
	printf("Enter The Numbere Of Colum: ");
	scanf("%d",&col);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	return 0;
}
	
