/* File Contains Function to Release Dynamically Allocated Momory to the 
 * Nodes in BST 
 * Returns: Node Pointer 
 */

#include "header.h"

// Recursion Function to Release Dynamically Allocated Momory to the Nodes
Record *free_node(Record *node) 
{
    // Declaring Variable
    unsigned int flag = 0;

    // Condition to Add Node in Left/Right Sub-Tree Based on the Key Value
    if(NULL != node->left) {
        node->left  = free_node(node->left);
    }
    if(NULL != node->right) {
        node->right = free_node(node->right);
    }

    if((NULL == node->left) && (NULL == node->right)) {
        flag = 1;
        print("\nReleasing Node: %d\n", node->key);
        // Relesing Dynamically Allocated Memory
        free(node);
    }

    // Checking if the Memory is Released or Not
    if(1 == flag) {
        return NULL;
    }

    return node;
}
