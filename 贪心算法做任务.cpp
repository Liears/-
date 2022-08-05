#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
    int T,W;
    bool operator < (const node& other)const{
        return W>other.W;
    }
};
node a[200000+5];
int ans[200000+5];
int n;
int pre[200000+5];
bool vis[200000+5];
int find(int x){
    if(!vis[x])return x;
    return pre[x]=find(pre[x]);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].T>>a[i].W;
    }
    for(int i=1;i<200005;i++){
        pre[i]=i-1;
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++){
        int t=find(a[i].T);
        if(t){
            ans[t]=a[i].W;
            vis[t]=true;
        }
    }
    int res=0;
    for(int i=1;i<200005;i++){
        res+=ans[i];
    }
    cout<<res<<endl;
    return 0;
}