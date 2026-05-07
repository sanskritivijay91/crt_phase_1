 # include <iostream>
using namespace std;
    // parent 1
 class player{
    public:
    string name;
    int age;

    void setname (string n ){
        name = n;
    }
};    
     // parent 2
class cricketers{
    public:
    int runs;
    void setruns (int r){
        runs = r;
    }
};
   // child class with multiple parent (1,2)
class IndianCricketers : public cricketers, public player{
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