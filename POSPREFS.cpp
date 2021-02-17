//Problem: POSPREFS 
//https://www.codechef.com/problems/POSPREFS

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll t;
cin>>t;
while(t--){
ll n,k,i,count=0;
 cin>>n>>k;
    std::vector<int> a;
for ( i = 1; i <= n; i++)
{    
	if(i%2==0){
	a.push_back(-i);}
else{
   a.push_back(i);
   count++;
}
}

	 if (count<k)
	 {
	 	for ( i=n-1;i>=0;i--)
	 	{
	 		if(count!=k){
	 		    if(a[i]<0){
	 			a[i]=abs(a[i]);
	 			count++;
	 		}
	 		}
	 	}
	 }
	 
	 	if (count>k)
	 	{
	 		for ( i=n-1;i>=0;i--){
	 			if(count!=k){
	 				if(a[i]>0){
	 					a[i]=-a[i];
	 				
	 				count--;
	 			}
	 		}
	 	}
	 }
	 for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	 
cout<<"\n";
}

return 0;
}
