#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s = "((()))))";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {
            if (s.empty())
            {
                cout << "not a valid paranthesis string " << endl;
            }
            st.pop();
        }
    }
    if (st.empty())
    {
        cout << "valid paranthesis string..." << endl;
    }
    else
    {
        cout << "not a valid paranthesis string " << endl;
    }
}