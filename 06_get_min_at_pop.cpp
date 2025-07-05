#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 3, 5, 0, 6};
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (st.empty())
        {
            st.push(arr[i]);
        }
        else
        {
            st.push(min(arr[i], st.top()));
        }
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}
