#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=0, q=0;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            a[i]>0?p++:q++;
        }
        for(int i=0; i<p; i++){
            cout<<i+1<<" ";
        }
        for(int i=1; i<=q; i++){
            cout<<p-i<<" ";
        }
        cout<<endl;
        for(int i=1; i<=2*q; i++){
            if(i%2==1)
            cout<<"1 ";
            else
            cout<<"0 ";
        }
        for(int i=1; i<=p-q; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
      return 0;
}