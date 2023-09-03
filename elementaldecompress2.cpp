#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int p[n]={0};
        int q[n]={0};
        int flag=0; int pair[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int c[n+1]={0};
        for(int i=0;i<n;i++){
            c[a[i]]++;
            if(c[a[i]]>2){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
            continue;
        }
        priority_queue <int> pq;
        for(int i=1; i<=n; i++){
            if(c[i]==0)
            pq.push(i);
        }
        for(int i=n; i>=1;i--){
            if(c[i]==1)
            pair[i]=i;
            else if(c[i]==2){
                if(pq.top()<i){
                pair[i]=pq.top();
                pair[pq.top()]=i;
                pq.pop();}
            else{
                flag=1;
                break;
            }
            }
        }
        if(flag>0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
        bool v[n+1]={false};
        for(int i=0;i<n; i++){
            if(v[a[i]]==false){
                p[i]=a[i];
                q[i]=pair[a[i]];
                v[a[i]]=true;
            }
            else{
                q[i]=a[i];
                p[i]=pair[a[i]];
            }
        }
        for(int i=0; i<n; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;}
}
return 0;
}