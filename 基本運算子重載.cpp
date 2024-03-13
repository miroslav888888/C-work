#include<bits/stdc++.h>
using  namespace std;
class ii{
	int a;
	int b;
	public:
		ii(){};
		ii(int ak,int bk):a(ak),b(bk){};
	void output(){
	cout<<a<<"/"<<b<<endl;	
	}	
	ii operator *(ii x){
		return ii(a*x.a,b*x.b);
	}
	ii operator /(ii y){
		return ii(a*y.b,b*y.a);
	}
};

int main(){
	int akk,bkk;
	ii n1,n2;
	cin>>akk>>bkk;
	n1=ii(akk,bkk);
	cin>>akk>>bkk;
	n2=ii(akk,bkk);
	(n1*n2).output();
	(n1/n2).output();
	return 0;
}
