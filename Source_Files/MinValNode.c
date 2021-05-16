#include "header.h"

Record *min_value_node(Record* node) 
{ 
    Record* current = node; 

    while (current && current->left != NULL) {
        current = current->left;
    }

    return current; 
}
