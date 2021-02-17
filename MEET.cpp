//Problem: MEET Contest: FEB21C 
//https://www.codechef.com/FEB21C/problems/MEET

#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
   while(t--){
       string tm,m;
       cin>>tm>>m;
       string s ;
       s[0]=tm[0];
       s[1]=tm[1];
       s[2]=tm[3];
       s[3]=tm[4];
       ll num = std::stoi(s);
       if(m[0]=='A' && (num>=1200&& num<=1259)){
               num-=1200;
       }
       if(m[0]=='P' && num<1200){
           num+=1200;
       }
       ll n;
       cin>>n;
       string l,a,r,p;
       while(n--){
           cin>>l>>a>>r>>p;
           s[0]=l[0];
           s[1]=l[1];
           s[2]=l[3];
           s[3]=l[4];
           ll numl=std::stoi(s);
           if(a[0]=='A' && (numl>=1200&& numl<=1259)){
               numl-=1200;
           }
           if(a[0]=='P' && numl<1200){
              numl+=1200;
           }
           
           s[0]=r[0];
           s[1]=r[1];
           s[2]=r[3];
           s[3]=r[4];
           ll numr=std::stoi(s);
           if(p[0]=='A' && (numr>=1200&& numr<=1259)){
               numr=numr-1200;
           }
           if(p[0]=='P' && numr<1200){
           numr+=1200;
           }
           if(numl<=num && numr>=num){
               cout<<"1";
           }
           else{
               cout<<"0";
           }
       }
       cout<<endl;
   }
return 0;   
}
