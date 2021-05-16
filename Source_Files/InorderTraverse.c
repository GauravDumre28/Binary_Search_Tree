/* File Contains Function to Display All Nodes in Inorder Manner  
 *  Returns: Void
 */

#include "header.h"

// Function to Display All Nodes in Inorder Manner
void inorder_traverse(Record *node) 
{
    if (node != NULL) {
        inorder_traverse(node->left);
        // print("%p - %p : %d", node->left, node->right, node->key);
        print (" %d", node->key);
        inorder_traverse(node->right);
    }

    return;
}