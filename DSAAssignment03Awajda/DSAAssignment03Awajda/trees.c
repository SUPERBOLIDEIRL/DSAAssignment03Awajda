#include <stdio.h>
#include <stdlib.h>
#include "trees.h"

node* newNode(char data)
{
    node* temp = malloc(sizeof(node));
    temp->data = data;
    temp->pLeft = NULL;
    temp->pRight = NULL;
    return temp;
}

node* insert(node* root, char data)
{
    if (root == NULL)
        return newNode(data);

    if (data < root->data)
        root->pLeft = insert(root->pLeft, data);
    else if (data > root->data)
        root->pRight = insert(root->pRight, data);
    else
        root->pRight = insert(root->pRight, data);

    return root;
}

node* search(node* root, char index)
{
    if (root == NULL || root->data == index)
        return root;

    if (index < root->data)
        return search(root->pLeft, index);
    else
        return search(root->pRight, index);
}

int countNodes(node* root)
{
    if (root == NULL)
            return 0;

    int leftCount = countNodes(root->pLeft);
    int rightCount = countNodes(root->pRight);
    return 1 + leftCount + rightCount;
}

int treeHeight(node* root)
{
    if (root == NULL)
        return -1;

    int leftHeight = treeHeight(root->pLeft);
    int rightHeight = treeHeight(root->pRight);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

void printInOrder(node* root)
{
    if (root != NULL)
    {
        printInOrder(root->pLeft);
        printf("%c ", root->data);
        printInOrder(root->pRight);
    }
}

