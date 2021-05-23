/* File Contains Function to Display All Nodes in Postorder Manner  
 *  Returns: Void
 */

#include "header.h"

// Recursion Function to Display All Nodes in Postorder Manner
void postorder_traverse(Record *node) 
{
    if (node != NULL) {
        postorder_traverse(node->left);
        postorder_traverse(node->right);
        print (" %d", node->key);
    }

    return;
}
