#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t!=0)
    {
        int b;
        int k;
        cin>>b;
        cin>>k;

        long long product = 1;
        vector<int> arr(b);

        for (int i = 0; i < b; i++)
        {
            cin >> arr[i];
            product *= arr[i];
        }

        vector<int> rem(k, 1);
        if (2023 % product != 0)
        {
            cout << "NO" << endl;

        }
        else
        {
            cout << "YES" << endl;
            int x = 2023 / product;
            rem[0] = x;
            for (int i = 0; i < k; i++)
            {
                cout << rem[i] << " ";
            }
            cout<<endl;
            
        }
        t--;
    }
}