#include<bits/stdc++.h>
#define ll long long
#define en "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

ll dp[100002000];
const ll mod=1e9+7;

set<int>getDigits(int x){
	set<int>dig;
	while(x){
		dig.insert(x%10);x/=10;
	}
	return dig;
}

signed main(){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll m;cin>>m;
for(int i=0;i<=m;i++){
	if(i==0) dp[i]=0;
	else{
		dp[i]=1e9;
		for(auto d:getDigits(i)){
          dp[i]=min(dp[i],1+dp[i-d]);
		}
	}
}

cout<<dp[m]<<en; 

   return 0;
 }