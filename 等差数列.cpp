#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,vis[200010],sizee,squaree[200010],ans,num;
struct node
{
    int a,b;
}s[200010];
bool cmp(node x,node y)
{
    if(x.b!=y.b)return x.b<y.b;
    else return x.a<y.a;
}
int main()
{
	ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<=m;i++)
    {
        for(int j=i;j<=m;j++)
        {
            if(!vis[i*i+j*j])
            {
                vis[i*i+j*j]=1;
                squaree[++sizee]=i*i+j*j;
            }
        }
    }
    for(int i=1;i<=sizee;i++)
    {
        for(int j=1;j<=2*m*m;j++)
        {
            if(squaree[i]+(n-1)*j>2*m*m)
			break;
			
            ans=1;
            
            for(int k=1;ans<n;k++)
            {
                if(vis[squaree[i]+k*j])ans++;
                else break;
            }
            if(ans==n)
            {
                num++;
                s[num].a=squaree[i];
                s[num].b=j;
            }
        }
    }
    if(num==0)
    {
        cout<<"NONE";
        return 0; //exit(0);
    }
    sort(s+1,s+1+num,cmp);
    for(int i=1;i<=num;i++)
	cout<<s[i].a<<" "<<s[i].b<<endl;
    return 0;
}
