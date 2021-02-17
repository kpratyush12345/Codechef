//Problem: VACCINE1 Contest: DEC20B
//https://www.codechef.com/DEC20B/problems/VACCINE1/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int res=0,f=0;
    if(d1<d2)
    {
        int num_day=d1-1;
        while(res<p){
            res+=v1;
                if(d1==d2 || f==1){
                    
                res+=v2;
                f=1;
            }
            d1++;
            num_day++;
        }
        cout<<num_day<<endl;
    }
    else{
        int num_day=d2-1;
        while(res<p){
            res+=v2;
            if(d1==d2 || f==1){
                res+=v1;
                f=1;
            }
            d2++;
            num_day++;
        }
        cout<<num_day<<endl;
    }
    return 0;
}
