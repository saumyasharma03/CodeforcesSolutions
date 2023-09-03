#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
     int n,k;
     cin>>n>>k;
     char s[n];
     cin>>s;
     map <char, int> m1;
     for(int i=0; s[i]!='\0';i++){
        m1[s[i]]++;
     }//total occurences
     //instead of counting longest occurences try to go for
     //number of times it has occured
     vector <char> v;
     for(int i= 0; i<n; i++){
        if(find(v.begin(), v.end(), s[i])==v.end()){
        v.push_back(s[i]);
        k--;
        }
        m1[s[i]]--;
        if(k<0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
     
        if(m1[s[i]]==0){
            k++;
        }
     }
     cout<<"NO"<<endl;
      return 0;
}