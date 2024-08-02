/*3. Accept marks of 5 subjects (out of 100) of a student and display total marks and
compute the percentage also.*/

#include<stdio.h>

int main(){
	int physics, maths,eng,stat,chem, total_marks;
	float percentage;
	
	printf("Enter the marks of each subject (out of 100):\n");
	scanf("%d%d%d%d%d",&physics,&maths,&eng,&stat,&chem);
	
	total_marks = physics+maths+eng+stat+chem;
	percentage = total_marks/500.0*100;
	
	printf("Total marks are:%d\n",total_marks);
	printf("Percentage is:%f",percentage);
	
	return 0;
	
}
