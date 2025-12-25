#include <iostream>
using namespace std;

// Abstract class: a class which has a pure virtual function 
class car{
    public:
        virtual void start() = 0;   // base calss is giving us an interface of start method for derived objects.
};

class innova : public car{
    public:
        void start(){cout<<"innova object started"<<endl;}
};

int main(){

    // car C;
    // innova I;
    // I.start();

    car* C;
    C = new innova;
    C->start();


    return 0;
}