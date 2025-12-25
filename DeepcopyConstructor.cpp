#include <iostream>
using namespace std;

class example{
    private:
        double* ptr = new double(20.5);
    public:
        example(){*ptr = 0;}
        example(int d){*ptr = d;}
        // example(example& ex){*ptr = *ex.ptr;} // shallow copy constructor
        example(example& ex){double* ptr = new double(20.5);} // deep copy constructor


        int get_data(){return *ptr;}
        void set_data(int d){*ptr = d;}

        void display(){cout<<"Data: "<<get_data()<<endl;}

        ~example(){cout<<"example object destructed"<<endl;}
};

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