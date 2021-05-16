#include "header.h"

int main() 
{
    // Declaring Variables
    unsigned int choice = 0;
    unsigned int key_val = 0;
    int error = 0;

    // Creating Pointer for BST
    Record *root = NULL; 

    print ("\n\n--------------------------------------------\n");
    print ("\t-- Binary Search Tree --");
    print ("\n--------------------------------------------\n\n");

    // Loop to Manage User Interaction
    do {
        // Condition to Limit Invalid User Input
        if(3 == error) {
            break;
        }

        choice = 0;
        key_val = 0;

        print("\n----------------------------------------\n");
        print("\n1. Insert Node");
        print("\n2. Delete Node");
        print("\n3. Print Notation");
        print("\n4. Exit");
        print("\n\nEnter Choice: ");

        // Taking Input for User Choice
        if(FAILURE == (choice = input_integer())) {
            print("\n\n--> Error: Choice Input");
            error++;
            continue;
        }

        // Switch Case to Perform Operation as per User Input
        switch (choice) {
            case 1:
                print("\n\n\t-- Insert Node --\n");
                print("----------------------------------------\n");

                // Taking Input and Validating Key Value
                print("\nEnter Key Value: ");
                if(FAILURE == (key_val = input_integer())) {
                    print("\nError: Key Input\n");
                } else {
                    root = insert_node(root, key_val);
                }
                break;

            case 2:
                print("\n\n\t-- Delete Node --\n");
                print("----------------------------------------\n");
                break;

            case 3:
                print("\n\n\t-- Notation of BST --\n");
                print("----------------------------------------");
                print_notation(root);
                break;
            
            default:
                if(4 != choice) {
                    print("\nInvalid Choice\n");
                    error++;
                } 
        }

        print("\n----------------------------------------\n");
    } while(4 != choice);

    return 0; 
} 
