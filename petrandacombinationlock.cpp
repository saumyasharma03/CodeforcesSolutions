#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum; int flag=0;
    for(int i=0;i<(1<<n);i++){
        sum=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
            sum+=a[j];
            }
            else{
            sum-=a[j];}
            
        }
        if(sum%360==0){
            flag=1;
            //cout<<sum;
            break;
        }
    }
    if(flag==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
      return 0;
}