#include <iostream>
using namespace std;
int main()
{
    /*int age;*/
    string name;
    cout << "Enter your age: ";
    /*cin >> age ;*/
    getline(cin,name);
    /*cout << "You are " << age << " years old"<< endl;*/
    cout << "Your name is " << name ;

    return 0;
}