/*
1.insert 2.display 3.reverse
sample input :
1 2
1 3
1 4
1 5
1 6
2
3
2
3 
2
1 7
2
3
2

sample output:
2 3 4 5 6
6 5 4 3 2
2 3 4 5 6
2 3 4 5 6 7
7 6 5 4 3 2


*/
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



