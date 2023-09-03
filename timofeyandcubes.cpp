#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int n1 = 0, n2 = 0;
    int i = 0;
    cout << endl;
    for (int i = 1; i <= n / 2; i++)
    {
        if (i % 2 == 0)
            continue;
        else
        {
            n1 = i;
            n2 = (n - i + 1);
            if(n1!=n2){
            int temp=a[n2];
            a[n2] = a[n1];
            a[n1] = temp;
            //cout<<a[n1]<<" "<<a[n2]<<endl;
        }}
    }
    for (int i = 1; i <=n; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}