# include <iostream>
 using namespace std;
 int main(){
    int n ; 
    cout << " enter the numbre :";
    cin >> n;
    long long a =0 , b=1, c;
    for ( int i = 1; i <= n; i++){
        cout << a << " ";
        c = a+b;
        a = b;
        b = c;
    }
    return 0;  
 }