#include<stdio.h>
main()
{
    int i,j=1,k=1,m,n[20],odd[50],even[50];
    printf("Enter some number & check individually which Odd or Even:\n");
    for(i=1;i<=6;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]%2==0)
        {
            even[j]=n[i];
            j++;
        }
        else
        {
            odd[k]=n[i];
            k++;
        }
    }

    j--;k--;

    printf("The odd number is:\n");

    for(i=1;i<=k;i++)
    {
        printf("%d ",odd[i]);
    }

    printf("\nThe even number is :\n");

    for(m=1;m<=j;m++)
    {
        printf("%d ",even[m]);
    }
}
