//Problem: MAXFUN Contest: FEB21C
//https://www.codechef.com/FEB21C/problems/MAXFUN/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 
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
       ll x = a[0];
       ll z = a[1];
       ll y = a[n-1];
       ll res = abs(x-y)+abs(y-z)+abs(z-x);
       cout<<res<<endl;
   }
return 0;   
}
