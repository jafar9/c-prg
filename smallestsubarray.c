/*
 arary size=9;
input:2 3 1 1 -1 6 4 3 8
 sum=7
possible seq is: [2 3 1 1], [1 1 -1 6], [4 3]
smallest sub array is :[4,3]
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,a[100];
	int start=0,i,j=0,ansstart,ansend,cursum=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	scanf("%d",&x);
	int min=n;
	for(i=0;i<n;i++)
	{
		while(cursum > x)
		{
			cursum=cursum-a[j++];
			start=j;
			//printf("current sum is %d and start is %d \n",cursum,start);
		}
		if(cursum==x)
		{
			int range=i-start;
			printf("range is %d\n",range);
			if(min > range)
			{
				ansstart=start;
				ansend=i-1;
				min=range;
				//printf("ansstart is %d  ansend is %d\n",ansstart,ansend);
			}
		}
		if(i < n)
		{
			cursum=cursum+a[i];
		//	printf("current sum is %d and i is %d \n",cursum,i);
		}
			

	}
	for(i=ansstart;i<=ansend;i++)
	{
		printf("%d  ",a[i]);
	}
	
}
