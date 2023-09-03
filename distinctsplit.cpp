#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int maxi=0;
        vector <int> prefix(n, 0);
        vector <int> suffix(n,0);
        //prefix and suffix of n size intialised with 0
        set<int> a;
        for(int i=0; i<n; i++){
            a.insert(s[i]);
            prefix[i]=a.size();
            //cout<<prefix[i]<<" ";
        }
        a.clear();
        //cout<<endl;
        for(int i=n-1; i>=0; i--){
            a.insert(s[i]);
            suffix[i]=a.size();
            //cout<<suffix[i]<<" ";
        }
        for(int i=0;i<n-1; i++){
            ans=prefix[i]+suffix[i+1];
            maxi=max(maxi,ans);
        }
        cout<<maxi<<endl;
    }
      return 0;
}