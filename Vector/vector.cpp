#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> *vp = new vector<int>();
    vector<int> v;
     for(int i=0; i<100; i++){
        cout<<"cap: "<<v.capacity()<<endl;
        cout<<"size: "<<v.size()<<endl;
       v.push_back(i+1);
    }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();
    
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<endl;
    }

    // v[1] = 100;
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;

}