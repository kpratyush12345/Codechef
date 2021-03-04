//Problem: CHN15A 
//https://www.codechef.com/problems/CHN15A

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
          ll a[n];
          ll count=0;
          for(ll i=0;i<n;i++){
              cin>>a[i];
          }    
          for(ll i=0;i<n;i++){
              a[i]+=k;
              if(a[i]%7==0){
                  count++;
              }
          }
          cout<<count<<endl;
    }
    return 0;
}
