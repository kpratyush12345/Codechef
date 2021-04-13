//Problem Code: BOLT
//https://www.codechef.com/APRIL21C/problems/BOLT

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

float rd(float var){
    return floor((var * 100) + .5) / 100;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   ll t;
   cin>>t;
   while(t--){
      float k1,k2,k3,v;
      cin>>k1>>k2>>k3>>v;
      float res = (float)100/(k1*k2*k3*v);
      float b = 9.58;
      if(rd(res)>=b){
          cout<<"NO\n";
      } else {
          cout<<"YES\n";
      }
   }
   return 0;
}
