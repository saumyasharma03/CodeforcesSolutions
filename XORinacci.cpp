#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    //series follows pattern a,b, axorb, a,b, axorb
    if(n%3==2)
    cout<<(a^b)<<endl;
    else if(n%3==0)
    cout<<a<<endl;
    else if(n%3==1)
    cout<<b<<endl;
}
return 0;}