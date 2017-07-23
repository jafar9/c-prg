#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

int slice=0;
struct node* root=NULL;

//struct bst* root=NULL;



void  insert(struct node* temp, struct node* head)
{
	if(root==NULL)
	{
		root=temp;
	}
	else if(head->data > temp->data)
	{
		if(head->left != NULL)
		{
			insert(temp,head->left);
		}
		else
		{
			head->left=temp;
		}
	}
	else if(head->data < temp->data)
	{
		if(head->right != NULL)
		{
			insert(temp,head->right);
		}
		else
		{
			head->right=temp;
		}
	}

}
void kth_smallest(struct node* root,int k)
{
	static int count=0;
	if(root == NULL)
	{
		return;
	}
	else
	{
		if(slice == 0)
		{
			kth_smallest(root->left,k);
		}
		count++;
		if(count == k)
		{
			printf("%d\n",root->data);
			slice=1;
		}
		if(slice == 0)
		{
			kth_smallest(root->right,k);
		}

	}
}
void inorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}

void main()
{
	int opt;
	while(1)
	{
		scanf("%d",&opt);
		if(opt==1)
		{
		 	int n;
		 	scanf("%d",&n);
		 	struct node* temp=(struct node*)malloc(sizeof(struct node));
		 	temp->data=n;
		 	temp->left=NULL;
		 	temp->right=NULL;
		 	insert(temp,root);
		 	//printf("ewrerertert \n");
		}
		if(opt==2)
		{
			int k;
			scanf("%d",&k);
			kth_smallest(root,k);
		}
		if(opt==3)
		{
			inorder(root);
		}
	}
}