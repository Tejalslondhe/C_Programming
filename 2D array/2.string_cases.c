/*Write a menu driven program to perform the following operations on strings using standard
library functions: Length, Copy, Concatenation, Compare, Reverse, Uppercase,
Lowercase, Check case.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int len,ch,i;
	char str1[20],str2[20],*ptr;
	printf("Enter two strings");
	scanf("%s%s",&str1,&str2);
	

		printf("1.String length");
		printf("2.String copy");
		printf("3.String concatination");
		printf("4.String compare");
		printf("5.String reverse");
		printf("6.String case check");
		printf("Enter your choise");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				len = strlen(str1);
				printf("The length of the string is:",len);
				break;
				
			
			case 2:
				strcpy(str1,str2);
                printf("Str1=%s\n",str1);
                printf("Str2=%s\n",str2);
                break;
                
            case 3:
				strcat(str1,str2);
				printf("Concatinated string is",str1);
				break;
				
			case 4:
				i=strcmp(str1,str2);
				printf("%d\n",i);
				if (i==0)
				{
					printf("The strings are equal.\n");
				}
				else if (i < 0) 
				{
                printf("String 1 is less than string 2.\n");
                } 
				else 
				{
                printf("String 1 is greater than string 2.\n");
                }
                break;
                
            case 5:
            	printf("Reversed string =%s", strrev(str1));
            	break;
            	
            case 6:
            	printf("Enter the string to check the case:");
            	if (isupper(ch))
                printf("\nEntered character is uppercase character");
                else
                printf("\nEntered character is lowercase character");
            	
					
		}	
		
	
}


