#include<bits/stdc++.h>
using namespace std;
void stackk(int);
void push(int*, int&);
void pop(int*, int&);
int top;
int main(){
    int n;
    cin>>n;
    stackk(n);
    return 0;
}
void stackk(int ntemp){
	int p[100000];
    int elementnum=0;
    for(int i=0;i<ntemp;i++){
     int instruction;
     cin>>instruction;
     if(instruction==1) continue;
     if(instruction==2) pop(p,elementnum);
     if(instruction==3) push(p,elementnum);	
    }
}
void push(int* ptr,int& time){
    cin>>ptr[time];
    top=ptr[time++];
}
void pop(int* ptr,int& time){
    cout<<top<<"\n";
    top=ptr[--time-1];
}
