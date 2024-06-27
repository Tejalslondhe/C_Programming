/*1. Write a program which accepts a sentence from the user and alters it as follows: Every
space is replaced by *, case of all alphabets is reversed, digits are replaced by?*/

# include<stdio.h>
  /* Function to get sum of digits */
int main()
{
  int i = 0;
   char ch, s[100];
    printf("Input a string\n");
   gets(s);
    for(i=0;s[i] != '\0';i++) {
      ch = s[i];
      if (ch >= 'A' && ch <= 'Z')
         s[i] = s[i] + 32;
      else if (ch >= 'a' && ch <= 'z')
         s[i] = s[i] - 32;
      else if(s[i]==' ')
         s[i] = '*';
      else if(s[i]>0 || s[i]<9) 
         s[i] = '?';
         }
    puts(s);
     return 0;
}
