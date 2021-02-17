//Problem: DECODEIT Contest: JAN21C
//https://www.codechef.com/JAN21C/problems/DECODEIT

#include <iostream>
#include <string>
using namespace std;
int main() {
string a={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
long long int t;
cin>>t;
while(t--){
  long long int n;
  cin>>n;
  string s;
  cin>>s;
  string str;
  for(int i=0;i<n;i+=4){
    str = s.substr(i,4);
    int num =0;
    num = stoi(str,0, 2);
    cout<<a[num];
  }
  cout<<endl;
}
return 0;
}
