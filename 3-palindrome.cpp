#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <char> v1;
    int i=0;
    while(i<=n/2){
        if(i%2==1){
        v1.push_back('a');
        v1.push_back('a');
    }
    else{
        v1.push_back('b');
        v1.push_back('b');
    }
    i++;
    }
    while(v1.size()>n){
        v1.pop_back();
    }
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i];
    }
    return 0;
}