# include <iostream>
using namespace std;

int power(int x)
{
     if ( x == 0 ) return false;
     if ( x == 1) return true;
     return (x % 2 == 0) && (x / 2);   
}



int main()
{
    int n;
    cin >> n;
    cout << "power of digits " << n << "is:" << power(n) << endl;   
    return 0;
} 