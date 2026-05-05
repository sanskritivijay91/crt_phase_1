 # include  <iostream>
using namespace std;
int main(){
    int n ;
    cout << " enter the number :";
    cin >> n;
    bool isPrime = true;
    if ( n <= 1){
        isPrime = false;
    }
     for ( int i =2; i <= n; i++){
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
     