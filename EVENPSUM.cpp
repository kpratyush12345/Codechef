//Problem: EVENPSUM Contest: DEC20B
//https://www.codechef.com/DEC20B/problems/EVENPSUM

#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
long long A,B;
cin>>T;

while(T--){ 
long long X1,X2,Y1,Y2;
cin>>A>>B;

if(A%2==0){
Y1=A/2;
X1=A/2;
}

else{
X1=A/2 +1;
Y1=A/2;
}

if(B%2==0){
Y2=B/2;
X2=B/2;
}

else{
X2=B/2 +1;
Y2=B/2;
}
cout<<(X1*X2)+(Y1*Y2)<<endl;
}
return 0;
}
