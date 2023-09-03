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
        int a[n]={0};
        int in[n];
        for(int i=0;i<n; i++){
            cin>>in[i];
        }
        int flag=0;
        int x=n;
        int j=0;
        int sum=0, ans=0;
        for(int i=0;i<n&&sum<n;i++){
            for(j=0;j<n;j++){
            if(in[j]==x){
            a[x-1]++;
            sum++;
            flag=1;
            }
            }
            if(a[x-1]>2||flag==0){
                cout<<"NO"<<endl;
                ans=1;
                break;
            }
            x--; flag=0;
        }
        if(ans==0){
        cout<<"YES"<<endl;
    }}
      return 0;
}