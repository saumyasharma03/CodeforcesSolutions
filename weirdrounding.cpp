#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,k;
    cin>>n>>k;
    int x=0,y=0;
    string str= to_string(n);
    //cout<<str.length();
    int nz=str.length();
    if(k>=nz){
        size_t found=str.find("0");
        if(found!=string::npos)
        cout<<nz-1<<endl;
        else
        cout<<nz;
    }
    else{
        
    for(int i=nz-1; i>=0;i--){
        //cout<<"y"<<endl;
        if(str[i]=='0'&&x<=k){
        x++;
        }
        else if(i==0&&x!=0){
            y=nz-1;
            break;
        }
        else if(i==0&&x==0){
            y=nz;
            break;
        }
        else {
        y++;
        }
        
        if(x==k)
        break;
    }
    cout<<y<<endl;
    }
      return 0;
}