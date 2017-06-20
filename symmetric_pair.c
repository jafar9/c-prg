/*
sample input:
6
11 20
30 40
30 100
5 10
40 30
10 5
sample output:

30->40
5->10

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int n,a[1000][2],i,j;
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
	   int first=a[i][0]; 
	   int sec=a[i][1]; 
	   if(hash[first]==sec) 
	    {
	      printf("%d->%d\n",sec,first);
	    }
	   else
	    {
	      hash[sec]=first; 
	    }
	 }
}
