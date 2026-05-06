# include <iostream>
using namespace std;

class student {
    public: 
       string name;
       int Rollnumber;

       void display (){
        cout << "name:" << name  << " " << "Rollnumber:" << Rollnumber<< endl;
       }
};   
  int main(){
    student s1;
    s1.name = "ram";
    s1.Rollnumber = 23;
    s1.display();
    return 0;
  }