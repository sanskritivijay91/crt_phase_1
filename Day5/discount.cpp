# include <iostream>
using namespace std;
void applyDiscount (int &amount){
    amount = amount * 0.9;
}
int main(){
    int bill;
    cout << "Enter the total bill amount: ";
    cin >> bill;
    applyDiscount(bill);
    cout << "Total amount after discount: " << bill << endl;
    return 0;  
}