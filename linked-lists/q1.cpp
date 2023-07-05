#include <iostream>
#include <array>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    std::array<int, 5> input = {1, 2, 3, 4, 5};

    Node *head = new Node();
    head->data = input[0];
    head->next = NULL;

    Node *temp = head;

    for (int i = 1; i < input.size(); i++)
    {
        temp->next = new Node();
        temp = temp->next;

        temp->data = input[i];
        temp->next = NULL;
    }

    temp = head;

    while (temp != NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
