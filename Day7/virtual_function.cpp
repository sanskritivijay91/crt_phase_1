# include <iostream>
using namespace std;
class Player {
    public:
    virtual void show() 
    {
        cout << "Player class show function" << endl;
    }
};
  class cricketers: public Player{
    public:
    int a;
    void show(){
      cout << "Cricketers class show function" << endl;
    }
  };  
   
  int main(){  
     cricketers c1;
     c1.show();
     return 0;
}