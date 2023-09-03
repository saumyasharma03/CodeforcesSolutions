#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(a[0]){
        for(int i=0; i<n; i++){
            if(i%2==0)
            {
                if(a[i]!=1)
                {
                    cout<<"no";
                    return 0;
                }
            }
            else{
                if(a[i]!=0)
                {
                    cout<<"no";
                    return 0;
                }
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(i%2==0)
            {
                if(a[i]!=0)
                {
                    cout<<"no";
                    return 0;
                }
            }
            else{
                if(a[i]!=1)
                {
                    cout<<"no";
                    return 0;
                }
            }
        }
    }
    cout<<"Yes";
    return 0;
}
