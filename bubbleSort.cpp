#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data = 0)
    {
        this->data = data;
        this->next = NULL;
    }
};
class StackLinkedList
{
    int size;
    Node* top;
    Node* curr; 
    public:
        StackLinkedList()
        {
            size = 0;
            top = NULL;
            curr = NULL;
        }
        
        int getSize()
        {
            return this->size;
        }

        bool isEmpty()
        {
            return(this->size == 0);
        }

        void push(int data)
        {
            Node* temp = new Node(data);
            temp->next = curr;
            this->curr = temp;

            (this->size) ++;
            (this->top) = curr;
        }
        void pop()
        {
            if(this->size > 0)
            {
                top = curr->next;
                curr->next = NULL;
                curr = top;
                (this->size)--;
            }
            else
            {
                cout << "Stack Underflow";
            }
        }
        int getTop()
        {
            if(size > 0)
                return top->data;
            else
                return -1;
        }
};
int main()
{
    StackLinkedList obj;
    obj.push(3);
    obj.push(5);
    obj.pop();
    obj.pop();
    
    return 0;
}