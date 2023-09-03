#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//solved the logic struggling with clean implementation
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector <int> v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        map<int, int>m;//<index,diff>
        for(int i=0;i<n-1;i++){
            m[v[i+1]-v[i]]=i;
        }
        for(int i=0;i<k;i++){
            for(int j=0; j<)
        }
    }
      return 0;
}