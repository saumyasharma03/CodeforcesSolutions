#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="no";
    if(s.length()>2){
    for(int i=0; i<s.length()-2; i++){
        
        if(((int)s[i]+(int)s[i+1]+(int)s[i+2])==198){
            cout<<i<<" ";
            ans="YEs";
            break;
        }
        
    }}

    cout<<ans<<endl;
return 0;
}