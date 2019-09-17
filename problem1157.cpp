#include<bits/stdc++.h>
using namespace std;
int zo[50001];
int n,m;
int main(){
	ios::sync_with_stdio(false);
	
	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		if(i%2==1) zo[i]=0;
//		else zo[i]=1;
//	}
	for(int i=1;i<=m;i++){
		int cho;
		cin>>cho;
		if(cho==1){
			int ji=0;
			int len;
			cin>>len;
			int head=1;
			for(int i=1;i<=n;i++){
				if(!zo[i]){
					ji++;
					if(ji==len){
						cout<<head<<endl;
						for(int j=head;j<head+len;j++){
							zo[j]=1;
						}
						goto end;
					}
				}
				else {
					head=i+1;
					ji=0;
				}
				
			}
			cout<<0<<endl;
				end: continue;
		}
		else{
			int l,r;
			cin>>l>>r;
			for(int i=l;i<l+r;i++){
				zo[i]=0;
			}
		}
	}
	return 0;
}
