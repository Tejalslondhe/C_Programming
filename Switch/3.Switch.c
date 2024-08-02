/*3. Accept two numbers in variables x and y from the user and perform the following operations
Options	Actions
1.	Equality Check if x is equal to y
2.	Less Than Check if x is less than y
3.	Quotient and Remainder Divide x by y and display the quotient and remainder
4.	Range : Accept a number and check if it lies between x and y (both inclusive)
5.	Swap : Interchange x and y
*/

#include <stdio.h>

int main()
{
    int x,y,case_no,Quotient, remainder_1,num1;
    
    printf("Enter x and y:\n");
    scanf("%d%d",&x,&y);
    
    printf("case 1: check equality\n");
    printf("case 2: check x less than y\n");
    printf("case 3: Divide x by y and display the quotient and remainder\n");
    printf("case 4: Range : Accept a number and check if it lies between x and y (both inclusive)\n");
    printf("case 5: Swap : Interchange x and y\n");
    
    printf("choose any option:\n");
    scanf("%d", &case_no);
    
    
    switch(case_no)
    {
        case 1:
        if (x==y)
        printf("%d is equal to %d",x,y);
        else
        printf("%d is not equal to %d",x,y);
        break;
        
        case 2:
        if (x<y)
        printf("%d is less than %d",x,y);
        else
        printf("%d is not less than %d",x,y);
        break;
        
        case 3:
        Quotient = x/y;
        remainder_1 = x%y;
        
        printf("After dividing %d by %d, we get quotient as %d\n",x,y,Quotient);
        printf("After dividing %d by %d, we get remainder as %d",x,y,remainder_1);
        break;
        
        
        case 4:
        printf("Enter the number:\n");
        scanf("%d",&num1);
        
        if (num1 >= x && num1<=y)
        printf("%d is lies between %d and %d",num1,x,y);
        else
        printf("%d is not lies between %d and %d",num1,x,y);
        break;
        
        case 5:
        x = x+y;
        y = x-y;
        x = x-y;
        printf("After swapping first number is %d\n",x);
        printf("After swapping second number is %d",y);
        break;
        
    }

    return 0;
} 

