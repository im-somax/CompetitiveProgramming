
//Only the approach

int height(Node* root) {
        // Write your code here.
        if(root==NULL){
            return -1;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        
        return max(lh,rh)+1;
    }