#include<stdio.h>
#include<string.h>
main()

{
    char a[20],b;
    int i,j,c=0;

    printf("Enter any string:\n");
    scanf("%s",a);

    printf("Enter any character for see how many character:\n");
    scanf("\n%c",&b);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
           {
              c++;
           }
    }
        printf("There is %d(%c)\n",c,b);

}
