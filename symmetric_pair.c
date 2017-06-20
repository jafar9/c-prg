#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int n,a[1000][2],k,i,j,z;
	int hash[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		int first=a[i][0]; //10 5
		int sec=a[i][1]; // 5 10
		if(hash[first]==sec) // hash[5]=10
		{
			printf("%d->%d\n",sec,first);
		}
		else
		{
			hash[sec]=first; //hash[5]=10

		}
	}

	


}