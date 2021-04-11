//Problem: SPACEARR
//https://www.codechef.com/MARCH21B/problems/SPACEARR

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
    ll t;
       cin>>t;
       while(t--){
          ll n;
          cin>>n;
          ll a[n];
          for(ll i=0;i<n;i++){
              cin>>a[i];
          }
          sort(a,a+n);
          ll flag =0;
          ll count=0;
          for(ll i=0;i<n;i++){
              if(a[i]>i+1){
                  flag=1;
              }
              else{
                  count+=(i+1-a[i]);
              }
          }
          if(flag){
              cout<<"Second\n";
          }
          else{
              if(count&1){
                  cout<<"First\n";
              }
              else{
                  cout<<"Second\n";
              }
          }
    }
    return 0;
}
