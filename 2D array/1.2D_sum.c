/*Write a program to accept a matrix A of size mXn and store its transpose in matrix B. Display
matrix B.*/

#include<stdio.h>
int main()
{
	int i,j,m,n;
	int arr[10][10];
	
	printf("Enter the dimension of array:");
	scanf("%d%d",&m,&n);
	
	printf("Enter the elements of the given matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("The elements of the matrix are\n");
	for(i=0;i<m;i++)
	{
		
		for(j=0;j<n;j++)
		{
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("The transpose of matrix is:\n");
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
}
