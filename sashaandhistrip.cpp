#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,v;
    cin>>n>>v;
    int tot=0; int i=2;
    if(n<=v){
            tot=n-1;
        }
        else{
        tot=v;
        while(i<=n-v){
        tot+=i;
        i++;
    }
    }
    cout<<tot<<endl;
}