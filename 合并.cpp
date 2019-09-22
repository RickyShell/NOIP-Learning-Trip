#include<bits/stdc++.h>
using namespace std;
int stone[1001];
int main(){
	int n;
	int head=1;
	int power=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>stone[i];
		
	}
	while(1){
		sort(stone+head,stone+n+1);
		head++;
		stone[head]+=stone[head-1];
		power+=stone[head];
		if(head==n) break;
	}
	cout<<power;
	return 0;
}
