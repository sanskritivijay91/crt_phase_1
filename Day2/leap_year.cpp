# include <iostream>
using namespace std;
int main(){
    int year;
    cout<< "enter the year:";
    cin>> year;
    if (year % 4 ==0 && year % 400 ==0 ){
        cout << "Year is a leap year" << endl;
    }
    else if( year % 100 == 0) {
        cout << "Year is not a leap year" << endl;
    }
    else {
        cout << "Not a leap year a normal year " << endl;
    }
    return 0;
}    