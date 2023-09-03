#include <bits/stdc++.h>
using namespace std;
int main(){
   /* */
    /*int ar[n];
    for(int i=1; i<=n; i++){
        int x= ceil(i/k);
        int y= ceil((i+1)/k);
        cout<<x<<endl;
        if(x!=y){
        ar[i-1]=1; ar[n-i]=1;}
        else{
        ar[i-1]=0;
        ar[n-i]=0;
        }
    }*/
    /*int count=0;
    if(n%2==0){
        count=2;int x= ceil(1/k);
        for(int i=2; i<=n/2; i++){
        if(x!=ceil(i/k)){
        int x= ceil(i/k);
        count+=2;}
    }}
    // int ar[n+1]={0};
    else{
        count=2;int x= ceil(1/k);
        for(int i=2; i<=ceil(n/2); i++){
        if(x!=ceil(i/k))
        {   x=ceil(i/k);
            if(i!=ceil(n/2)){
                count+=2;
            }
            else if(i==ceil(n/2))
            count+=1;
        }}}*/
    /* if((n%2==0&&k%2==0)|| (n%2!=0&&k%2!=0)){int x= ceil(1/k);
     ar[1]=1; ar[n]=1;
    for(int i=1; i<=n; i++){
        if(x!=ceil(i/k))
        { x=ceil(i/k);
        if(ar[i]!=1)
        ar[i]=1;}}
      //x= ceil(1/k);
    for(int i=n; i>=1; i--){
        if(x!=ceil(n/k))
        { x=ceil(i/k);
        if(ar[i]!=1)
        ar[i]=1;}
    }}
    else{
        int x= ceil(1/k);
        for(int i=2; i<=n; i++){
        if(x!=ceil(i/k))
        { x=ceil(i/k);
        if(ar[i]!=1)
        ar[i]=1;}}
      //x= ceil(1/k);
    for(int i=n; i>=1; i--){
        if(x!=ceil(n/k))
        { x=ceil(i/k);
        if(ar[i]!=1)
        ar[i]=1;}
    }
    }
    for(int i=1; i<n+1; i++){
        cout<<ar[i]<<" ";
        if(ar[i]==1){
            //cout<<ar[i]<<" "<<count;
        count++;
        }
        cout<<"count "<<count<<endl;
    }*/
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    cout<<(ceil((double)(n-1)/k)+1)<<endl;
}
}