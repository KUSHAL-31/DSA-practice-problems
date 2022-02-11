#include<iostream>
#include<string>
using namespace std;

class students{
    string name;
    int roll_no;
    int marks;

    public:
    void enter_data(string n,int r,int m){
        name=n;
        roll_no=r,
        marks=m;
        get_data();
    }
    void get_data();
};

void students::get_data(){
    cout<<"Name :"<<name<<endl;
    cout<<"Roll nnumber :"<<roll_no<<endl;
    cout<<"Marks :"<<marks<<endl;
}

int main(){
    students s1;
    string c;
    int a,b;
    cin>>c;
    cin>>a>>b;
    s1.enter_data(c,a,b);
    // s1.get_data();
    return 0;
}