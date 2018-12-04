#include<stdio.h>
main()
{
    char a[50];
    int i,c=1;
    printf("Enter Any Word For Calculate length of word/alphabet/space:\n");
    gets(a);///theres also can used these [scanf("%s",a);], but then Only One word count,thats mean not calculate after "space"....thats why we used [gets(a);]

    for(i=0;a[i]!='\0';i++)//without for loop , its will be used l=strlen(a);

    {
     if(a[i]==' ')
     c++;
    }
    i++;
    printf("\nThere is %d  Alphabet %d word with %d space\n",i,c--,c);

}
