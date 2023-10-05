#include<stdio.h>
void main(){
	char c;
	printf("ENTER ANYTHING AS U WISH:-");
	scanf("%c",&c);
	if(c>='A' && c<='Z')
	{
		printf("THIS IS UPPER ALPHABET");
	}
	else if(c>='a' && c<='z')
	{
		printf("THIS IS LOWER ALPHABET");
	}
	else if(c>50 && c<=50)
	{
		printf(" THIS IS DIGIT");
	}
	else 
	printf(" THIS IS SPECIAL CHARACTER");
	
}
