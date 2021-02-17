//Problem: DIVTHREE Contest: JAN21C
//https://www.codechef.com/JAN21C/problems/DIVTHREE

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      long long int n,k,d;
      long long int total=0,ans;
     cin>>n>>k>>d;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
         total+=arr[i];
     }
     ans=min((total/k),d);
     cout<<ans<<endl;
    }
	return 0;
}
