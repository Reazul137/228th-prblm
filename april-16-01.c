#include<stdio.h>
int main()
{
    long int n, i, t=9;
    int sum =0;

    printf("Input the number of terms : ");
    scanf("%lf",&n);

    for (i=1; i<=n; i++)
    {
        sum +=t;
        printf("%ld  ",t);
        t=t*10+9;
    }
    printf("\n The sum of the series = %d\n",sum);

    return 0;
}
