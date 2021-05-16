/* File Contains Function to Create New Node
 *  Returns: Node Pointer 
 */

#include "header.h"

// Function to Create New Node
Record *create_new_node(int item)
{ 
    // Dynamically Allocating Meory for Node 
    Record *new_node = (Record *)malloc(sizeof(Record)); 
    
    // Assigning Key and Default Pointer to Node
    print("\nInserted Key: %d\n", item);
    new_node->key = item;
    new_node->left = new_node->right = NULL; 

    return new_node; 
} 
