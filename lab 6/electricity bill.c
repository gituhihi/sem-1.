#include<stdio.h>
void main()
{
	float unit,totalbill;
	printf("enter value of unit");
	scanf("%f",&unit);
	if (unit<=50)
	{
     	totalbill=unit*0.50;
     	printf("totalbill=%f",totalbill);
	}
	else if (unit>50&&unit<=150)  
	 {
	 		totalbill=(50*0.5)+(unit-50)*0.75;
     	printf("totalbill=%f",totalbill);
	}
	else if (unit>150&&unit<=250)
	{
			totalbill=(50*0.5)+(100*0.75)+(unit-150*1.2);
     	printf("totalbill=%f",totalbill);
	}
	else if (unit>250){
		totalbill=(50*0.5)+(100*0.75)+(100*1.2)+(unit-250*1.5);
	}	printf("totalbill=%f",totalbill);
	
	}
	 	
	 
	

