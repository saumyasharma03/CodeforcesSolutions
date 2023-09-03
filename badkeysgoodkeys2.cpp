#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set <char> s1;
        int n=s.length();
        int j=0;
        if(n==1){
            cout<<s<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
           if(s[i]!=s[j])
           {
            if((j-i)%2!=0){
                s1.insert(s[j]);
                j=i;
            }
            else{
                j=i;
            }
           } 
           //cout<<s[i]<<" "<<s[j]<<endl;
        }
        /*int left=0, right =0;
        while(right<n){
            if(s[left]!=s[right+1]){
                if((right-left+1)%2!=0){
                    s1.insert(s[j]);
                }
                left=right;
                    right++;
            }
            else{
            right++;}
            cout<<s[left]<<" "<<s[right]<<endl;
        }*/
        /*for(int i=0;i<n; i++)
        {
            int j=i;
            while(j+1<n&&s[j+1]==s[i]){
                j++;
            }
            if((j-i)%2!=0){
                s1.insert(s[i]);
            }

        }*/

        for(auto it: s1){
            cout<<it;
        }

        }
      return 0;
}