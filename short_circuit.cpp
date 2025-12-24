#include <iostream>
using namespace std;

int main(){

    double a = 10, b = 11, c = 8;
    int count = 0;

    if((a>b) && (b<c)){   //here first condition fails so second condition is not checked
        count++;
    }

    a = 15;

    if((a>b) || (b<c)){
        count++;
    }
    cout<<count<<endl;

    return 0;
}