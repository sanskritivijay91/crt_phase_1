# include <iostream>
using namespace std;
int main(){
    int  a, b, result;
    char op;
    cout<< "Enter the numbers:";
    cin>> a>> b;
     cout<<" Enter the operator (+, -, *, /):";
     cin>>op;
        switch (op){
            case '+':
            result= a+b;
            break; 
            case '-':
            result= a-b;
            break; 
            case '*':
            result= a*b;
            break; 
            case '/':
            result= a/b;
            break; 
            default:
            cout<< "Invalid operator!";
            return 1;
             
        }
    cout<< a << " " << op<< " " << b << " = " << result << endl;
    return 0;    
        
}