//Problem: FRGTNLNG
//https://www.codechef.com/problems/FRGTNLNG

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
    ll t;
       cin>>t;
       while(t--){
          ll n,k;
          cin>>n>>k;
          vector<string> v;
          string s;
          int a[n]={0};
          for(ll i=0;i<n;i++){
              cin>>s;
              v.push_back(s);
          }  
          set<string> vv;
          while(k--){
              ll m;
              cin>>m;
              string x;
              for(ll i=0;i<m;i++){
                  cin>>x;
                  vv.insert(x);
              }
          }
          ll flag=0;
          ll j=0;
          for(auto it = v.begin(); it !=v.end(); ++it){
              for (auto i = vv.begin(); i !=vv.end(); ++i){
                  if(*i==*it){
                    a[j]=1;  
              }
              }
              j++;    
          }
          for(ll i=0;i<n;i++){
              if(a[i]==1){
                  cout<<"YES"<<" ";
              }else {
                  cout<<"NO"<<" ";
              }
          }cout<<endl;
    }
    return 0;
}
