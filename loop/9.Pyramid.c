/*9. Write a program to solve following pyramid pattern
a)* | b) 1 |c) A
* * | 1 2 | A B
* * * | 1 2 3 | A B C
* * * * | 1 2 3 4 | A B C D
* * * * * | 1 2 3 4 5 | A B C D E
*/

/*#include<stdio.h>
int main()
{
	int i,j;
	
	
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
*/





/*
#include<stdio.h>

int main()
{
	int i,j;
	
	
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

*/



/*

#include<stdio.h>

int main()
{
	char i,j;
	
	
	for (i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

*/

#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

