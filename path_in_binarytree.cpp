// C++ implementation to print the path from root
// to a given node in a binary tree
#include <bits/stdc++.h>
using namespace std;

// structure of a node of binary tree
struct Node
{
	int data;
	Node *left, *right;
};

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct Node* getNode(int data)
{
	struct Node *newNode = new Node;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
void getpath(struct Node* root,int x)
{
    static int slice=0;
    if(root==NULL) return;
    else
    {
        if(slice != 1)
            getpath(root->left,x);
        if(slice != 1)
            getpath(root->right,x);
        if(root->data == x)
            slice=1;
        if(slice==1)
            printf("%d ",root->data);
        
    }
    
}
// Driver program to test above
int main()
{
	// binary tree formation
	struct Node *root = getNode(1);
	root->left = getNode(2);
	root->right = getNode(3);
	root->left->left = getNode(4);
	root->left->right = getNode(5);
	root->right->left = getNode(6);
	root->right->right = getNode(7);
		
	int x = 5;
	getpath(root, x);
	return 0;
} 
