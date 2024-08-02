/*Write a program that accepts numbers continuously as long as the number is positive and prints the
sum of the given numbers.*/ 

#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter the numbers(To stop enter negative number):\n");
    scanf("%d",&num);
    sum = 0;
    while (num>=0)
    {
        sum = sum +num;
        scanf("%d",&num);
    }
    printf("The sum is:%d",sum);
}
	
