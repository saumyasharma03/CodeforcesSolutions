#include <bits/stdc++.h>
using namespace std;
/*int isMin(int ar[],int n, int x){
    for(int i=0; i<n;i++){
        if(ar[i]<x)
        return 1;
    }
    return 0;
}
int isMax(int ar[],int n, int x){
    for(int i=0; i<n;i++){
        if(ar[i]>x)
        return 1;
    }
    return 0;
}*/
int main(){
    int n; int c=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i]>a[0]&&a[i]<a[n-1]){
            c++;
        }
    }
    //i+1 non duplicate integers
    cout<<c<<endl;
}