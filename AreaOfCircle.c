// Program to Calculate Area Of A circle (Taking Input From the User)
// 3.14 * r * r

#include<stdio.h>

int main(){

	int r;
	printf("Enter The radius:");
	scanf("%d",&r);
	
	float area=3.14 * r * r;
	
	printf("Area Of A circle is: %f\n",area);
	
	return 0;
}
