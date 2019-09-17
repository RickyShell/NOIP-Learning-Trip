#include<iostream>
#include<cmath>
using namespace std;
int n[11][11],tn[100001],vn[100001],f[1000001];
int main(){
	int a,b,t,m,s=1,l;
	cin>>m>>t;
	for(int i=0;i<=10;i++){
		for(int j=0;j<=10;j++) n[i][j]=0;
	}
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		n[a][b]++;
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			for(l=1;l<=n[i][j];l<<=1){
				tn[s]=i*l;
				vn[s]=j*l;
				s++;
				n[i][j]-=l;
			}
			tn[s]=n[i][j]*i;
			vn[s]=n[i][j]*j;
			s++;
		}
	} 
	for(int i=1;i<s;i++){
		for(int j=t;j>=tn[i];j--) f[j]=max(f[j],f[j-tn[i]]+vn[i]);
	}
	cout<<f[t];
	return 0;
} 
