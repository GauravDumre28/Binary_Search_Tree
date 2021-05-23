/* File Contains Function to Print Node in BST 
 *  Returns: Void
 */

#include "header.h"

// Function to Print Node in BST
void print_node(Record *node)
{
    if(NULL == node) {
        print("\n--> BST Node is Empty\n");
    } else {
        print("\nLeft Pointer: %p", node->left);
        print("\nKey: %d", node->key);
        print("\nRight Pointer: %p\n", node->right);
    }

    return;
} 