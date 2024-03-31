// program to find even or odd by extracting the digit i.e last

#include<stdio.h>

int main(){
	int n;
	printf("Enter The Number:");
	scanf("%d",&n);
	
	int uniDis=n%10;
	
	if(uniDis==0 || uniDis==2 || uniDis==4 || uniDis==6 || uniDis==8){
		printf("Number Is Even\n");
	}else{
		printf("Number Is Odd\n");
	}
	
	return 0;
}
