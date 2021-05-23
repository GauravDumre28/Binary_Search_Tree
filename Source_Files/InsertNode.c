/* File Contains Function to Insert Node in BST 
 *  Returns: Node Pointer 
 */

#include "header.h"

// Recursion Function to Insert Node in BST
Record* insert_node(Record* node, int key) 
{
    // If Node is Empty, Calling Function to Create New Node
    if (node == NULL) {
        return create_new_node(key);
    }
    
    // Condition to Add Node in Left/Right Sub-Tree Based on the Key Value
    if (key < node->key) {
        node->left  = insert_node(node->left, key);
    } else {
        node->right = insert_node(node->right, key);
    }

    return node; 
}
