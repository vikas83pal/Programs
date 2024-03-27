// Find The Grades Of A Students
#include<stdio.h>
int main(){
	int m,p,c;
	printf("Enter The Marks Of Maths,Physics and Chemistry:");
	scanf("%d%d%d",&m,&p,&c);
	
	float avg=(m+p+c)/3;
	
	if(avg>=90){
		printf("O Grade\n");
	}else if(avg>=80 && avg<90){
		printf("A+ Grade\n");
	}else if(avg>=70 && avg<80){
		printf("A Grade\n");
	}else if(avg>=60 && avg<70){
		printf("B+ Grade\n");
	}else if(avg>=70 && avg<60){
		printf("C Grade\n");
	}else{
		printf("Fail\n");
	}
	
	return 0;
}
