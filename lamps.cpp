#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map <int, int> m1;
        int x,y;//by def map sorts its elements by keys
        for(int i=0; i<n; i++){
            cin>>x;
            cin>>y;//i need this sorted!
            m1[i]=x;
        }
        int mark=0, score=;
        for(int i=n-1; i>=0; i++){
         if(m1[i]<=mark){
            mark--;
            m1[i]=-1;
        }
        else{

        }
    }
}
}