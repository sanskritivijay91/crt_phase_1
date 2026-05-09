# include <iostream>
using namespace std;
 class Employer{
    public:
      static int reg_no;
      Employer(){
        reg_no++;
      }
    
     static void show(){
        cout << "Employer number is :" << reg_no << endl;
    }
 };  
   int Employer :: reg_no =101;  
int main(){
     
    Employer E1;
    Employer E2;
    Employer E3;
    Employer E4;
    Employer  :: show();   


    return 0;
}