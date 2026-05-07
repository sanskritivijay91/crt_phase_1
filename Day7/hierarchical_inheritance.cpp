# include <iostream>
using namespace std;
   // parent class
class player{
    public:
    string name;
    int age;

    void setname (string n ){
        name = n;
    }    
};
     // child class 1
class cricketers : public player{
    public:
    int runs;
    void setruns (int r){
        runs = r;
    }
    void show(){
        cout << "Name:" << name<< endl;    
        cout<< "Runs:"<< runs << endl;
       }
};
   // child class 2
class Footballer :public player{  
    public:         
    int goals;
    void setgoals (int g){
        goals = g;
    }
       void show(){
        cout << "Name:" << name<< endl;    
        cout<< "Goals:"<< goals << endl;
       }
};  
      
int main(){   
    cricketers c1; 
    c1.setname("rohit");
     c1.setruns(1200);
    c1.show();   

    Footballer f1; 
    f1.setname("sunil");
    f1.setgoals(110);
    f1.show();
    return 0;
}          