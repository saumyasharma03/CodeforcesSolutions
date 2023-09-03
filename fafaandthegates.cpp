#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int count=0; int u=0,r=0;
    cin>>s;
       for(int i=0; i<n; i++){
        if(s[i]=='R')
        r++;
        else
        u++;
        if((r==u)&&(s[i]==s[i+1])){
            count++;
        }
       }
      cout<<count<<endl;
      return 0;
}