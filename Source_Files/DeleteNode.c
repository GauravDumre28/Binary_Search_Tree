#include "header.h"

Record* delete_node(Record* root, int key) 
{
    if (root == NULL) {
        return root;
    }

    if (key < root->key) {
        root->left = delete_node(root->left, key);
    } else if (key > root->key) {
        root->right = delete_node(root->right, key);
    } else {
        if (root->left == NULL) {
            Record *temp = root->right; 
            free(root); 
            return temp; 
        } else if (root->right == NULL) {
            Record *temp = root->left;
            free(root);
            return temp;
        }
        
        Record* temp = min_value_node(root->right); 
        root->key = temp->key;
        root->right = delete_node(root->right, temp->key); 
    }
    
    return root; 
}
