# include <iostream>
using namespace std;
int main(){
    int a, b, c;
    int total;
    int average;
    cout<< "Enter the numbers:";
    cin>> a>> b>> c;
    total = a+b+c;
    average =total/3;
    cout<< "The sum of numbers are:" << total<< endl;
    cout<< "The average of numbers are:" << average << endl;
    return 0;
} 