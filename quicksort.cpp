#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int k;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int indsm = INT_MAX;
        int small = a[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i - 1] > small)
            {
                indsm = min(indsm, a[i - 1]);
            }
            else
            {
                small = a[i - 1];
            }
        }
        if(indsm==INT_MAX){
            cout<<0<<endl;
        }
        else{
            int el = n - indsm + 1;
            if (el % k == 0)
            {
                cout << el / k << endl;
            }
            else
                cout << (el / k + 1) << endl;
        }
    }
    return 0;
}
