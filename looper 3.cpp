#include<stdio.h>

int main(){
	
	int first,last,sum=0,a;
	
	printf("enter a any number:-");
	
	scanf("%d",&a);
	
	last=a%10;
	
	while(a>=10){	
	a=a/10;

}
first=a;
sum=first+last;
		printf("%d",sum);

}