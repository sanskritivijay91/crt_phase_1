# include <iostream>
using namespace std;
int main(){
     const string userinput = "sanskriti";
     const string pass = "2345";
      string username, password;
      cout<< "enter your username:";
      cin >> username;
      cout<< "Enter your password:";
      cin >> password;
        if ( username == userinput && password == pass){
            cout<< "Login Successful!"  << endl;
               }
               else  {
                cout<< "Login Failed!" << endl;
               }  
    return 0;
}       