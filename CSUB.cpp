//Problem: CSUB
//https://www.codechef.com/problems/CSUB

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
          string s;
          cin>>s;
          ll one = 0;
          for(ll i=0;i<n;i++){
              if(s[i]=='1'){
                  one++;
              }
          } 
          cout<<one*(one+1)/2<<endl;   
    }
    return 0;
}
