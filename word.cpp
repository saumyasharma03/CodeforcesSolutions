#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0; i<s.length();i++){
        if(s[i]>=97 && s[i]<=126){
            l++;
        }
        else{
            u++;
        }}
    if(u>l){
    for(int i=0; i<s.length();i++){
        if(s[i]>=97 && s[i]<=126){
            s[i]-=32;
        }
    }}
    else{
        for(int i=0; i<s.length();i++){
        if(s[i]>=65 && s[i]<=91){
            s[i]+=32;
        }
    }
    }
    cout<<s;
      return 0;
}