# include <iostream>
using namespace std;
int main(){
    int n1 ;
    cout<< "enter the value of n1:";
    cin>> n1;
    for( int i=1 ; i <= n1; i++){
        for (int j=1; j <= i; j++ ){
            cout<< "*";
        }
        cout<< endl;
    }

    return 0;
 }