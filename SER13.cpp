#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,i;
		scanf("%d",&n);
		vector < long long > a(n),b(n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		int ans = 0;
        //author anas khan
		for(i=0;i<n;i++)
		{
			int l = 0 , h = n-1 , m;
			int p = -1;
			while(l <= h)
			{
				m = (l+h)/2;
				if(b[m] >= a[i])
				{
					p = m;
					l = m + 1;
				}
				else
				{
					h = m - 1;
				}
			}
			ans = max(ans,p - i);
		}
		printf("%d\n",ans);
    return 0;
}