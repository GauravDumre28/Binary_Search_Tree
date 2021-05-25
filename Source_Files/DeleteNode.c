/* File Contains Function to Search Node in BST 
 *  Returns: Void
 */

#include "header.h"

// Recursion Function to Delete Node in BST
Record *delete_node(Record* node, int value) 
{
    // Checking if Node is NULL
    if(node == NULL) {
        return NULL;
    }

    // Declaring Temporary Structure Pointer
    Record* temp = node;

    // Checking and Deleting Node
    if(value == node->key) {
        node_found = 1;

        if((NULL != node->left) && (NULL != node->right)) {
            node = min_value_node(node->right);
            temp->key = node->key;
            temp->right = delete_node(temp->right, node->key);
        } else {
            if((NULL == node->left) && (NULL == node->right)) {
                temp = NULL;
            } else if((NULL == node->left) && (NULL != node->right)) {
                temp = node->right;
            } else if((NULL != node->left) && (NULL == node->right)) {
                temp = node->left;
            }
            
            node->left = node->right = NULL;
            // Releasing Dynamically Allocated Memory
            free(node);
        }
    } else if(value < node->key) {
        node->left = delete_node(node->left, value);
    } else if (value > node->key) {
        node->right = delete_node(node->right, value);
    }
    
    return temp;  
}
