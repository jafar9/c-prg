/* Find two prime numbers with given sum  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int n)
{
	int i;
	for(int i=2;i<=sqrt(n);i++)
	{
	   if(n%i==0)
	   {
	   		return 0;
	   }
	   
	}
	return 1;
}

void main()
{
	int n,k=0;
	scanf("%d",&n);
	for(int i=2;i<=n/2;i=2*k+1)
	{
		int flag1=isprime(i);
		int flag2=isprime(n-i);
		//printf("%d %d\n",flag1,flag2);
		if(flag1 && flag2)
		{
			printf("%d %d\n",i,n-i);
			break;
		}
		k++;
	}
}