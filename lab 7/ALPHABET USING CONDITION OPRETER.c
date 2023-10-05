#include<stdio.h>
void main(){
	char c;
	printf("ENTER AN ALPHABET");
	scanf("%c",&c);
	((c>='A' && c<='Z')||(c>='a' && c<='z'))?printf("ALPHABET"):printf("NOT ALPHABET");
}
