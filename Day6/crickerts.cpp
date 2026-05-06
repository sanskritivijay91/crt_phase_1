# include <iostream>
using namespace std;

class cricketers{
    public: 
    string name;
    int run;
    double avg;

    cricketers (string n , int r , double avg)
    {
        name = n;
        run = r;
        this->avg = avg;

    }


void show(){
    cout << "Name:" << name << endl;
    cout << "Run:" << run << endl;
    cout << "Average:" << avg << endl;
}
};

int main(){
     cricketers c1("Sachin", 10000, 48.6);
     c1.show();
     return 0;
}
  