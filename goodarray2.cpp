#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
int count=2;int x= ceil((double)1/k);
if(n%2!=0){
        for(int i=2; i<=ceil((double)n/2); i++){
        if(x!=ceil((double)i/k))
        {   x=ceil((double)i/k);
            if(i!=ceil((double)n/2)){
                count+=2;
            }
            else if(i==ceil((double)n/2))
            count+=1;
        }
    }}
else{
    for(int i=2; i<=ceil((double)n/2); i++){
        if(x!=ceil((double)i/k))
        {   x=ceil((double)i/k);
                count+=2;
            }
            }
            
}
    cout<<count<<endl;
}
}