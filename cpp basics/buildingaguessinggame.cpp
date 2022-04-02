#include <iostream>
using namespace std;
int main()
{
    int secretnum=7;
    int guess;

    while (secretnum != guess)
    {
        cout<< "Enter guess : ";
        cin >> guess;

    }
    
    cout << "You win Fella!";
    return 0;
}