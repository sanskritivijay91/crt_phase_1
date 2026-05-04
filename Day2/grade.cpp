# include <iostream>
using namespace std;
int main(){
    int grade;
    cout << "Enter your grade:";
    cin >> grade;

    if (grade >=90){
        cout << "Your grade is A" << endl;
    }
    else if (grade >=80 && grade <= 89){
        cout << "Your grade is B" << endl;
    }
    else if ( grade >= 70 && grade <=79){
        cout << "your grade is C" << endl;
    }
    else if (grade >= 60 && grade <= 69){
        cout<< "Your grade is D" << endl;
    }
    else {
        cout << "You are fail" << endl;
    }
    return 0;
}