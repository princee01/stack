#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// consecutive smaller and equal number on left
int main()
{
    vector<int> price = {100, 80, 55, 70, 60, 75, 85};
    stack<int> st;
    int n = price.size();
    vector<int> ans(n, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && price[i] > price[st.top()])
        {
            ans[st.top()] = st.top() - i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        ans[st.top()] = st.top() + 1;
        st.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}