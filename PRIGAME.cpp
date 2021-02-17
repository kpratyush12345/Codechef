//Problem: PRIGAME Contest: FEB21C
//https://www.codechef.com/FEB21C/problems/PRIGAME

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll n = 1e6+5;
ll out[n];

void solve(){
    vector<ll>v;
    bool prime[n];
    memset(prime, true, sizeof(prime));
 
    for (ll p=2;p*p<n;p++){
        if (prime[p] == true){
            for (ll i = p*p;i<n;i+=p)
                prime[i] = false;
        }
    }
    for (ll p=2;p<n;p++)
        if (prime[p])
            v.push_back(p);

    auto itr = v.begin();
    ll count = 0;
    for (ll i=0;i<n;i++){
        if(*itr <= i){
            ++count;
            ++itr;
        }
        out[i] = count;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(out[x]<=y)
            cout<<"Chef\n";
        else
            cout<<"Divyam\n";
    }
    return 0;
}
