#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stk[1000];
static int k;

void push(int n)
{
	stk[++top]=n;
}


void reverse(int a[],int n)
{
	int temp;
	
	if(n > top)
	{
		return;
	}
	else
	{
		temp = a[n++];
		reverse(a,n);
		stk[k++]=temp;
	}
}

void main()
{
	int n,opt;
	while(1)
	{
		scanf("%d",&opt);
		if(opt==1)
		{
			scanf("%d",&n);
			push(n);
		}
		else if(opt==2)
		{
			for(int i=0;i<=top;i++)
			{
				printf("%d  ",stk[i]);
			}
			printf("\n");
		}
		else if(opt==3)
		{
			k=0;
			reverse(stk,0);
		}
	}
}



