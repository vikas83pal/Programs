// Program to Calculate Average Of 3 subjects Marks (Taking Input From the User)

#include<stdio.h>

int main(){
	int phy,chem,math;
	printf("Enter The Marks Of physics,Chemistry and Maths:");
	scanf("%d%d%d",&phy,&chem,&math);
	
	float avg=(phy+chem+math)/3;
	
	printf("The Average Marks Of physics,Chemistry and Maths is %.2f\n",avg);
	
	return 0;
}
