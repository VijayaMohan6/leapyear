#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d",&a);
	labelone : if(a>0){
	if (a%4==0){
	printf("The year %d is leap year",a);}
	else{printf("The year %d is Non leap year",a);
	}}
	else 
	{printf("Please enter the positive number");
		goto labelone;}
	return 0;}