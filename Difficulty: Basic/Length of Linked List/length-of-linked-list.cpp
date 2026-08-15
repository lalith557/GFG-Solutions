/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int count = 0;

        Node* current = head;

        while (current != nullptr) {
            count++;
            current = current->next;
        }

        return count;
    }
};