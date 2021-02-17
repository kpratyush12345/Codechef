//Problem: HDIVISR Contest: FEB21C
//https://www.codechef.com/FEB21C/problems/HDIVISR/

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
 
   int n;
   cin>>n;
   int mx=INT_MIN;
   for(int i=1;i<=10;i++){
       if(n%i==0){
           mx=max(mx,i);
       }
   }
   cout<<mx<<endl; 
return 0;   
}
