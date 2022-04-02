#include <iostream>

using namespace std;

void sayHi(string name,int age)
{
    cout << "Hello "<<name<<" you are "<<age<<endl;
}
int main()
{
    sayHi("Esin",24);
    sayHi("Mike",60);
    sayHi("İlteber",25);
    return 0;
}