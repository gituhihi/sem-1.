#include<stdio.h>
int main(){
	int a;
	printf("ENTER A NUMBER:-");
	scanf("%d",&a);
	
	switch(a) 
	{ 
		case 1:printf("DAY IS MONDAY");
		break;
		case 2:printf("DAY IS TUESDAY");
		break;
		case 3:printf("DAY IS WEDNESDAY");
		break;
		case 4:printf("DAY IS THURSDAY");
		break;
		case 5:printf("DAY IS FRIDAY");
		break;
		case 6:printf("DAY IS SATURDAY");
		break; 
		case 7:printf("DAY IS SUNDAY");
		break;
	    return 0;
	}
		}
