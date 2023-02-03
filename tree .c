#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*create();
void inorder(struct node*node);
void preorder(struct node*node);
void postorder(struct node*node);
int main()
{
	struct node*root;
	root=create();
	printf("\nInorde Traversal:");
	inorder(root);
	printf("\nPreorde Traversal:");
	preorder(root);
	printf("\nPostorde Traversal:");
	postorder(root);
	return 0;
}
struct node *create()
{
	struct node *temp;
	int data,choice;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n1.New Node\n2.Exit.");
	printf("\nEnter Your choice among 1 or 2:");
	scanf("%d",&choice);
	if(choice==2)
	{
	 	return;
	}
	else
	{
			printf("\nEnter the Data:");
			scanf("%d",&data);
			temp->data=data;
			printf("\nEnter the left child of %d",data);
			temp->left=create();
			printf("\nEnter the right child of %d",data);
			temp->right=create();
			return temp;
	}
}
void inorder(struct node*node)
{
	if(node==NULL)
	 return ;
	inorder(node->left);
	printf("%d",node->data);
	inorder(node->right);
}
void preorder(struct node*node)
{
	if(node==NULL)
	 return ;
	printf("%d",node->data);
	inorder(node->left);
	inorder(node->right);
}
void postorder(struct node*node)
{
	if(node==NULL)
	 return ;
	inorder(node->left);
	inorder(node->right);
	printf("%d",node->data);
}
