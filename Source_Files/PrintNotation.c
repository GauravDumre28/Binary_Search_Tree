/* File Contains Function to Print Notation 
 *  Returns: Node Pointer 
 */

#include "header.h"

//Function to Print Notation 
void print_notation(Record* node)
{
    // Printing Inorder Notation 
    print ("\n\n-- Inorder Traversal of BST --\n"); 
    inorder_traverse(node);

    // Printing Preorder Notation 
    print ("\n\n-- Preorder Traversal of BST --\n"); 
    preorder_traverse(node);

    // Printing Postorder Notation 
    print ("\n\n-- Postorder Traversal of BST --\n"); 
    postorder_traverse(node);
    print("\n");

    return;
}
