/* File Contains Function to Print Maximum Value Node 
 *  Returns: Void
 */

#include "header.h"

// Function to Print Maximum Value Node
Record *max_value_node(Record *node) 
{
    while (node && node->right != NULL) {
        node = node->right;
    }
    return node; 
}
