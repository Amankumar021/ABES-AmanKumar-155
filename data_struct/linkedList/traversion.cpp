#include <iostream>
using namespace std;

// Node structure definition
struct Node {
    int data;
    Node* next;
};

// Function to traverse and print the linked list
void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;  // move to next node
    }
    cout << endl;
}


int main() {
    // Creating nodes manually
    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    // Linking nodes
    head->next = second;
    second->next = third;

    // Traversal of list
    cout << "Linked List Elements: ";
    traverse(head);

    // Free memory
    delete head;
    delete second;
    delete third;
    
    return 0;
}