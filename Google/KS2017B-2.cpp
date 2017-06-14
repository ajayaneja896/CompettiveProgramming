#include<bits/stdc++.h>
#define scan(n) scanf("%d",&n)
#define scanll(n) scanf("%lld",&n)
#define For(i,a,b) for(i=a;i<b;i++)
#define fill(a,b) memset(a,b,sizeof(a))
#define swap(a,b) a=a+b;b=a-b;a=a-b;
#define ll long long int
#define pb push_back
#define debug(x) cout << '>' << #x << '=' << x << endl;
#define MAX 1000000007
#define f_in(st) freopen(st,"r",stdin);
#define f_out(st) freopen(st,"w",stdout);
#define g_out(t) printf("Case #%d: ",t);
using namespace std;


int main()
{
	f_in("B-large-practice.in");
	f_out("B-out1.txt");
	int test;
	cin>>test;
	for(int t=1;t<=test;t++){
		
		int n;
		cin>>n;
		
		double x[105],y[105],w[105], minx,miny,maxx,maxy;
		minx = 10000.00;
		miny = 10000.00;
		maxx = -10000.00;
		maxy = -10000.00;
		
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i]>>w[i];
			minx = min(minx,x[i]);
			miny = min(miny,y[i]);
			maxx =  max(maxx,x[i]);
			maxy = max(maxy,y[i]);
		}		
		double i,j,result = 1e9 ;
		for (i=minx;i<=maxx;i++){
			
			for(j=miny;j<=maxy;j++){
				double val = 0.0;
									
				for(int k=0;k<n;k++){
					
					val += max(abs(x[k]-i),abs(y[k]-j))*w[k];
				}
				result = min(result,val);
			}
		}
		g_out(t);
		printf("%.6f \n",result);
	}
	return 0;
}

