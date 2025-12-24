#include <iostream>
using namespace std;

class rectangle{
    private:
        double length;
        double breadth;
    public:
        rectangle();
        rectangle(double L, double B);
        rectangle(rectangle& rect);

        double get_length();
        double get_breadth();

        void set_length(double L);
        void set_breadth(double B);

        double area_rectangle();
        double perimeter_rectangle();

        void is_square();

        void display();

        ~rectangle();
};

        rectangle::rectangle(){length = 1.0, breadth = 1.0;}
        rectangle::rectangle(double L, double B){if(L<0){cout<<"given length is lessthen zero, so making it default"; length = 1.0;}else{length = L;} if(B<0){cout<<"given breadth is less then zero, s making it default"; breadth = 1.0;}else{breadth = B;}}
        rectangle::rectangle(rectangle& rect){this->length = rect.length; this->breadth = rect.breadth;}

        double rectangle::get_length(){return length;}
        double rectangle::get_breadth(){return breadth;}

        void rectangle::set_length(double L){length = L;}
        void rectangle::set_breadth(double B){breadth = B;}

        double rectangle::area_rectangle(){return (length * breadth);}
        double rectangle::perimeter_rectangle(){return (2 * (length + breadth));}

        void rectangle::is_square(){if(length == breadth){cout<<"square"<<endl;}else{cout<<"not square"<<endl;}}

        void rectangle::display(){cout<<"length of rectangle: "<<get_length()<<endl; cout<<"breadth of rectangle: "<<get_breadth()<<endl; cout<<"area and perimeter of rectangle is: "<<area_rectangle()<<" "<<perimeter_rectangle()<<endl;}

        rectangle::~rectangle(){cout<<"rectangle object destructed";}

int main(){

    rectangle R1;
    R1.display();

    rectangle R2;
    R2.set_length(10);
    R2.set_breadth(8);
    R2.display();

    rectangle R3(R2);
    R3.display();

    return 0;
}