#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// we have to return area of largest rectangle;
int main()
{
    vector<int> height = {2, 3, 4, 2, 6, 5, 4, 5, 3};
    int n = height.size();
    stack<int> st;
    vector<int> right(n);
    vector<int> left(n);
    // next smallest right

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && height[i] < height[st.top()])
        {
            right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        right[st.top()] = n;
        st.pop();
    }
    // st.empty();
    // next smallest left
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && height[i] < height[st.top()])
        {
            left[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        left[st.top()] = -1;
        st.pop();
    }
    // calc area
    int area = 0;
    for (int i = 0; i < n; i++)
    {
        area = max(area, height[i] * (right[i] - left[i] - 1));
    }
    cout << area;
}