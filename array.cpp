#include <bits/stdc++.h>
#include <iostream>
#include <array>
using namespace std;

int arr[100001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long  n, m;
        cin >> n >> m;
        long sum = 0;

        long x[m], y[m];
        for (int i = 0; i < m; i++)
        {
            cin >> x[i] >> y[i];
        }

        vector<pair<int, int>> vect;
        for (int i = 0; i < m; i++)
            vect.push_back(make_pair(x[i], y[i]));

        sort(vect.rbegin(), vect.rend());
        

        int k = 0;
        int j = 0;
        int i = 1;
        int p = 1;

        while (i <= n)
        {
            if (i % vect[j].second == 0)
            {
                arr[k] = i;
                k++;
            }
            if (vect[j].second == 1)
            {
                i++;
            }
            else
            {
                i = p * (vect[j].second);
                p++;
            }
        }

        sum = (vect[j].first * (n - k));

        for (int j = 1; j < m; j++)
        {
            int q = 0;
            while (q < k)
            {
                if (arr[q] % vect[j].second != 0)
                {
                    sum += vect[j].first;
                    arr[q] = 0;
                }
                q++;
            }
        }

        cout << sum << endl;
    }
    return 0;
}