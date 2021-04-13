//Problem: SOCKS1 
//https://www.codechef.com/APRIL21C/problems/SOCKS1/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);

   int a,b,c;
   cin>>a>>b>>c;
   if(a==b||a==c){
       cout<<"YES\n";
   } else {
       cout<<"NO\n";
   }
   return 0;
}
