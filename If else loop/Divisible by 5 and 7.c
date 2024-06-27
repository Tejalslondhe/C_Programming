/*2. Write a program to accept a number and check if it is divisible by 5 and 7.*/

#include <stdio.h>
int main()
{
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   
   if (num%5 == 0 && num%7 == 0)
   {
   printf("The number %d is divisible by 5 and 7.",num);
   }
   
   else
   {
   printf("The number %d is not divisible by 5 and 7.",num);
   }
   
    return 0;
}

