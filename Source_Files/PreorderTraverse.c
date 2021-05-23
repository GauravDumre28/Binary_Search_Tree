/* File Contains Function to Display All Nodes in Preorder Manner  
 *  Returns: Void
 */

#include "header.h"

// Recursion Function to Display All Nodes in Preorder Manner
void preorder_traverse(Record *node) 
{
    if (node != NULL) {
        print (" %d", node->key);
        preorder_traverse(node->left);
        preorder_traverse(node->right);
    }

    return;
}
