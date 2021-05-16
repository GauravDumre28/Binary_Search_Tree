#ifndef CHECK

#define CHECK 1

// Header Files
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#include <stdlib.h>

// Defining Constants
#define MAX 20
#define print printf
#define SUCCESS 1
#define FAILURE 0
#define print printf

//Structure for Node of BST
typedef struct BST_Records {
    struct BST_Records *left;
    unsigned int key;
    struct BST_Records *right;
}Record;

// Function to Create New Node
Record *create_new_node(int);

// Function to Insert Node
Record *insert_node(Record *, int);

// Function to Delete Node
Record *delete_node(Record *, int);

//Function to Print Notation 
void print_notation(Record*);

// Function to Display All Nodes in Inorder Manner
void inorder_traverse(Record *);

// Function to Display All Nodes in Preorder Manner
void preorder_traverse(Record *);

// Function to Display All Nodes in Postorder Manner
void postorder_traverse(Record *);

// Function to Convert String to Integer
int str_to_int(char *, unsigned int *);

// Function to Validate the Input as Integer
int input_integer();

Record *min_value_node(Record *);

#endif
