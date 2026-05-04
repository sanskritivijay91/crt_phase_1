# include<iostream>
using namespace std;
int main(){
    int a , b, c;
    cout<< "Enter the sides of triangle:";
    cin>> a >> b >> c;
    bool isEquilateral = (a==b) && (b==c);
    cout<< boolalpha ;
    cout<< " Triangle is equilateral:" << isEquilateral <<endl;
    return 0;     
}