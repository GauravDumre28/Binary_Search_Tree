/* File Contains Function to Validate the Input as Integer 
 * Returns: 'SUCCESS' on Assinging Integer Value; Otherwise 'FAILURE'
 */

#include"header.h"

// Function to Validate the Input as Integer
int input_integer()
{
    // Declaring Variables
    char str[MAX] = "";
    unsigned int number = 0;
    
    // Taking Input for as String from Stdin File
    if(NULL == fgets(str, MAX, stdin)) {
        print("\n\n--> Error: fgets");
        goto EXIT;
    }

    // Calling Function to Convert & Validate Integer
    if(FAILURE == str_to_int(str, &number)) {
        print("\n\n--> Error: String is Empty / Non-Integer\n");
    }

    EXIT:
    return number;
}