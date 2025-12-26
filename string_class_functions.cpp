#include <string>
#include <iostream>
using namespace std;

int main() {
    
    string str = "sangeeth kumar";
    string str2 = "boda";
    
    // cin>>str;
    // getline(cin, str);
    cout<<str.length()<<endl;        // returns int
    cout<<str.size()<<endl;          // return int
    cout<<str.capacity()<<endl;      // returns int
    str.resize(25);                  // not returns anything
    cout<<str.size()<<endl;          
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;      // returns long int
    // str.clear();
    cout<<str.empty()<<endl;         // returns bool(weather string is empty or not)
    cout<<str<<endl;
    cout<<str.append(" boda")<<endl; // returns string/address of string
    std::cout << str.insert(0, "S") << std::endl;  // returns string/address of string
    std::cout << str.insert(0, "Sangeeth Kumar Boda", 5) << std::endl;  // returns string/address of string, here 5 letters will be taken from provided string 
    std::cout << str.replace(3, 2, "SSSSS") << std::endl;   // returns string/address of string
    // std::cout << str.erase() << std::endl;  // not returns anything
    str.push_back('B');              // not returns anything, append with char only
    cout<<"str is: "<<str<<endl;
    // std::cout << str << std::endl;
    // char poped_char;
    // poped_char = str.pop_back();
    str.pop_back();                  // not returns anything, pops char only at end
    // std::cout << poped_char << std::endl;
    str.swap(str2);                  // not returns anything
    std::cout << "after swapping: " << str << " " << str2 << std::endl;
    
    // str.copy(char dest[], str.length());
    // for(int i=0; dest[i]!='\0'; i++){
    //     std::cout << dest[i] << std::endl;
    // }

    str = "Hello, World!";
    char buffer[5];
    
    // size_t copied = str.copy(buffer, 5, 7);  // Copy 5 chars from pos 7: "World"
    size_t copied = str.copy(buffer, str.length());  // copy complete string with knowing string length
    buffer[copied] = '\0';  // Null terminate
    
    std::cout << "Copied: " << buffer << '\n';  // World
    std::cout << "Chars copied: " << copied << '\n';  // 5    
    
    std::cout << str.at(7) << std::endl;   // returns a char at given position
    std::cout << str.front() << std::endl;
    std::cout << str.back() << std::endl;
    
    string::iterator it;                   // string iterators.   // this can iterate reverse with rbegin(), rend() and constant iterators like cbegin(), cend()
    for(it = str.begin(); it != str.end(); it++)
    {
        std::cout << *it;
    }
    cout<<endl;
    
    // cout<<"str is: "<<str<<endl; 
    
    
    
    // cout<<str<<endl;
    // putline(cout, str);

    return 0;
}
