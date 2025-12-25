#include <iostream>
using namespace std;

class car{
    public:
        void start(){cout<<"car object started"<<endl;}
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