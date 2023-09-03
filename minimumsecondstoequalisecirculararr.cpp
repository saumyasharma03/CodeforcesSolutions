#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
    map <int, vector<int>> m;
        int n= nums.size();
        for(int i=0; i<n; i++){
            m[nums[i]].push_back(i);
        }
        int t=0;
        int maxt=0;
        vector <int> ans;
        for(auto i:m){
            for(int j=0; j<i.second.size()-1;j++){
                t=abs(i.second[j]-i.second[j+1]);
                maxt=max(t,maxt);
            }
            t=i.second[i.second.size()-1]-i.second[0];
            maxt=max(t,maxt);
            ans.push_back(maxt);
        }
        int mini=INT_MAX;
        for(int i=0; i<ans.size(); i++){
           if(ans[i]<mini)
           mini=ans[i];
        }
    }
};
int main(){
    int n;
    cin>>n;
    vector <int> a;
    cout<<"enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Solution ob;
    int ans=ob.minimumSeconds(a);
    cout<<ans;

}