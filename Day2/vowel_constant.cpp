# include <iostream>
using namespace std;
int main() {
    char ch;
    string result;
    cout<< "Enter a character:";
    cin>> ch;
    switch (ch){
        case 'a':
        result ="vowel";
        break;
        case 'e':
        result ="vowel";
        break;
        case 'i':
        result ="vowel";
        break;
        case 'o':
        result ="vowel";
        break;
        case 'u':
        result ="vowel";
        break;
        default : 
        result = "constant";
        break;   

}
  cout << ch<< " is a " << result << endl;
  return 0;
}  