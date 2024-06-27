
/* multiplication of an array*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,row1,col1,row2,col2,arr1[10][10],arr2[10][10],mul[10][10];
	
	cout<<"Enter the dimension of first array";
	cin>>row1;
	cin>>col1;
	
	cout<<"Enter an array 1  "<<endl;
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
		cin>>arr1[i][j];
		}
	}
	
	cout<<"Array 1 is  "<<endl;
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
		cout<<arr1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Enter the dimension of second array";
	cin>>row2;
	cin>>col2;

	
	
	cout<<"Enter an array 2 "<<endl;
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
		cin>>arr2[i][j];
		}
	}
	
	cout<<"Array 2 is  "<<endl;
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
		cout<<arr2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"The multiplication of an array is "<<endl;
	if(row2==col1)
	{
		for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			mul[i][j]=0;
			for(k=0;k<col2;k++)
			{
				mul[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	
	
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			cout<<" "<<mul[i][j]<<" ";
		}
		cout<<"\n";
	}
	}
	
	else
	{
		cout<<"Matrix multiplication is not possible";
	}
	
	
	
}
	
