# include<iostream>
using namespace std;
int globalvar = 200;
int main(){
    int userInput;
    double result;
    cout<<"Enter a number:";
    cin>> userInput;
    result = static_cast<double>(globalvar) / userInput;
    cout<< "result of"<< globalvar << "/" << userInput<< "="<< result<< endl;
    return 0;
}