#include<stdio.h>
main()
{
   long long a[100],i,max,min;
    printf("Enter some number and see which is largest & smallest number:\n\n");
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }

    printf("\nThe maximum number is %lld &\n\nThe smallest is Number is %lld\n",max,min);
}
