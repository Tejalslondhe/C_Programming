/*3. Write a program, which accepts annual basic salary of an employee and calculates and displays the
Income tax as per the following rules.*/

Basic: < 1, 50,000 Tax = 0
1, 50,000 to 3,00,000 Tax = 20%
> 3,00,000 Tax = 30%
#include <stdio.h>
int main()
{
   float salary,Tax;
   printf("Enter the basic salary:");
   scanf("%f",&salary);
   
   if (salary < 150000)
   {
       Tax = salary*0;
       printf("Income tax  is %f", Tax);
   }
   else if (150000 < salary < 300000 )
   {
       Tax = salary*0.2;
       printf("Income tax is:%f",Tax);
   }
   else 
   {
       Tax = salary*0.3;
       printf("Income tax is:%f", Tax);
   }
   
    return 0;
}

