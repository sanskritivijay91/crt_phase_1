# include <iostream>
using namespace std;
  class Car {
    private:
    int speed;\

    public:
    Car() { 
        
        speed = 120; 
      }   

    void showspeed () const{
       // speed = 150;
      cout << "Spped is:" << speed << endl;
    }
  };




int main(){
Car c;
c.showspeed();  
     return 0;
}