#include<stdio.h>
main()
{
    int a[40],i,j,c[40],b[40];
    for(i=1;i<=3;i++)
    {
     printf("Enter a value in [%d] & b[%d] for addition both in c Array:\n",i,i);
     scanf("%d %d",&a[i],&b[i]);
    }
    for(j=1;j<=3;j++)
    {
      c[j]=a[j]+b[j];

      printf("c[%d]=%d\n",j,c[j]);

    }



}
