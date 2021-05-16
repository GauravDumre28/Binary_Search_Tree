// Including Header File
#include"header.h"

// Function to Convert String Data to Integer
int str_to_int(char *string, unsigned int *number)
{
    int flag = 1;

    // Check String till End of Line or End of String
	while ((*string != '\0') && (*string != '\n')) {

        // Checking Whether 'i'th Element is Between '0-9' or '+' or ' '(Space)
        if (((*string >= '0') && (*string <= '9')) 
                || (*string == '+') || (*string == ' ')) {
        
            // Skip Blank Spaces and '+'
            if ((*string == ' ') || (*string == '+')) {
                if (flag != 1) {
                    return FAILURE;
                }
                string++;
                continue;
            }

            // Check Whether Element is Between 0 to 9 and Assign to 'num'
            if ((*string >= '0') && (*string <= '9')) {
                *number = (*number * 10) + (*string - '0');
                string++;
                flag = 2;
            }

        } else {
            return FAILURE;
        }

    }
   
   return SUCCESS;
}