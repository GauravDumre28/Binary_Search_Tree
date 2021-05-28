/* File Contains Function for Switch Case
 *  Returns: SUCCESS/FAILURE
 */

#include "header.h"

// Function for Switch Case
int switch_case(Record* root) 
{
    // Declaring Variables
    unsigned int choice = 0;
    unsigned int key_val = 0;
    int error = 0;

    // Loop to Manage User Interaction
    do {
        // Condition to Limit Invalid User Input
        if(3 == error) {
            break;
        }

        choice = 0;
        key_val = 0;
        node_found = 0;
        __fpurge(stdin);

        print("\n----------------------------------------\n");
        print("\n\t-- MENU --");
        print("\n1. Insert Node");
        print("\n2. Delete Node");
        print("\n3. Search Node");
        print("\n4. Minimum Value Node");
        print("\n5. Maximum Value Node");
        print("\n6. Print Notation");
        print("\n7. Exit");
        print("\n\nEnter Choice: ");

        // Taking Input for User Choice
        if(FAILURE == (choice = input_integer())) {
            print("\n\n--> Error: Choice Input");
            error++;
            continue;
        }

        // Switch Case to Perform Operation as per User Input
        switch(choice) {
            case 1:
                print("\n\n\t-- Insert Node --\n");
                print("----------------------------------------\n");
                // Taking Input and Validating Key Value
                print("\nEnter Key Value: ");
                if(FAILURE == (key_val = input_integer())) {
                    print("\nError: Insert Node Key Input\n");
                } else {
                    // Calling Functon to Insert Node
                    if(NULL == (root = insert_node(root, key_val))) {
                        print("\n-- BST is Empty --\n");
                    }
                }
                break;

            case 2:
                print("\n\n\t-- Delete Node --\n");
                print("----------------------------------------\n");
                // Taking Input and Validating Key Value
                print("\nEnter Value to Delete: ");
                if(FAILURE == (key_val = input_integer())) {
                    print("\nError: Delete Node Key Input\n");
                } else {
                    // Calling Functon to Delete Node
                    if(NULL == (root = delete_node(root, key_val))) {
                        print("\n-- BST is Empty --\n");
                    }
                }
                if(0 == node_found) {
                    print("\nFAIL: Node Not Found\n");
                } else {
                    print("\nSUCCESS: Node Deleted\n");
                }
                break;
            
            case 3:
                print("\n\n\t-- Search Node --\n");
                print("----------------------------------------\n");
                // Taking Input and Validating Key Value
                print("\nEnter Value to Search: ");
                if(FAILURE == (key_val = input_integer())) {
                    print("\nError: Search Node Key Input\n");
                } else {
                    // Calling Functon to Search Node
                    if(NULL != root) {
                        search_node(root, key_val);
                    } else {
                        print("\n-- BST is Empty --\n");
                    }
                }
                if(0 == node_found) {
                    print("\nFAIL: Node Not Found\n");
                } else {
                    print("\nSUCCESS: Node Found\n");
                }
                break;
            
            case 4:
                print("\n\n\t-- Minimum Value Node --\n");
                print("----------------------------------------\n");
                // Calling Function to Print Minimum Value Node from BST
                if(NULL != root) {
                    print_node(min_value_node(root));
                } else {
                    print("\n-- BST is Empty --\n");
                }
                break;
            
            case 5:
                print("\n\n\t-- Maximum Value Node --\n");
                print("----------------------------------------\n");
                // Calling Function to Print Maximum Value Node from BST
                if(NULL != root) {
                    print_node(max_value_node(root));
                } else {
                    print("\n-- BST is Empty--\n");
                }
                break;

            case 6:
                print("\n\n\t-- Notation of BST --\n");
                print("----------------------------------------");
                // Calling Function to Print BST
                if(NULL != root) {
                    print_notation(root);
                } else {
                    print("\n-- BST is Empty--\n");
                }
                break;
            
            default:
                if(7 < choice) {
                    print("\nError: Invalid Choice\n");
                    error++;
                } 
        }

        print("\n----------------------------------------\n");
    } while(7 != choice);

    if(3 == error) {
        return FAILURE;
    }

    return SUCCESS;
}
