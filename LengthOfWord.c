#include<stdio.h>
main()
{
    char a[50];
    int i,sum=0;
    printf("Enter any  string:\n\n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        sum++;
    }
    printf("\nThe length of this string is %d\n",sum);
}
