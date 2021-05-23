/* File Contains Function to Print Minimum Value Node 
 *  Returns: Nothing
 */

#include "header.h"

// Function to Print Minimum Value Node
Record *min_value_node(Record *node) 
{
    while (node && node->left != NULL) {
        node = node->left;
    }
    return node;
}
