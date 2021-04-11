//Problem: IRSTXOR 
//https://www.codechef.com/MARCH21B/problems/IRSTXOR

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

ll d=n;
ll one=0;
ll s=0;

while(d>0){
    if(d%2==1){
     one++;
    }
    d/=2;
    s++;
}
int a[s],b[s];
d=n;
int i=0;
while(d>0){
    if(d%2==0){
        a[i]=1;
        b[i]=1;
    }
    else{
        if(one==1){
            a[i]=1;
            b[i]=0;
        }
        else{
        a[i]=0;
        b[i]=1;
    }
    one--;
}
i++;
d/=2;
}
ll x=0,y=0;
ll c=1;
for(int i=0;i<s;i++){
    x+=c*a[i];
    y+=c*b[i];
    c*=2;
}

cout<<x*1LL*y<<"\n";
}
    return 0;
}
