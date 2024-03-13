#include<bits/stdc++.h> 
using namespace std;
class bitch{
	int a,b;
	public:
		int geta(){
			return a;
		}
		int getb(){
			return b;
		}
		bitch(){};
		bitch(int aa,int bb):a(aa),b(bb){};
		bitch(bitch& nk){
			a=nk.geta();
			b=nk.getb();
		}
};
int main(){
	bitch n1,n2,n3;
	int x,y;
	cin>>x>>y;
	n1=bitch(x,y);
	cin>>x>>y;
	n2=bitch(x,y);
	n3=n1;
	n1=n2;
	n2=n3;
	cout<<n1.geta()<<"/"<<n1.getb()<<"\n"<<n2.geta()<<"/"<<n2.getb();
}
