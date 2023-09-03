#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n= str.length();
        int a[26]={0};
        for(int i=0;i<n; i++){
            int j=i;
            while(j+1<n&&str[j+1]==str[i])
            j++;
            if(((j-i)+1)%2!=0)
            a[str[i]-'a']=1;
            i=j;
        }
    for(int i=0;i<26;i++){
        if(a[i])
        cout<<char('a'+i);
    }cout<<endl;
    }
      return 0;
}