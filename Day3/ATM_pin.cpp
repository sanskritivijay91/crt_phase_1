#include <iostream>
using namespace std;
int main() {
    int pin , attempts = 0;
    do{
    cout << "Enter the pin:";
    cin >> pin;
    attempts++;

    if ( pin ==1234){
        cout << "Access granted!" << endl;
    }
    else if ( attempts < 3){
        cout << "Try again!" << endl;
    }
    else {
        cout << "Card blocked" << endl;
    }
       
     }  
     while (attempts <3);  

    return 0;
}