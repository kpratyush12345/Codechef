//Problem Code: SDICE
//https://www.codechef.com/APRIL21C/problems/SDICE

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
      ll r1,r2,r3,r4;
      r1=20;
      r2=36;
      r3=51;
      r4=60;
      if(n==1) cout<<r1<<endl;
      else if(n==2) cout<<r2<<endl;
      else if(n==3) cout<<r3<<endl;
      else if(n==4) cout<<r4<<endl;
      else if(n>4){
          ll r;
          if(n%4==1) r = r1;
          else if(n%4==2) r = r2;
          else if(n%4==3) r = r3;
          else r = 0;
          cout<<60*(n/4) + r - 4*(n-4)<<endl;
      }
   }
   return 0;
}
