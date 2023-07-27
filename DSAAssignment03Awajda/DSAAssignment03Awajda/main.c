#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "trees.h"


int main()
{
    srand(time(NULL));
    char rc;
    int i;
    int r;
    char characters[27] = "abcdefghijklmnopqrstuvwxyz";
    r = (rand() % 10) + 11;
    node* root = NULL;
    printf("Characters ordered by generation time: ");
    for (i = 0; i < r; i++)
    {
        rc = characters[rand() % 26];
        printf("%c ", rc);
        root = insert(root, rc);
    }


    printf("\nInserted characters in sorted order: ");
    printInOrder(root);
    printf("\n");

    int nodeCount = countNodes(root);
    printf("Number of nodes in the tree: %d\n", nodeCount);

    int height = treeHeight(root);
    printf("Tree height: %d\n", height);

    return 0;
}
