//Problem Code: SSCRIPT
//https://www.codechef.com/APRIL21C/problems/SSCRIPT

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   ll t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int count=1;
      int mx = 0;
      for(int i=0;i<s.length()-1;i++){
          if(s[i]=='*' && s[i+1]=='*'){
              count++;
          } else {
              count=1;
          }
          mx = max(mx,count);
      }
      if(k==1){
          for(int i=0;i<s.length();i++){
              if(s[i]=='*'){
                  mx=1;
                  break;
              } else {
                  mx=0;
              }
          }
      }
      if(mx>=k){
          cout<<"YES\n";
      } else {
          cout<<"NO\n";
      }
   }
   return 0;
}
