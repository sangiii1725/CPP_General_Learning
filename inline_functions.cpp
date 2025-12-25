#include <iostream>
using namespace std;

class example{
    private:
        double* ptr = new double(20.5);
    public:
        example(){*ptr = 0;}
        example(double d){*ptr = d;}
        // example(example& ex){*ptr = *ex.ptr;} // shallow copy constructor
        example(example& ex){double* ptr = new double(20.5);} // deep copy constructor


        double get_data(){return *ptr;}
        void set_data(double d){*ptr = d;}

        // concept behind inline function is to exist this function machine code is along with the main function machine code to execute faster
        // if declare and define in class itself, it is inline function
        // if declared in class and defines outside class is non-inline functions.
        void display(){cout<<"Data: "<<get_data()<<endl;}

        // to make a non-inline function also an inline, add inline keyword infront of a function.
        inline ~example();
};

example::~example(){
    cout<<"example object destructed"<<endl;
}

int main(){

    example E1(42);
    example* E2;
    E2 = &E1;
    cout<<E2->get_data()<<endl;

    example* E3;
    E3 = new example(E1); // Using deep copy constructor

    E3->display();

    delete E3;
    E3 = nullptr;

    return 0;
}