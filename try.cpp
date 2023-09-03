#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    ll i=l,j=x;
    ll max=0, maxs=0;
    int flag=0;
    double ef=0;
    if(x>y)
    max=j, maxs=x;
    else
    max=i, maxs=r;
    while(max<=maxs){
        ef=(double)(j/i);
        if(ef<k)
        j++;
        else if(ef>k)
        i++;
        else if(ef==k){
        flag=1;
        break;}
    }
    if(flag==1)
    cout<<"yes"<<endl;
    else 
    cout<<"no"<<endl;
    return 0;
}
