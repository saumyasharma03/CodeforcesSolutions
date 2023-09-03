#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        for(int i=0; i<=n; i++){
            int xthelement= n;
            int onelesselement= i;
            bool yesexists=true;
            for(int j=0; j<k-2;j++){
                int fx=onelesselement;
                onelesselement=xthelement-fx;
                xthelement=fx;
                yesexists&=onelesselement<=xthelement;
                yesexists&=min(onelesselement, xthelement)>=0;
                if(yesexists==false) break;
            }
            if(yesexists)ans++;
        }
        cout<<ans<<endl;
    }
}
