#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x>>y;
     if(y==0){
     cout<<"no"<<endl;
     return 0;}
    if(y==1){
        if(x==0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        return 0;
    }
     y=y-1;
     if(y<0){
        cout<<"no"<<endl;
     }
     else if(x>y){
        x=x-y;
        if(x%2==0){
        cout<<"yes"<<endl;}
        else{
        cout<<"no"<<endl;}
     }
     else if(x<y)
     cout<<"no"<<endl;
     else
     cout<<"yes"<<endl;
    }