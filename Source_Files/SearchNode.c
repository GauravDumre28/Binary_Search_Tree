/* File Contains Function to Search Node in BST 
 *  Returns: Void
 */

#include "header.h"

// Recursion Function to Search Node in BST
void search_node(Record* node, int value) 
{
    if(NULL != node) {
        if(value == node->key) {
            node_found = 1;
            print("\n-- Node Found --");
            print_node(node);
        } else if(value < node->key) {
            search_node(node->left, value);
        } else if (value > node->key) {
            search_node(node->right, value);
        }
    }
    
    return; 
}
