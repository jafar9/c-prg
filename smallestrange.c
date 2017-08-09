#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)

void main()
{
	int a[100],b[100],c[100],m,n,l;
	puts("enter 3 array sizes");
	scanf("%d%d%d",&m,&n,&l);
	puts("enter first array");
	for(int i=0;i<m;i++)
	{
		scanf("%d",a+i);
	}
	puts("second array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",b+i);
	}
	puts("enter 3rd array");
	for(int i=0;i<l;i++)
	{
		scanf("%d",c+i);
	}
	int prev_range=INT_MAX;
	int curr_range;
	int mini;
	int maxi;
	int start;
	int end;
	int i=0,j=0,k=0;
	while(j < n && i < m && k < l)
	{
		mini=min(a[i],min(b[j],c[k]));
		maxi=max(a[i],max(b[j],c[k]));
		curr_range=maxi-mini;
		printf("min is %d  max is %d range is %d\n", mini,maxi,curr_range);
		if(curr_range < prev_range)
		{
			prev_range=curr_range;
			start=mini;
			end=maxi;
		}
		if(mini == a[i])
			i++;
		else if(mini == b[j])
			j++;
		else
			k++;
	}
	printf("[%d %d]\n",start,end);

}