#include <iostream>
using namespace std;
int max(int a,int b){ return a>b?a:b;}
int dp[1004][1003][3];
int ar[][2]={{3,2},{-5,-10},{-20,5}};
int call(int h,int a,int cur)
{
    if(h<=0||a<=0) return 0;
    if(dp[h][a][cur]!=0) return dp[h][a][cur];
    int t=-1;
    for(int i=0;i<3;i++)
    {
        if(i!=cur)
            t=max(t,1+call(h+ar[i][0],a+ar[i][1],i));
    }
    return (dp[h][a][cur]=t);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int h,a;
        cin>>h>>a;
        cout<<call(h+ar[0][0],a+ar[0][1],0)<<endl;
    }
	return 0;
}
