#include "header.h"

int main() 
{
    print("\n\n--------------------------------------------\n");
    print("\t-- Binary Search Tree --");
    print("\n--------------------------------------------\n\n");
    
    // Creating Pointer for BST
    Record *root = NULL;

    // Inserting Default Nodes in BST
    root = insert_node(root, 50); 
    root = insert_node(root, 30); 
    root = insert_node(root, 20); 
    root = insert_node(root, 40); 
    root = insert_node(root, 70); 
    root = insert_node(root, 60); 
    root = insert_node(root, 80);

    // Calling Function for User Interaction 
    if(FAILURE == switch_case(root)) {
        print("\n\nERROR: Invalid Input Limit Reached\n");
    }

    print("\n\n--------------------------------------------\n");
    print("\t\t-- EXIT --");
    print("\n--------------------------------------------\n\n");

    return 0; 
} 
