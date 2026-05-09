# include <iostream>
using namespace std;

  namespace Virat 
  {
    void show()
    {
        cout << "It is the part of RCB" << endl;
    }
}

    namespace Rohit 
    {
        void show()
        {
        cout << " It is member of H1"<< endl;  
    }   
  }
      
  

int main(){   
    Virat :: show();
    Rohit :: show();
    return 0;
}