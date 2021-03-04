//Problem: COPS
//https://www.codechef.com/problems/COPS

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
          ll t[101]={0};
          ll m,x,y;
          cin>>m>>x>>y;
          ll a[m];
          for(ll i=0;i<m;i++){
              cin>>a[i];
          }    
          ll p = x*y;
          ll mn[m],mx[m];
          for(ll i=0;i<m;i++){
              mn[i] = a[i]-p;
              mx[i] = a[i]+p;
              if(mn[i]<1){
                  mn[i]=1;
              }
              if(mx[i]>100){
                  mx[i]=100;
              }
          }
          for(ll i=0;i<m;i++){
              for(ll j=mn[i];j<=mx[i];j++){
                  t[j]=1;
              }
          }
          ll count=0;
          for(ll i=1;i<101;i++){
              if(t[i]==0){
                  count++;
              }
          }
          cout<<count<<"\n";          
    }
    return 0;
}
