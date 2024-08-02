/*4. Write a program to count Occurrence Of Vowels & Consonants in a String*/

#include <stdio.h>
#include <ctype.h>
 
int main()
{
    // Initializing variable.
    char str[100];  
    int i, vowels = 0,consonants = 0;
    
    // Accepting input.
    printf("Enter the string: ");
    
    gets(str);
    
    
    for(i = 0; str[i]; i++)  
    {
        //Counting the vowels.
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||
           str[i]=='o'|| str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
            vowels++;
        }
        else
		{
        	consonants++;
		}
    }
 	
    //Printing the count of vowels.
    printf("Total number of vowels: = %d\n",vowels);
    printf("Total number of consonants: =%d\n",consonants);
    
    return 0;
}
