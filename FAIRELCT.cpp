Problem: FAIRELCT Contest: JAN21C
https://www.codechef.com/JAN21C/problems/FAIRELCT

#include <bits/stdc++.h>
#define ll  long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        int sum1=0,sum2=0;
	       for(int i=0;i<n;i++){
	           cin>>a[i];
	           sum1+=a[i];
	       }
	       for(int i=0;i<m;i++){
	           cin>>b[i];
	           sum2+=b[i];
	       }
	       if(sum1>sum2){
	           cout<<"0"<<endl;
	           continue;
	       }
	       sort(a,a+n);
	       sort(b,b+m);
	       int count=0;
	       int j=m-1;
	       for(int i=0;i<n;i++){
	           sum1=sum1-a[i];
	           sum2=sum2-b[j];
	           sum1=sum1+b[j];
	           sum2=sum2+a[i];
	           count++;
	           j--;
	           if(sum1>sum2 || j<0){
	               break;
	           }
	       }
	       if(sum1>sum2){
	           cout<<count<<endl;
	       }
	       else{
	           cout<<"-1"<<endl;
	       }
    }
return 0;
}
