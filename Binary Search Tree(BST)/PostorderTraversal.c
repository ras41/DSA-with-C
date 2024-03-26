// Program for tree traversal postorder in Binary Tree
#include<stdio.h>
#include<stdlib.h>
// We are creating struct for the binary tree below
struct node
{
  int data;
  struct node *left, *right;
};

// newNode function for initialisation of the newly created node
struct node *newNode (int item)
{
  struct node *temporary = (struct node *) malloc (sizeof (struct node));
  temporary->data = item;
  temporary->left = temporary->right = NULL;
  return temporary;
}

// Here we print the postorder recursively
void postorder (struct node *root)
{
  if (root != NULL)
    {
      postorder (root->left);
      postorder (root->right);
      printf ("%d ", root->data);
    }
}

// Basic Program to insert new node at the correct position in BST
struct node *insert (struct node *node, int data)
{
  /* When there no node in the tree(subtree) then create 
   and return new node using newNode function */
  if (node == NULL)
    return newNode (data);

  /* If not then we recur down the tree to find correct position for insertion */
  if (data < node->data)
    node->left = insert (node->left, data);
  else if (data > node->data)
    node->right = insert (node->right, data);

  return node;
}

int main ()
{
  /* What our binary search tree looks like really 
      9 
     / \ 
    7  14
   / \ / \ 
  5  8 11 16 */
  
  struct node *root = NULL;
  root = insert (root, 9);
  insert (root, 7);
  insert (root, 5);
  insert (root, 8);
  insert (root, 14);
  insert (root, 11);
  insert (root, 16);

  printf ("The postorder is :\n");
  postorder (root);

  return 0;
}

// Output: The postorder is :   
// 5 8 7 11 16 14 9 