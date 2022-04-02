#include <iostream>

using namespace std;

int main()
{
    string phrase = "Konuralp Academy";
    cout << phrase << endl;
    cout << "\tHello" << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    phrase[0] = 'T' ;
    cout << phrase << endl;
    cout << phrase.find("Academy",0)<<endl;
    cout << phrase.substr(1,3)<<endl;
    string phrasesub= phrase.substr(9,3);
    cout << phrasesub << endl;
    return 0;
}