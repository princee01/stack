#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {7, 9, 12, 10, 14, 8, 3, 6, 9};
    stack<int> st;
    vector<int> ans(arr.size(), -1);
    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << ans[i] << " ";
    }
}