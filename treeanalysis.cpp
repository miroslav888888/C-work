#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
long long sumheight=0;
cin>>n;
int father[n+1]={0},dis[n+1]={0};
for(int i=1;i<=n;i++){
    int tempnum;
    cin>>tempnum;
    if(tempnum==0) dis[i]=-888;
    for(int j=0;j<tempnum;j++){
        int son;
        cin>>son;
        father[son]=i;
    }
}
for(int i=1;i<=n;i++){
    if(father[i]==0) cout<<i<<endl;
    if(dis[i]==-888){
    int temp=i;
    dis[i]=0;
    int tempdis=0;
    while(1){
      if(father[temp]==0) break;
    temp=father[temp];
    dis[temp]=max(dis[temp],++tempdis);
    }
    }
}
for(int i=1;i<=n;i++){
    //sumheight=sumheight+dis[i];
    cout<<i<<"       "<<dis[i]<<endl;
}
//cout<<sumheight;
return 0;
}

