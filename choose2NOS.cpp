#include <bits/stdc++.h>
using namespace std;
int main(){
int n=0;
vector <int> a; int x,y;
cin>>n;
for(int i=0; i<n; i++){
cin>>x;
a.push_back(x);
}
int m=0;
vector <int> b;
cin>>m;
for(int i=0; i<m; i++){
cin>>y;
b.push_back(y);
}
sort(a.begin(), a.end());
sort(b.begin(), b.end());
cout<<(a[n-1])<<" "<<(b[m-1]);
return 0;
}