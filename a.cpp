#include <iostream>
#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;
inline ll read() {
	ll x=0,f=1;char ch=getchar();
	while(ch<'0' || ch>'9') {if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0' && ch<='9') {x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
ll ans[10000000];
ll Ans;
int main() {
//	freopen("a.in","r",stdin);
//	freopen("a.out","w",stdout);
	int n=read();
	for(int i=1;i<=n;i++)
	for(int j=1;j*i<=n;j++)
	for(int k=i*j;k<=n;k+=i*j)
	ans[k]++;
	for(int i=1;i<=n;i++) Ans+=ans[i];
	printf("%lld",Ans);
	return 0;
}
