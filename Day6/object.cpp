# include <iostream>
using namespace std;

class student {
    public: 
       string name;
       int Rollnumber;
};   
  int main(){
    student s1;
    s1.name = "ram";
    s1.Rollnumber = 23;
    cout << s1.name << " " << s1.Rollnumber << endl;
    return 0;
  }
  