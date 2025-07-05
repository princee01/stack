#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(6);
    s.push(10);
    s.push(15);
    cout << s.size() << endl; // 3
    cout << s.top() << endl;  // 15
    s.pop();
    cout << s.top() << endl;   // 10
    cout << s.empty() << endl; // 0
}