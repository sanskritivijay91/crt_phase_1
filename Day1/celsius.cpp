# include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    cout<< "Enter the temperature :";
    cin>> celsius;
     fahrenheit = (celsius * 9/5) +32;
     cout<< "The temperauture in fahrenheit is :"<< fahrenheit;
     return 0;
}