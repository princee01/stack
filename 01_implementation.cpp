#include <iostream>
using namespace std;

// 1. implement stack with array
//  class stack
//  {
//      int *arr;
//      int size;
//      int top;

// public:
//     bool flag;
//     stack(int s)
//     {
//         size = s;
//         top = -1;
//         arr = new int[s];
//         flag = 1; // stack is empty then flag is 1.
//     }
//     // push
//     void push(int val)
//     {
//         if (top == size - 1)
//         {
//             cout << "stack overflow \n";
//             return;
//         }
//         else
//         {
//             top++;
//             arr[top] = val;
//             cout << "pushed " << val << "into the stack\n";
//             flag = 0;
//         }
//     }
//     // pop
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "stack underflow\n";
//         }
//         else
//         {
//             cout << "popped " << arr[top] << "from the stack\n";
//             top--;
//             if (top == -1)
//             {
//                 flag = 1;
//             }
//         }
//     }
//     // peek
//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "stack is empty\n";
//             return -1;
//         }
//         else
//         {
//             return arr[top];
//         }
//     }
//     // isempty
//     bool isempty()
//     {
//         return top == -1;
//     }
//     // issize
//     int issize()
//     {
//         return top + 1;
//     }
// };
// int main()
// {
//     stack s(5);
//     // s.push(5);
//     // s.push(6);
//     // s.push(7);
//     // cout << s.peek()<<endl;
//     // cout << s.issize()<<endl;
//     // s.pop();
//     // s.pop();
//     // s.pop();
//     // s.pop();

//     // to handle negetive number issue
//     s.push(-1);
//     int val = s.peek();
//     if (s.flag == 0)
//     {
//         cout << val << endl;
//     }
// }

// 2. implementation using linkedlist
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class stack
{
    node *top;
    int size;

public:
    stack()
    {
        size = 0;
        top = NULL;
    }
    void push(int val)
    {
        node *temp = new node(val);
        if (temp == NULL)
        {
            cout << "stack overflow\n";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << "pushed" << val << "into the stack" << endl;
        }
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "stack underflow\n";
        }
        else
        {
            node *temp = top;
            cout << "popped " << top->data << "from the stack" << endl;
            top = top->next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if (top == NULL)
        {
            cout << "stack is empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(35);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.peek();
}
