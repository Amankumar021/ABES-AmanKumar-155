#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};  

void insertAtEnd(Node** head, int value)
{
    Node* newNode = new Node();
    
    newNode->data = value;
    newNode->next = nullptr;
    if (*head == nullptr)
    {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;

}

bool search(Node* head, int key)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    node* head = new Node{10, nullptr};
    int n , value , key;
    cout<<"How many number of element to be added: ";

    return 0;


}