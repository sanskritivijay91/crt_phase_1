# include <iostream>
using namespace std;
   // Grandparent class (base class of cricketer class)
class player{
    public:  
    string name;
    int age;

    void setname (string n ){
        name = n;
    }
};
  // parent class or base class of IndianCricketer
class cricketers : public player{
    public:
    int runs;
    void setruns (int r){
        runs = r;
    }
};
   // child
class IndianCricketers : public cricketers{
    public:         
    string state;
    void setstate (string s){
        state = s;
    }
       void show(){
        cout << "Name:" << name<< endl;
        cout << "Runs:" << runs<< endl;
        cout<< "State:"<< state << endl;
       }
};  
   
int main(){ 
    int r;
    cin >> r;
    string s;
    cin >> s;
    IndianCricketers c1;  
    c1.setname("virat");  
    c1.setruns(r);     
    c1.setstate(s);     
    c1.show();  
}