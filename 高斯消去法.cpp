#include<bits/stdc++.h>
using namespace std;
clock_t Begin, End;
class vectors{
		public:
	double* el;
	double sol;
	static int mm;
	vectors(){
				el=new double[mm+1];
		};
		vectors(double* tem):el(tem){
		}
	void  oper(vectors n, int p){
                if(el[p]!=0){
			double tempp=-el[p]/n.el[p];
			for(int kp=0;kp<=mm;kp++){
            if(n.el[kp]!=0){
                el[kp]=tempp*n.el[kp]+el[kp];	
            }
			}
                }
		}
		void getsol(vectors* n, int p){
			double sum=0;
			for(int x1=0;x1<p;x1++){
				if(el[x1]!=0){
				sum=sum+el[x1]*n[x1].sol;	
				}
			}
			sol=(el[mm]-sum)/el[p];
		}
};
int vectors::mm;
int main(){
	cin>>vectors::mm;
	vectors row[vectors::mm];
	ifstream f1;
	ofstream f2;
	f1.open("matrix.txt",ios::in);
	f2.open("soll.txt",ios::out);
	for(int i1=0;i1<vectors::mm;i1++){
		for(int i2=0;i2<=vectors::mm;i2++){
		f1>>row[i1].el[i2];
		}
	}
	Begin= clock();
	for(int j1=vectors::mm-1;j1>=0;j1--){
		for(int j2=j1-1;j2>=0;j2--){
			if(row[j1].el[j1]==0) swap(row[j1],row[j2]);
			else break;
		}	
		for(int j3=j1-1;j3>=0;j3--){
		row[j3].oper(row[j1],j1);
		}
	}
	    for(int x3=0;x3<vectors::mm;x3++){
	    	row[x3].getsol(row, x3);
	         f2<<row[x3].sol<<endl;
	    }
	    End=clock();
	    cout<<double(End - Begin)/CLK_TCK;
	return 0;
}
