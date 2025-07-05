#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    string s = "(aa(bdc))p(de)";
    stack<int> st;
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            count++;
            st.push(count);
            ans.push_back(st.top());
        }
        else if (s[i] == ')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}