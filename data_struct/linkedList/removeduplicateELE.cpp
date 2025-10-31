#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Skip the duplicate node
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; // free memory (good practice in C++)
            } else {
                // Move forward if no duplicate
                current = current->next;
            }
        }
        return head;
    }
};

// Helper function to print the list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    // Create linked list: 1 -> 1 -> 2 -> 3 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution s;
    head = s.deleteDuplicates(head);

    printList(head); // Output: 1 2 3
    return 0;
}