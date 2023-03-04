#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr.push_back(nums[0]);
        }
        else
        {
            arr.push_back(arr[i - 1] + nums[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int min = arr[0];

    // for (int k = 0; k < n; k++)
    // {
    //     if (arr[k] < min)
    //     {
    //         min = arr[k];
    //     }
    // }

    cout << abs(min) + 1 << endl;
}