# include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin >> age;

    if (age >=18){
        if (age>=100){
            cout<< "elgible to vote (sinoir citizen)";
        }
        else {
            cout << "Eligible to vote!";  
        }
    }
    else
    {
        if (age < 0)
        {
            cout << "Invalid age\n";
        }
        else
        {
            cout << "Not eligible to vote\n";
        }
    }

    return 0;   
}