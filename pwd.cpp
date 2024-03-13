//用inorder,postorder找二元數
#include<iostream>
using namespace std;
string inorder, postorder;
int indexpostorder[88]={-888};
void function(int start, int end){
    if(start!=end){
        int indexroot,max=-1;
      for(int i=start;i<end;i++){
         if(indexpostorder[inorder[i]-'0']>max){
            indexroot=i;
            max=indexpostorder[inorder[i]-'0'];
         }
      } 
    cout<<inorder[indexroot];
    function(start, indexroot);
    function(indexroot+1, end);
    }
} 
int main(){
cin>>inorder>>postorder;
int n=inorder.length();
for(int i=0;i<n;i++){
    indexpostorder[postorder[i]-'0']=i;
}
function(0,n);
return 0;
}