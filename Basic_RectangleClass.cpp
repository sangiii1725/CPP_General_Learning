#include <iostream>
using namespace std;

class rectangle{
    private:
        double length;
        double breadth;
    public:
        rectangle(){length = 1.0, breadth = 1.0;}
        rectangle(double L, double B){if(L<0){cout<<"given length is lessthen zero, so making it default"; length = 1.0;}else{length = L;} if(B<0){cout<<"given breadth is less then zero, s making it default"; breadth = 1.0;}else{breadth = B;}}
        rectangle(rectangle& rect){this->length = rect.length; this->breadth = rect.breadth;}

        double get_length(){return length;}
        double get_breadth(){return breadth;}

        void set_length(double L){length = L;}
        void set_breadth(double B){breadth = B;}

        double area_rectangle(){return (length * breadth);}
        double perimeter_rectangle(){return (2 * (length + breadth));}

        void is_square(){if(length == breadth){cout<<"square"<<endl;}else{cout<<"not square"<<endl;}}

        void display(){cout<<"length of rectangle: "<<get_length()<<endl; cout<<"breadth of rectangle: "<<get_breadth()<<endl; cout<<"area and perimeter of rectangle is: "<<area_rectangle()<<" "<<perimeter_rectangle()<<endl;}

        ~rectangle(){cout<<"rectangle object destructed";}
};

int main(){
    return 0;
}