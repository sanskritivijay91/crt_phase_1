#include <iostream>
using namespace std;
int main() {
  int n ;
  do{
  cout<< "enter the n(enter 0 or negative number to stop):";
  cin>> n;
 
  if (n>0){
      cout<<"you entered" << n << endl;
  }
  }
  while(n>=0);
 
  cout<<"loop ended!";  
 
 
    return 0;
}