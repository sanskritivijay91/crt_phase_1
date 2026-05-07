# include <iostream>
using namespace std;
 class animal {
   public:
   string name;
   void setname (string n){
name = n;
   }
};
  class dog: public animal{
    public:
    string eats;
    void seteats( string e){
        eats = e;
    }
    void show(){ 
       cout << "Name:" << name << endl;
       cout << "Eats:" << eats << endl;
    }
  };
    class cat: public animal{
        public:
        string plays;
        void setplays (string p){
            plays = p;
        }
        void show(){
            cout << "Name:" << name << endl;
            cout << "Plays:" << plays << endl;
        }
    };
    int main(){
        string e;
        cin >> e;
        dog d1;
        d1.setname ("roy");
        d1.seteats(e);   
        d1.show();

        string p;  
        cin >> p;
        cat c1;
        c1.setname("tom");
        c1.setplays(p);
        c1.show();
        return 0;  
    }
   