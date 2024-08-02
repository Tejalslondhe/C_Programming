/*5. Write a program having menu that has three options - add, subtract or multiply two fractions. The two
fractions and the options are taken as input and the result is displayed as output. Each fraction is read as
two integers, numerator and denominator
*/

#include<stdio.h>
int main(){
	int a,b,c,d,numerator,denominator;
	char operation;
	
	
	printf("Enter the numerator of first fraction:");
	scanf("%d",&a);
	
	printf("Enter the denominator of first fraction:");
	scanf("%d",&b);
	
	printf("Enter the numerator of second fraction:");
	scanf("%d",&c);
	
	printf("Enter the denominator of second fraction:");
	scanf("%d",&d);
	
	printf("Choose\n1.add\n2.sub\n3.mul\n :");
 	scanf("%d",&operation);
 
	switch(operation)
	{
		case 1:
		numerator=(a*d)+(c*b);
    	denominator=(b*d);
    	printf("addition is %d/%d",numerator,denominator);
    	break;
 	
	 	case 2:
	 	numerator=(a*d)-(c*b);
     	denominator=(b*d);
     	printf("subtraction is %d/%d",numerator,denominator);
     	break;
 		
		case 3:numerator= (a*c);
     	denominator=(b*d);
     	printf("multiplication is %d/%d",numerator,denominator);
     	break;

	}
	return 0;
}

