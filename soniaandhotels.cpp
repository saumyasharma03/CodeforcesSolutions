#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,x;
    cin>>n>>d;
    int mindis=(2*d);
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int count=2;
    for(int i=0; i<n-1; i++){
        x= (a[i+1]-a[i]);
        if(x==mindis){
            count++;
            //cout<<count<<" ";
        }
        else if(x>mindis)
        count+=2;
    }
    cout<<count;
}