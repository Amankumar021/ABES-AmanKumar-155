#include<iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBegin(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtBegin(head, 10);
    insertAtBegin(head, 20);
    insertAtBegin(head, 30);
    printList(head);
    return 0;
}

