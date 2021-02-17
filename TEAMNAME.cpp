//Problem: TEAMNAME Contest: FEB21C
//https://www.codechef.com/FEB21C/problems/TEAMNAME

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll solve(vector<char>u,vector<char>v){
    set<char>s(u.begin(),u.end());
    ll tt=0;
    for(auto x:v){
        if(s.find(x)!=s.end()) tt++;
    }
    return tt;
}
int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
     
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
      map<string,vector<char>>mp;
      string str;
      for(ll i=0;i<n;i++){
          cin>>str;
          if(str.length()>0)
          mp[str.substr(1)].push_back(str[0]);
      }
      ll res=0;
      for(auto i:mp){
          for(auto j:mp){
          if(i.first!=j.first){
              ll tt=solve(i.second,j.second);
              res+=(i.second.size()-tt)*(j.second.size()-tt);
          }
      }
    }
    cout<<res<<"\n";
    }
   
    return 0;
}
