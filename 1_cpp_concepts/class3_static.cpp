#include<iostream>
using namespace std;

class staticTry{
    static int count;
    public:
    void print(){
        cout<<"Hello number-"<<count+1<<endl;
        count++;
    }
};

int staticTry::count;

int main(){
    staticTry t[5];
    for(int i=0;i<5;i++){
        t[i].print();
    }
    return 0;
}