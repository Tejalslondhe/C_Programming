/*5. Accept two numbers and swap two numbers using
i) Third variable
ii) By performing arithmetic operations.*/

#include<stdio.h>
int main(){
	
	int a,b,c,x,y;
	
	printf("Enter a and b:\n");
	scanf("%d%d",&a,&b);
	
	a = b;
	b = c;
	c = a;
	
	printf("After swapping a is %d\n",a);
	printf("After swapping b is %d\n",b);
	
	printf("Enter x and y:\n");
	scanf("%d%d",&x,&y);
	
	
	x = x+y;
	y = x-y;
	x = x-y;
	
	printf("After swapping by arithmetic operation  x is %d\n",x);
	printf("After swapping by arithmetic operation y is %d",y);
	
	
}
