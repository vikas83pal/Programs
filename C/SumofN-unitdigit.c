#include<stdio.h>
 
int main(){
	int n,sum=0,ud;
	printf("Enter The Number:");
	scanf("%d",&n);
	
	//for(int i=0;i<n;i++){
		while(n>0){
			ud=n/10;
			ud=ud%10;
			sum=sum+ud;
			n--;
		}
	//}
	
	printf("%d",sum);
	
	return 0;
}
