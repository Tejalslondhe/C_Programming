/* Create user defined strrev(),strcat(),strcpy(),strlen() with help of array notation &
pointer notation */


// StrCmp() function to compare two strings without string library
void StrCmp(char str[],char str1[])
{
 int i,j=0,LED=0;
 for(i=0;i<=strlen(str)-1;i++)
 { 
 if(str[i]!=str1[j])
 {
  LED=1;
  break;
 }
 j++;
 }
 if(LED==0)
  printf("\n Two strings is \"%s\" and \"%s\" are same \n \n",str,str1);   
 else
  printf("\n Two strings is \"%s\" and \"%s\" are  not same \n \n",str,str1); 
}


// Implicit declaration of StrRev() function to reverse a string without using string functions
void StrRev(char str[])
{
 char str1[20];
 int i,j=0;
 for(i=strlen(str)-1;i>=0;i--)
 {
 str1[j]=str[i];
 j++;
 }
 printf("\n The reverse string of \"%s\" is \"%s\" \n \n",str,str1);
}

// StrUpr() Function to make all characters in upper case in given string
void StrUpr(char str[])
{
 char ch,str1[20];
 int i;
 for(i=0;i<=strlen(str)-1;i++)
 {
 ch=toupper(str[i]);
 str1[i]=ch;
 }
 
 printf("\n The uppercase string of \"%s\" is \"%s\" \n \n",str,str1);
}


// StrLwr() Function to make characters lower case in given string
void StrLwr(char str[])
{
 char ch,str1[20];
 int i;
 for(i=0;i<=strlen(str)-1;i++)
 {
 ch=tolower(str[i]);
 str1[i]=ch;
 }
 
 printf("\n The lowercase string of \"%s\" is \"%s\" \n \n",str,str1);
}


// StrCpy function to make to copy a string without using standard library function
void StrCpy(char str[],char str1[])
{
 int i,j=0;
 for(i=0;str1[i]!='\0';i++)
 {
 *(str+j)=str1[i];
 j++;
 }
 *(str+j)='\0';
printf("\n Str1 is copied into Str \n");  
printf("\n Str= %s \n",str);
}


