/* 8. Write a program to accept 3 numbers and compute minimum and maximum from them.*/

#include <stdio.h>
int main()
{
   int num1,num2,num3;
   
   printf("Enter the numbers:\n");
   scanf("%d%d%d",&num1,&num2,&num3);
   
   if (num1 >num2 && num1>num3)
   {
       printf("%d is greater number among all",num1);
   }
   else if (num2 >num1 && num2>num3)
   {
       printf("%d is greater number among all",num2);
   }
   else 
   {
       printf("%d is greater number among all",num3);
   }
       
    return 0;
}

