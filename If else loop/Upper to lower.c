/*7. Write a C program to accept a character and invert the case of it.*/

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    
    printf("The given alphabet is: ");
    
    
    ch = getchar();
    
    if (islower(ch))
        putchar(toupper(ch));
    else
        putchar(tolower(ch));
   
    return 0;
}
*/

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
		printf("The character %c  in lowercase is %c",ch,ch+32);
	}
	//else if (ch>='a' && ch<='z')
	else if (ch>='a' && ch <='z')
	{
		printf("The character %c in uppercase is %c",ch,ch-32);
	}
	else
	{
		printf("The given character is not an alphabet",ch);
	}
}

