#include <iostream>
using namespace std;

int main(){
    float number1, number2;
    cout << "Insert a number into the variable: " << endl;
    cin >> number1;

    cout << "Insert another: " << endl;
    cin >> number2;

    cout << "Here are the basic operation with the arithimetical operators:" << endl;
    cout << "+: " << number1 + number2 << endl;
    cout << "-: " << number1 - number2 << endl;
    cout << "*: " << number1 * number2 << endl;
    cout << "/: " << number1 / number2 << endl;
    system("PAUSE");    
    return 0;
};