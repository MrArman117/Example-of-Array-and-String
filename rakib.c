#include<stdio.h>
int main()
{
char str[20];
int i;

printf("Enter any string in lowercase:");
gets(str);

printf("\nThe string is: %s",str);

for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=97&&str[i]<=122)

      str[i]=str[i]-32;
   }

   printf("\n\nThe string in Uppercase is: %s\n",str);

return 0;
}

