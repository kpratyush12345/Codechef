//Problem: CNOTE
//https://www.codechef.com/problems/CNOTE

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
    ll t;
       cin>>t;
       while(t--){
          ll x,y,k,n;
          cin>>x>>y>>k>>n;
          ll p,c,flag=0;
          for(ll i=0;i<n;i++){
              cin>>p>>c;
              if(x-y<=p && k>=c){
                  flag=1;
              }
          } 
          if(flag){
              cout<<"LuckyChef"<<"\n";
          } else {
              cout<<"UnluckyChef"<<"\n";
          }
    }
    return 0;
}
