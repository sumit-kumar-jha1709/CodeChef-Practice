#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll testCases;
	scanf("%lld",&testCases);
	while(testCases--)
	{
	    long long n;
	    scanf("%lld", &n);
	    
	    ll ans=1+((n-2)*(n-1));
	    
	    printf("%lld\n",ans);
	}
	return 0;
}