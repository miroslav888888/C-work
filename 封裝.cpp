#include<iostream>
using namespace std;
class idk{
	int a,b;
	public:
		int geta(){
			return a;
		}
		int getb(){
			return b;
		}
		idk(){};
		idk(int ka,int kb):a(ka),b(kb){}; 
};
int main(){
	idk n1,n2;
	int x,y;
	cin>>x>>y;
	n1=idk(x,y);
	cin>>x>>y;
	n2=idk(x,y);
	cout<<n1.geta()*n2.geta()<<"/"<<n1.getb()*n2.getb();
} 
