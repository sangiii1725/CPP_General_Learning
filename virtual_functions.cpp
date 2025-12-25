#include <iostream>
using namespace std;

class car{
    public:
        virtual void start(){cout<<"car object started"<<endl;}
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
    // we are achiving here RUN-TiME polymorphism as start function is overrided 
    // here start function is bahaving as object oriented, means function is same but action is different


    return 0;
}