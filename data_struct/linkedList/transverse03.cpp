#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

// deletion of node at given position
void deleteAtPosition(Node** head, int position)
{
    if (*head == nullptr)
        return;

    Node* temp = *head;

    // If head needs to be removed
    if (position == 0)
    {
        *head = temp->next; // Change head
        delete temp;       // Free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i = 0; temp != nullptr && i < position - 1; i++)
        temp = temp->next;

    // If position is more than number of nodes
    if (temp == nullptr || temp->next == nullptr)
        return;

    // Node temp->next is the node to be deleted
    Node* next = temp->next->next;

    delete temp->next; // Free memory

    temp->next = next; // Unlink the deleted node from list
}



int main()
{
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};

    cout << "Original List: ";
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    int position;
    cout << "Enter position to delete: ";
    cin >> position;

    deleteAtPosition(&head, position);

    cout << "List after deletion: ";
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free remaining nodes
    while (head != nullptr)
    {
        Node* next = head->next;
        delete head;
        head = next;
    }

    return 0;
}