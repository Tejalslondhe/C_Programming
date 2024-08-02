/*4. Write a program to calculate factorial of a number.

For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120*/


#include<stdio.h>
int main(){
    int i,fact=1,num;
    
    printf("Enter a number to find factorial: ");
    scanf("%d",&num); 
    
    for(i=1;i<=num;i++)
    {
        fact=fact*i; 
	}
	printf("Factorial of %d is: %d",num,fact);
    return 0;
}

