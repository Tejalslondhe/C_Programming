/* 5. Write a C program to input angles of a triangle and check whether triangle is valid or not.*/

#include <stdio.h>
int main()
{
  float angle1, angle2, angle3;
  
  printf("Enter the angles of triangles:\n");
  scanf("%f%f%f",&angle1,&angle2,&angle3);
  
  if (angle1+angle2+angle3 == 180)
  {
    printf("This triangle is valid.");  
  }
  else
  {
      printf("This triangle is not valid.");
  }
   
    return 0;
}

