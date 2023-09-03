#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    string s4="";int x; char y;
   map<char, char> m1;
   for(int i=0; i<s1.length(); i++){
    m1[s1[i]]=s2[i];
   }
    for(int i=0; i<s3.length(); i++){
            if(s3[i]>='A' && s3[i]<='Z'){
                x=(int)s3[i]+32;
                y=m1[x];
                x=(int)y;
                x-=32;
            s4.push_back((char)x);
        }   else if(s3[i]>='a'&&s3[i]<='z'){
            s4.push_back((m1[s3[i]]));}
            else{
                s4.push_back(s3[i]);
            }
    }

cout<<s4<<endl;
}