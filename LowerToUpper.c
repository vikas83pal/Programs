// Program to Convert UpperCase To LoweCase

#include<stdio.h>

int main(){
	char c;
	printf("Enter The LowerCase Character:");
	scanf("%c",&c);
	
	int b=c-32;
	
	printf("UpperCase Of Corresponding Character is %c\n",b);
	
	return 0;
}
