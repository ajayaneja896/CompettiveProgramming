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
#define g_out(a,b) cout<<"Case #"<<a<<": "<<b<<endl;


using namespace std;


int isGreen(char c){
	if(c=='#')
		return 1;
	else
		return 0;
}

int getLength(int i, int j, char matrix[105][105], int n, int m){
	
		int height = 1;
		int max_length =  1;
		for(int row=i+1;;row++){
			if(row>=n)
				return max_length;
			for(int col=j-height;col<=j+height;col++){
				if(col<0 || col>=m)
					return max_length;
				if(!isGreen(matrix[row][col]))
					return max_length;
			}
			max_length += (2*height+1);
			height = height+1;
		}
		return max_length;
}

int main()
{
	f_in("C-small-practice.in");
	f_out("out.txt");
	int test;
	cin>>test;
	for(int t=1;t<=test;t++){
		
		int n,m,k;
		cin>>n>>m>>k;
		int matrix[105][105];
		int max_height[105][105];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++){
				char c;
				cin>>c;
				matrix[i][j]=1;
			}
		}
		int max_out =0;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<m;j++){
				
				
				if(matrix[i][j]&&j)
				{
			
				}
				else{
					max_height = matrix[i][j]; 
				}
			}
		}
		g_out(t,max_out);
		
	}
	return 0;
}

