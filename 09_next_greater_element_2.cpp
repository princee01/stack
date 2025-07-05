#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {6, 10, 7, 4, 8, 9, 4};
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n, -1);
    for (int i = 0; i < 2 * n; i++)
    {
        while (!st.empty() && arr[i % n] > arr[st.top()])
        {
            ans[st.top()] = arr[i % n];
            st.pop();
        }
        st.push(i % n);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}