#include<stdio.h>
#include<string.h>
main()
{
int i,j;
char s1[50]="Dhaka City",s2[50];   //="city",c[50];
for(i=0;s1[i]!='\0';i++)
{
   s2[i]=s1[i];        ///without 'for loop' there is also can use is shortcurt keyword strcpy(s2,s1);
}
s2[i]='\0';

printf("The s2 string is coped from s1 which is below: \n\n %s \n",s2);

}
                                                     ///puts(b); or here is also can use printf("%s",b);




/*for(i=0;a[i]!='\0';i++)
   {
     c[i]=a[i];
   }
     c[i]=' ';
     i++;

for(j=0;b[j]!='\0';j++)
    {
      c[i]=b[j];
i++;
    }

    c[i]='\0';

     printf("%S\n",c);
}*/


/*another system:
char a[20]="Dhaka Ct",b[20];
   strcpy(b,a);
   puts(b);

*/

