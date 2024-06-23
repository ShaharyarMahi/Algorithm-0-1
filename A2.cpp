//TheOneWh0Lives

#include<bits/stdc++.h>
using namespace std;

//define 
#define ld long double
#define ll long long
#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl;
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl;


//constant
const int MOD = 1e9 +7;
//const int INF = LLONG_MAX / 2;


signed main(){

	IOS

	ll x;
	cin>>x;

	ll reck=0;

	for(ll i=1 ; i<=x; i++){
		if(x%i==0) reck++;
	}


	if(reck==2) YES
	else NO

    return 0;

}





 