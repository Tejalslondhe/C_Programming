/*Write a program to add and multiply two matrices. Perform necessary checks before
adding and multiplying the matrices.*/

#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,o,p,A[10][10],B[10][10],C[10][10],D[10][10];
	// m = row1, n=col1, o=row2, p=col2,c=add,d=mul;
	printf("Enter the dimention of the matrix A:");
	scanf("%d%d",&m,&n);
	
	printf("Enter the dimention of the matrix B:");
	scanf("%d%d",&o,&p);
	
	printf("Enter the matrix A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("The given matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",A[i][j]);
		}
		printf("\n");		
	}
	
	printf("Enter the matrix B:\n");
	for(k=0;k<o;k++)
	{
		for(l=0;l<p;l++)
		{
			scanf("%d",&B[k][l]);
		}
	}
	
	printf("The given matrix is:\n");
	for(k=0;k<o;k++)
	{
		for(l=0;l<p;l++)
		{
			printf(" %d",B[k][l]);
		}
		printf("\n");		
	}
	
	if(m!=o || n!=p)  //(row1!=row2 || col1!=col2
	{
		printf("Matrix addition is not possible");
		return;
	}
	else if(n!=o)
	{
		printf("Matrix addition is not possible");
		return;		
	}
	else
	{
	for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				C[i][j] = A[i][j] + B[i][j];
		printf("\nResult of Matirx Addition:\n");
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				printf(" %d ", C[i][j]);
			printf("\n");
		}
		
		//Matrix Multiplication
		
		for(i=0;i<m;i++)    //row1
		{
			for(j=0;j<p;j++)    //col2
			{
				D[i][j]=0;
				for(k=0;k<o;k++)     //o : row2
				{
					D[i][j] += A[i][k]*B[k][j];
				}
			}
		}
		printf("\nResult of Matrix Multiplication:\n");
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)      //p: col2
				printf("%d", D[i][j]);
			printf("\n");
		}	
	}
	
	
	
}
