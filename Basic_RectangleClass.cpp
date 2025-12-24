#include <iostream>
using namespace std;

class rectangle{
    private:
        double length;
        double breadth;
    public:
        rectangle(){length = 1.0, breadth = 1.0;}
        rectangle(double L, double B){if(L<0){cout<<"given length is lessthen zero, so making it default"; length = 1.0;}else{length = L;} if(B<0){cout<<"given breadth is less then zero, s making it default"; breadth = 1.0;}else{breadth = B;}}
        rectangle(rectangle& rect){this->length = rect.length; this->breadth = rect.breadth}

        
}

int main(){
    return 0;
}