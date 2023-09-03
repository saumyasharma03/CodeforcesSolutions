#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int count;
        set <char> s1;
        //int ar[26]={0};
        if(s.length()==1){
            cout<<s<<endl;
            continue;
        }
        for(int i=0;i<(s.length());i++){
        if(i==0){
            if(s[i]!=s[i+1]){
            s1.insert(s[i]);
        }}
        else if(i==s.length()-1){
            if(s[i]!=s[i-1]){
            
            s1.insert(s[i]);}
        }
        else{
        if((s[i]!=s[i+1]&&s[i]!=s[i-1])){
            s1.insert(s[i]);
        }}}
        for(auto i:s1){
            
            cout<<i;
        }
        cout<<endl;
    }
      return 0;
}