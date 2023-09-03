#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    double a[n];
    double sumtotal=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sumtotal+=(a[i]/100);
    }
    sumtotal= (sumtotal/n);
    cout<<sumtotal*100;
      return 0;
}