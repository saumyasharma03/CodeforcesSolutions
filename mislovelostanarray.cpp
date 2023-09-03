#include <bits/stdc++.h>
using namespace std;
int sum(vector <int>& ar, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=ar[i];
    }
    return sum;
}
int main()
{   int n,l,r;
    cin>>n>>l>>r;
    int low=n-l, rise=n-r;
    vector <int> v1;
    vector <int> v2;
    int i=1,j=1;
    v1.push_back(i); 
    v2.push_back(j);
    l--,r--;
    while(l>0){
        i*=2;
        v1.push_back(i);
        l--;
    }
    while(r>0){
        j*=2;
        v2.push_back(j);
        r--;
    }
    while(low>0){
        v1.push_back(1);
        low--;
    }
    while(rise>0){
        v2.push_back(j);
        rise--;
    }
    int mins= sum(v1,n);
    int maxs= sum(v2,n);
    cout<<mins<<" "<<maxs<<endl;
      return 0;
}