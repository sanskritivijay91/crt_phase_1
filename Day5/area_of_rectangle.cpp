#include <iostream>
using namespace std;

// function to calculate area of rectangle
int areaRectangle(int length, int breadth) {
    int area = length * breadth;   
    return area;                   
}

int main() {
    int l, b;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    int area = areaRectangle(l, b);    // call function

    cout << "Area of rectangle = " << area << endl;

    return 0;
}