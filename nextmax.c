
#include<stdio.h>

int findNextMax(int a[],int n)
{
    int nextmax,max;
    if(a[0] > a[1])
    {
        max=a[0];
        nextmax=a[1];
    }
    else
    {
        max=a[1];
        nextmax=a[1];
    }
    int i=2;
    while(i < n)
    {
        if(a[i] > max)
        {
            nextmax=max;
            max=a[i];
        }
        else if( a[i] > nextmax)
        {
            nextmax=a[i];
        }
        i++;
    }
    return nextmax;
}



int main()
{
    int a[10]={-2,-3,6,9,10,-10,24,67,2,1000};
    int n=sizeof(a)/sizeof(int);
    printf("next max is %d\n",findNextMax(a,n));
    return 0;
}