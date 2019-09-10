// Valeria Corona
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    string adj1= " ";
    string verb= " ";
    string adj2= " ";
    string noun= " ";
    int number= ' ';
    string adj3= " ";
    cout << "Enter an adjective: ";
    cin  >> adj1;
    cout << "Enter a verb: ";
    cin  >> verb;
    cout << "Enter another adjective: ";
    cin  >> adj2;
    cout << "Enter a noun: ";
    cin  >> noun;
    cout << "Enter a number: ";
    cin  >> number;
    cout << "Enter another adjective: ";
    cin  >> adj3;

    cout << "Your Mad Libs Story:" <<endl;
    cout << "It was a " << adj1 << " September morning. I " << verb << "\n"
         << "up to the " << adj2 << " smell of " << noun << " in the "
         << "kitchen.\nThere were " << number << " " << adj3 << " strangers \n"
         << "sitting at the table." <<endl;

    return 0;
}
