//Problem: BILLRD Contest: JAN21C
//https://www.codechef.com/JAN21C/problems/BILLRD

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ll t;
  cin>>t;
  while(t--){
    ll n,k,x,y;
    cin>>n>>k>>x>>y;
    if(x==y){
      cout<<n<<" "<<n<<endl;
    }
    else{
      pair <ll,ll> p[4];
      if(x>y){
        p[0]={n , y+n-x};
        p[1]={y+n-x , n};
        p[2]={0 , x-y};
        p[3]={x-y , 0};
      }
      else{
        p[0]={x+n-y , n};
        p[1]={n , x+n-y};
        p[2]={y-x , 0};
        p[3]={0 , y-x};
      }
      cout<<p[(k-1)%4].first<<" "<<p[(k-1)%4].second<<endl;
    }
  }
  return 0;
}
