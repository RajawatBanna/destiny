#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void print(int n){
	if(n==0) return;
	print(n-1);
	cout<<n<<"\n";
}
int main(){
	fio;
	int n; cin>>n;
	print(n);

	return 0;
}



