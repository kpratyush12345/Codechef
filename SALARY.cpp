//Problem: SALARY
//https://www.codechef.com/problems/SALARY

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
          ll a[n];
          for(ll i=0;i<n;i++){
              cin>>a[i];
          }    
          sort(a,a+n);
          ll sum=0;
          for(ll i=1;i<n;i++){
              sum+=a[i]-a[0];
          }
          cout<<sum<<endl;
    }
    return 0;
}
