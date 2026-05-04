#include <iostream>
using namespace std;

int main()
{
    int balance = 5000;
    int limit = 500;
    int amount;
    cout << "Enter the amoount to withdrawl:";
    cin >> amount;

    if (amount % 100 != 0){
        cout << "Invalid amount";
    }
    else if (amount > limit){  
        cout << "Exceeds limit";
    }
    else if (amount > balance){
        cout << "Insufficient balance";
    }
    else
    {
        balance -= amount;
        cout << "Remaining: " << balance << endl;
    }

    return 0;  
}  