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

    rectangle R1;
    R1.set_length(10);
    R1.set_breadth(8);
    rectangle* R2;
    R2 = &R1;
    cout<<R2->area_rectangle()<<endl;

    rectangle* R3;
    R3 = new rectangle;
    R3->set_length(20);
    R3->set_breadth(18);

    R3->display();
    // R3.display();   // this notation won't works for pointer to an object.

    delete R3;
    R3 = nullptr;

    return 0;
}