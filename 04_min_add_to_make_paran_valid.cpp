#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s = "(())()(((";
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {
            if (st.empty())
            {
                count++;
            }
            else
            {
                st.pop();
            }
        }
    }
    cout << count + st.size();
}