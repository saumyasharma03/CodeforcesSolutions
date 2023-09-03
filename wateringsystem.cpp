#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    //minimum no of holes blocked
    int ar[n]; int sum=0; int f=0;
    vector <int> v1;
    for(int i=0; i<n; i++){
        cin>>ar[i];
        sum+=ar[i];
        v1.push_back(ar[i]);
    }
    f=ar[0]; int count=0;
    v1.erase(v1.begin());
    sort(v1.rbegin(), v1.rend());
    int waterflown=0;
    waterflown=(f*a)/sum;
    //cout<<waterflown<<endl;
    while(waterflown<b){
            sum-=v1[0];
            waterflown=(f*a)/sum;
            v1.erase(v1.begin());
            count++;
    }
    cout<<count<<endl;
      return 0;
}