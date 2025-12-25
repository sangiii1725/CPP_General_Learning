#include <iostream>
using namespace std;

class static_class{
    public:
        double value = 10.2367;
        static int count;

        double get_value(){return value;}
        int get_count(){count++; return count;}
        static double get_count_static(){count++; return count;}
};

int static_class::count = 0;

int main(){

    static_class S;
    cout<<S.get_value()<<endl;
    // cout<<S.get_count()<<endl;
    cout<<S.get_count()<<endl;

    // static member can also call with class name
    // whenever we call static method with class, definatly static method should create to access static member data
    cout<<static_class::get_count_static()<<endl;

    return 0;
}