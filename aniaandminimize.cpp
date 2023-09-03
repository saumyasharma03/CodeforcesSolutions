#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{   int n,k;
    cin>>n;
    cin>>k;
    //vector <int> v1;
    string s;
    cin>>s;
    if(n==1&& k>=1){
        std::cout<<"0"<<endl;
        return 0;
    }
    if(k==0){
        std::cout<<s;
        return 0;
    }
    int i=1;
    if(s[0]!='1'){
            s[0]='1';
            k--;
        }
    for(int i=1; i<n && k>0; i++){
        //cout<<i<<" "<<v1[i]<<endl;
        if(s[i]=='0'){
            continue;
        }
        else{
            s[i]='0';
            k--;
        //cout<<v1[i]<<endl;
        }
        }
        std::cout<<s<<endl;
      return 0;
}