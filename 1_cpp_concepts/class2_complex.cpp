#include<iostream>
#include<string>
using namespace std;

class complex{
    int x,y;
    public:
        void enterData(int a,int b){
            x=a;
            y=b;
        }
        string display(complex c1,complex c2){
            x = c1.x + c2.x;
            y = c1.y + c2.y;
            string s = to_string(x) + " + " + to_string(y)+"i";
            return s;
        }
};

int main(){
    complex c1,c2,c3;
    c1.enterData(2,2);
    c2.enterData(3,3);
    cout<<"\nThe complex number formed is : "<<c3.display(c1,c2)<<endl<<endl;
    return 0;
}