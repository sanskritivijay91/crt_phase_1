# include<iostream>
using namespace std;
int main(){
    int a, b , pqr;
    cout<< "Enter the value od a and b :";
    cin >> a >>b ;
    cout<< "\n Before swapping :" << endl;
    cout<< "a=" << a << " " << "b=" << b << endl;
    pqr = a;
    a =b;
    b = pqr;
    cout<< "\n After swapping:" << endl;
    cout<< "a=" << a << " " << "b=" << b << endl;
    return 0;
}    