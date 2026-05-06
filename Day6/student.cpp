# include <iostream>
using namespace std;

class student {
    private:
    int registrationnumber = 101;  
    

    
    public:   
       string name;
      

       student (){
        name = "riya";
       }
       
       void show(){
        cout << "Name:" << name << endl;
        cout << "Default constructor is called" << endl;
       }
  
    };
  int main(){
    student s1;
     s1.show ();    
    return 0;   
  }
     