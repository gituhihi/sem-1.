#include<stdio.h>
void main(){
	float principal,roi,timeperiod,intrest;
	printf("ENTER A PRINCIPAL VALUE:-");
	scanf("%f",&principal);
	printf("ENTER A ROI VALUE:-");
	scanf("%f",&roi);
	printf("ENTER A TIMEPERIOD VALUE:-");
	scanf("%f",&timeperiod);
	intrest=(principal*roi*timeperiod)/100;
	printf("VALUE OF INTREST:-%f",intrest);
	
}
