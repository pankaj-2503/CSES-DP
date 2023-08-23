#include<bits/stdc++.h>
#define ll long long
#define en "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

ll dp[10005][10005];
const ll mod=1e9+7;


signed main(){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
char a[n][n];
f(i,0,n) f(j,0,n) cin>>a[i][j];

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(i==0 && j==0) dp[i][j]=1; 
		else{
			dp[i][j]=0;
			if(i>0) dp[i][j]+=dp[i-1][j];
			if(j>0) dp[i][j]+=dp[i][j-1];
		}
		if(a[i][j]=='*') dp[i][j]=0;
		dp[i][j]%=mod;
	}

}
cout<<dp[n-1][n-1]<<en;


   return 0;
 }