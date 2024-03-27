// Program to Convert UpperCase To LoweCase

#include<stdio.h>

int main(){
	char c;
	printf("Enter The UpperCase Character:");
	scanf("%c",&c);
	
	int b=c+32;
	
	printf("LowerCase Of Corresponding Character is %c\n",b);
	
	return 0;
}
