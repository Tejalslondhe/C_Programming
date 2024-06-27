/*6. Write a C program to check whether a entered character is uppercase or lowercase alphabet.*/

#include<stdio.h>

int main()
{
	
	char ch;
	
	printf("Enter the character:");
	scanf("%c",&ch);
	
	//if(ch>='A' && ch<='Z')
	if(ch>='A' && ch <='Z')
	{
		printf("The character %c is in Uppercase",ch);
	}
	//else if (ch>='a' && ch<='z')
	else if (ch>='a' && ch <='z')
	{
		printf("The character %c is in lowercase",ch);
	}
	else
	{
		printf("The given character is not an alphabet",ch);
	}
}
