# include<iostream>
using namespace std;
 class area{
    public:
    int length;
    int width;
    area (){
        length = 0;
        width = 0;
    }

    area( int length , int w){
        this->length = length; 
        width = w;

    }
    area (int s){
        length = s;
        width = s;
    }


    void show(){
        cout << "Area is: " << length * width<< endl;
    }
 };


 int main(){
     area a1;
     a1.show();
     area a2(5,10);
     a2.show();
     area a3(7);
     a3.show();     


     return 0; 
 }