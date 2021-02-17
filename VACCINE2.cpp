//Problem: VACCINE2 Contest: DEC20B
//https://www.codechef.com/DEC20B/problems/VACCINE2

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
int T;
cin>>T;
while(T--){
  int N,D;
  cin>>N>>D;
  int arr[N];
  
  int count = 0;
  for(int i=1;i<=N;i++){
    cin>>arr[i];
    if(arr[i]>=80 || arr[i]<=9){
      count++;
    }
  }
  int res;
  if(D==1){
   res = N;
  }
  else{
    res = ceil((double)count/D)+ceil(((double)(N-count)/D));
  }
  cout<<res<<endl; 
}    
return 0;
}
