#include <iostream>
using namespace std;

int main(){

    int day;
    string result;
    cout<< "Enter the day number:";
    cin >> day;

    switch (day)
    {
    case 1:
        result = "Monday";
        break;
    case 2:
        result = "Tuesday";
        break;
    case 3:
        result = "Wednesday";
        break;
    case 4:
        result = "Thursday";
        break;
    case 5:
        result = "Friday";
        break;
    case 6:
        result = "Saturday";
        break;
    case 7:
        result = "Sunday";
        break;
    default:
        result = "Invalid day";
    }  
   cout << "You selected:" << day << endl;
   cout << "Day name:" << result << endl;
    return 0;  
}