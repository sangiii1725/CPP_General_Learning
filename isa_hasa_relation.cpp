#include <iostream>
using namespace std;

class rectangle{
    private:
        double length;
        double breadth;
    public:
        rectangle(){length = 1.0, breadth = 1.0; cout<<"rectangle object constructed with default values"<<endl;}
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

        ~rectangle(){cout<<"rectangle object destructed"<<endl;}
};

// this below example, cuboid is a rectangle
class cuboid : public rectangle{
    private:
        double height;
    public:
        cuboid(){height = 1.0; cout<<"cuboid object constructed with default values"<<endl;}
        cuboid(double H){if(H<0){cout<<"given height is lessthen zero, so making it default"<<endl;}else{height = H;}}
        cuboid(cuboid& cub){this->height = cub.height;}

        double get_height(){return height;}

        void set_height(double H){height = H;}

        double are_cuboid(){return ( 2 * ((get_length() * get_breadth()) + (get_length() * get_height()) + (get_breadth() * get_height())));}

        void is_perfect_cuboid(){
            if((get_length() == get_breadth()) && (get_length() == get_height())){
                cout<<"perfect cuboid"<<endl;
            }else{
                cout<<"not perfect cuboid"<<endl;
            }
        }

        void display(){
            cout<<"lenght, breadth and height of cuboid is: "<<get_length()<<" "<<get_breadth()<<" "<<get_height()<<endl;
            cout<<"area of cuboid is: "<<are_cuboid()<<endl;
        }

        ~cuboid(){cout<<"cuboid object destructed"<<endl;}
};

// this below example, table has a rectangle measurments for top and legs.
class table{
    private:
        rectangle top_size;
        int legs_count;
        rectangle legs_size;
};

int main(){

    cuboid C;

    table T;

    return 0;
}