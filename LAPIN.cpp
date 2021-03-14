//Problem: LAPIN 
//https://www.codechef.com/problems/LAPIN

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
          string s;
          cin>>s;
          ll n=s.length()-1;
              string a,b;
              if(n&1){
                  a = s.substr(0,n/2+1);
                  b = s.substr(n/2+1,n);
              }
              else{
              a = s.substr(0,n/2);
              b = s.substr(n/2+1,n);
              }
              sort(a.begin(),a.end());
              sort(b.begin(),b.end());  
              if(a==b){
                  cout<<"YES"<<endl;
              } else {
                  cout<<"NO"<<endl;
              }
    }
    return 0;
}
