//Program to whether a alphabet is a vowel or consonant

#include<stdio.h>
int main(){
	char ch;
	printf("Enter The Chacter:");
	scanf("%c",&ch);
	
	switch(ch){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf("Vowel\n");
			break;
		default:printf("Consonant\n");
	}
		
	return 0;
}
