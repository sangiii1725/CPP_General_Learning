#include <iostream>
using namespace std;

class B{
    public:
        int p = 5;

        int get_p(){return p;}
        void set_p(int P){p = P;}
};

class A{
    public:
        int q = 10;
        class B;

        int get_q(){return q;}
        void set_q(int Q){q = Q;}
};

int main(){

    A a;
    a.p = 10;

    B b;
    b.get_p();

    return 0;
}