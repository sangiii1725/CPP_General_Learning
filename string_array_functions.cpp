#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char str1[] = "Hello";
    char temp[15];
    strcpy(temp, str1);
    char str2[] = {'w', 'o', 'r', 'l', 'd', '\0'};
    char str3[] = {'s', 'a', 'n', 'g', 'i'};
    char str7[] = "Hello";
    char str8[] = "12345678910";
    char str9[] = "x=5;y=10,z=15";
    const char* str10 = "world";

    char str4[] = "hi, how are you...when you will come here";
    // char str5[15];
    // cout<<"enter str5: "<<endl;
    // cin>>str5;
    // // cin.getline(str5, 15);
    // cout<<"str5 is: "<<str5<<endl;
    
    // char str6[15];
    // cout<<"enter str6: "<<endl;
    // cin.ignore();
    // cin.getline(str6, 15);
    // // getline(cin, str6);
    // cout<<"str6 is: "<<str6<<endl;

    cout<<"length of str4 is: "<<strlen(str4)<<endl;

    cout<<"string in temp before cat is: "<<temp<<endl;
    cout<<"concatinated strings are: "<<strcat(temp, str2)<<endl;
    // cout<<"concatinated strings are: "<<strncat(temp, str2, 3)<<endl;
    // cout<<"concatinated strings are: "<<strncat(temp, str10, 3)<<endl;
    cout<<"string in temp after cat is: "<<temp<<endl;

    strcpy(temp, str1);
    cout<<"string in temp before copy is: "<<temp<<endl;
    cout<<"copied strings are: "<<strcpy(temp, str2)<<endl;
    // cout<<"copied strings are: "<<strncpy(temp, str2, 2)<<endl;
    cout<<"string in temp after copy is: "<<temp<<endl;

    cout<<"sub string is from: "<<strstr(str4, "are")<<endl;
    cout<<"sub string is from: "<<strchr(str4, 'i')<<endl;
    cout<<"sub string is from: "<<strrchr(str4, 'i')<<endl;

    cout<<"string in str1 is: "<<str1<<endl;
    cout<<"string in str7 is: "<<str7<<endl;
    cout<<"comapared strings are: "<<strcmp(str1, str7)<<endl;
    
    long int x = strtol(str8, NULL, 10);
    cout<<"strtol are: "<<x<<endl;
    
    float y = strtof(str8, NULL);
    cout<<"strtof are: "<<y<<endl;    
    
    // cout<<"key value pair of str9 are: "<<strtok(str9,"=;")<<endl;

    char str[] = "apple,banana;cherry,date";
    char* token = strtok(str, ";");
    
    while (token != nullptr) {
        std::cout << token << '\n';  // apple, banana, cherry, date
        token = strtok(nullptr, ";");
    }

    return 0;
}