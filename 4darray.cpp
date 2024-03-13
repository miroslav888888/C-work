//創造四維陣列並銷毀他
#include<iostream>
using namespace std;
int main(){
    int****a=new int***[8];
    for(int i=0; i<8; i++){
          a[i]=new int**[2];
    }
    for(int i=0; i<8; i++){
          for(int j=0; j<2; j++){
              a[i][j]=new int*[3];
          }
    }
    for(int i=0; i<8; i++){
          for(int j=0; j<2; j++){
              for(int k=0;k<3;k++){
                  a[i][j][k]=new int [69];
              }
          }
    }
    a[2][0][2][2]=888;
    cout<<a[2][0][2][2];
     for(int i=0; i<8; i++){
          for(int j=0; j<2; j++){
              for(int k=0;k<3;k++){
                  delete[] a[i][j][k]; 
              }
          }
    }
       for(int i=0; i<8; i++){
          for(int j=0; j<2; j++){
            delete[]  a[i][j];
          }
    }
     for(int i=0; i<8; i++){
          delete[] a[i];
    }
    delete[] a;
    return 0;
}