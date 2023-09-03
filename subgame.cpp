#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==1||b==1){
            cout<<"2"<<endl;
        }
        else
        cout<<(min(a,b)-1)<<endl;
    }
      return 0;
}n/