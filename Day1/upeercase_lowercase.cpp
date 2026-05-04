# include <iostream>
using namespace std;
int main(){
    string input;
    cout<< "Enter the string:";
    cin>> input;
     if (  isupper(input[0])){
        cout<< "The sting is uppercase:" << input << endl;
     }
     else {
        cout<< "The string is lowercase:" << input<< endl;
     }
    return 0;
}   