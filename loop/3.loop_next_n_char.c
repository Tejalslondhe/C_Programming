/*3. Write a program to accept a character, an integer n and display the next n characters */

#include<stdio.h>
int main(){
	
	int limit,i=1;
	char ch;
	
	printf("Enter the character:");
	scanf("%c",&ch);
	
	printf("Enter the limit:");
	scanf("%d",&limit);
	
	while(i<=limit)
	{
		ch = ch+1;
		printf("%c\t",ch);
		i++;
	}	
	
}


