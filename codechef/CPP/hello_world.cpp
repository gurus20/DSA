#include <iostream>
using namespace std;

//define class
class Data{
    int x;
    public :
    void get_data(){ 
        cin>>x;
    } 

    Data add(Data Y){
       Data I;
       I.x=x+Y.x;
        return I;
    }
    void display(){
        cout<<x;      
    }

    void mul(Data &D, Data B){
        D.x=D.x*B.x;
    }
};

int main(){
    Data A,B,C;
    A.get_data();
    B.get_data();
    C=A.add(B);
    A.mul(C,B);
    C.display();
    return 0;
}