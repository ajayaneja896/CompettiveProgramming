#include<bits/stdc++.h>
#define INF 1000000007
#define ll long long int
#define f_in(st) freopen(st,"r",stdin);
#define f_out(st) freopen(st,"w",stdout);
using namespace std;
int main(){
	
	
	f_in("A-large-practice.in");
	f_out("a-large.txt");
	int test;
	cin>>test;
	for(int t=1;t<=test;t++){
		
		int n;
		cin>>n;
		long long int arr[n+100];
		long long int pow[n+100];
		long long int pow_2 = 1;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
			pow[i] = (pow_2-1)%INF;
			pow_2 =  (pow_2 * 2 )%INF;
		}
		ll result = 0;
		for(int i=0;i<n;i++){
			result = (result + (arr[i]*pow[i])%INF)%INF;
			result  = (result - (arr[i]*pow[n-i-1])%INF)%INF;
		}
		cout<<"Case #"<<t<<": "<<result<<endl;
	}
	return 0;
}
