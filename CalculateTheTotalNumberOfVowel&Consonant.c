#include<stdio.h>
#include<string.h>
main()
{
    char a[20];
    long long int i,v=0,c=0;
    printf("Enter any string for check vowel/consonant:\n\n");
    gets(a);
    for (i=0;a[i]!='\0';i++)
    {
    if (a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]==     'O'||a[i]=='u'||a[i]=='U')

    v++;

    else if(a[i]==' ')

    continue;

    else
    c++;

   }

    printf("\nThis string has %lld Vowel and %lld Consonant \n",v,c);

}
