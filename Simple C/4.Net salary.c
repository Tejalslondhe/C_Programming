/*4. Accept the basic salary of an employee and compute the net salary after adding earnings and
subtracting deductions.
PF is 2 % of
basic Tax is 3 %
of basic HRA is
5 % basic DA is
8 % of basic*/

#include<stdio.h>
int main()
{
	
	float basic_salary, PF, Tax,HRA,DA,net_salary;
	
	printf("Basic salary is:");
	scanf("%f",&basic_salary);
	
	PF = 0.02*basic_salary;
	Tax = 0.03*basic_salary;
	HRA = 0.05*basic_salary;
	DA = 0.08*basic_salary;
	
	net_salary = (basic_salary+HRA+DA)-(PF+Tax);
	
	printf("Net salary is %f",net_salary);
	
	return 0;
	

}
