//Problem: FROGS Contest: FEB21C
//https://www.codechef.com/FEB21C/problems/FROGS/

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
       ll w[n],l[n];
       ll ind[n];
       for(ll i=1;i<=n;i++){
           cin>>w[i];
           ind[w[i]]=i;
       }
       for(ll i=1;i<=n;i++){
           cin>>l[i];
       }
       ll cnt=0;
       for(ll i=2;i<=n;i++){
           ll in=ind[i];
           while(ind[i]<=ind[i-1]){
               ind[i]+=l[in];
               cnt++;
           }           
       }
       cout<<cnt<<endl;
   }
    
return 0;   
}
