# include <iostream>
using namespace std;

long factorial ( int n){
    if ( n==1 )
    {
        return 1;
    }
    
       int ans = n * factorial(n-1);    
    return ans ;
}



int main()
{
    int n;
    cin>>n;
    cout << "Fctorial is:" << factorial(n) << endl;
    return 0;  
}