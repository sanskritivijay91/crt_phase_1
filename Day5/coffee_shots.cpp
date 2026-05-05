 #include <iostream>
 using namespace std;  

 int coffee (int a){
     return a*30;  
 }
 int main (){
    int a;
    cout << "Enter number of coffee shots: ";
    cin >> a;

    cout << "Total coffee volume is: " << coffee(a) << " ml" << endl;
    return 0;   
 }