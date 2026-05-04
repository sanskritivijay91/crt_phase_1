# include <iostream>
using namespace std;
int main(){
    int age;
    cout<< "Enter you age:";
    cin>> age;
    if (age >= 100){
        cout<< "You are eligible to vote (senior citixen)" << endl;
    }
    else if (age >= 18 && age <= 99){
        cout << "You are eligible to vote (adult)" << endl;
    }
    else if ( age <=13 && age <=19){
        cout << "You are a teen" << endl;
    }
    else {
        cout << "You are  Child" << endl;
    }
    return 0; 
}