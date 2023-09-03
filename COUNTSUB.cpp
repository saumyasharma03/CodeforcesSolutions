#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int t;
cin>>t;
while(t--){
    int n; int count=0;
    cin>>n;
    int a[n];
    int b[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];}
    for(int i=0; i<n-1; i++){
        b[i]=a[i]-a[i+1];
    }int j=0; int x;
    //vector <vector <int>> v1;
    //for(int i=0; i<n; i++){
        sum=0;x=0;int i=0;
    for( j=x; j<i+1, x<i+1, i<n; j++){
        sum += b[j];
    if((a[j]-a[x])!=sum){
        count++;}
    if(j==i){
    j=x+1;
    i++;}
    }
    cout<<count<<endl;
}
	return 0;
}
