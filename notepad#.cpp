#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n; int flag=0;
       string s;
       cin>>n>>s;
       string s1="";
       unordered_map <string, ll> mp;
       for(int i=0; i<n-1; i++){
          s1=s[i];
          s1+=s[i+1];
          if(mp.find(s1)==mp.end()){
            mp[s1]=i;
          }
          else{
            if(mp[s1]!=i-1){
            cout<<"YES"<<endl;
            flag=1;
            break;}
          }
    }
    if(!flag)
    cout<<"NO"<<endl;
    }
    
      return 0;
}