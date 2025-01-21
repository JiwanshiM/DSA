#include<bits/stdc++.h>
using namespace std;
vector<int>LeaderElement(vector<int> &arr)
{
    vector<int> result;
    int n = arr.size();
    int Max_Right= arr[n-1];
    result.push_back(Max_Right);

    // Traversing Array Backwards
    // i = n-2 as (n-1) already in result as LeaderElement
    for(int i = n-2; i >= 0; i--)
    {
        if(arr[i] > Max_Right)
        {
           Max_Right = arr[i];
           result.push_back(Max_Right);
        }
    }
    reverse(result.begin(),result.end());
    return result;
}

    int main()
    {
        vector<int> arr={16,17,4,3,5,2};
        vector<int> result=LeaderElement(arr);
        for(int res: result)
        {
            cout << res << " ";
        }
        return 0;
    }