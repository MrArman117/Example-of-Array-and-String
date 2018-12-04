#include<stdio.h>
#include<string.h>
main()
{
   char text[100];
   int i,countL=0,countU=0,countS=0;
   printf("Enter any string: ");
   gets(text);
   printf("Entered String is: %s\n",text);
   for(i=0;text[i]!='\0';i++)
   {
      if((text[i]>='A'&&text[i]<='Z')||(text[i]>='a'&&text[i]<='z'))
    {
       if(text[i]>='A'&&text[i]<='Z')
      {
         countU++;
      }
      else
      {
         countL++;
      }
   }
   else
   {
      countS++;
   }
 }
printf("Upper case Char. :%d\nLower case Char. :%d\nSpecial case Char. :%d",countU,countL,countS);
}
