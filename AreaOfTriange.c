// Program to Calculate Area Of A Triangle (Taking Input From the User)
// l*b

#include<stdio.h>

int main(){
	int length,breadth;
	printf("Enter The Length And Breadth:");
	scanf("%d%d",&length,&breadth);
	
	int area=length * breadth;
	
	printf("Area Of A Triange is: %d\n",area);
	
	return 0;
}
