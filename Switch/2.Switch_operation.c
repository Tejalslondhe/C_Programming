/*2. Write a program, which accepts two integers and an operator as a character (+ - * / ),
performs the corresponding operation and displays the result.*/

#include<stdio.h>
int main()
{
	int num1,num2;
	char operation;
	
	
	printf("Choose the operartion(+,-,*,/):");
	scanf("%c",&operation);
	
	printf("Enter the 2 numbers:\n");
	scanf("%d%d",&num1,&num2);
	
	
	
	switch(operation)
	{
		case '+':
			printf("Addition of %d and %d is %d",num1,num2,num1+num2);
			break;
			
		case '-':
			printf("Subtraction of %d and %d is %d",num1,num2,num1-num2);
			break;
			
		case '*':
			printf("Product of %d and %d is %d",num1,num2,num1*num2);
			break;
			
		case '/':
			printf("Division of %d and %d is %d",num1,num2,num1/num2);
			break;
		
		default:
			printf("Invalid case");
			
	}
	return 0;
}
