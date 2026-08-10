/* Structure of Tree Node
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
public:
    vector<int> preOrder(Node* root) {
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }
        ans.push_back(root->data);
        vector<int> left = preOrder(root->left);
        ans.insert(ans.end(), left.begin(), left.end());
        vector<int> right = preOrder(root->right);
        ans.insert(ans.end(), right.begin(), right.end());
        return ans;
    }
};