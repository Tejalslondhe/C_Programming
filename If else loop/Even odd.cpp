/*1. Write a program to accept an integer and check if it is even or odd.*/

#include<stdio.h>
int main(){
	int num;
	
	printf("Enter the number to check even or odd:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
		
	}
}
