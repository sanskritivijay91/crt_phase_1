# include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<< "Enter the numbers:";
    cin>> a>> b;
    int max = (a>b) ? a:b;
    cout << "the greater number is :" << max << endl;
    return 0;  
}