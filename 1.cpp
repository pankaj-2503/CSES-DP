#include<bits/stdc++.h>
#define int long long
#define en "\n"
#define f(i,a,b) for(int i=0;i<n;i++)
using namespace std;
 
int dp[100002000];
const int mod=1e9+7;
 
signed main(){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int m;cin>>m;
for(int i=0;i<=m;i++){
	if(i==0) dp[i]=1;
	else{
		dp[i]=0;
		for(int j=1;j<=6;j++){
			if(j<=i){
				dp[i]+=dp[i-j];
			}
		}
		dp[i]%=mod;
	}
}
cout<<dp[m]<<en; 
 
   return 0;
 }