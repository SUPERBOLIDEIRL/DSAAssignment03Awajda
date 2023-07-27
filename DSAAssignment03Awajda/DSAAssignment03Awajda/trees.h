#pragma once

typedef struct TreeNode node;

typedef struct TreeNode {
    char data;
    struct TreeNode* pLeft;
    struct TreeNode* pRight;
} node;

node* newNode(char);
node* insert(node*, char);
node* search(node*, char);
int countNodes(node*);
int treeHeight(node*);
void printInOrder(node*);
