#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> q;
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int k;
        cin>>k;
        if(k==1){
            int temp;
            cin>>temp;
            q.push_back(temp);
        }
        else if(k==2){
            if(q.empty()==1) cout<<-1<<endl;
            else{
                cout<<q.front()<<endl;
            }
        }
        else if(k==3){
            if(q.empty()==1) continue;
            else q.erase(q.begin());
        }

    }

return 0;
}