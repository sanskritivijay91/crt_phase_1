# include <iostream>
# include <string>
 
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "Sanskriti";
    cout << str1 << " " << str2<< endl;

    // methods
    // length
    int n = str1.length();
    cout << "The length of string is:" << n << endl;

    // append
     cout  << "After appending the string is:" << str1.append("How are you!") << endl;
     
    // empty
    cout << "is string empty:" << str1.empty() << endl;

    // concatenation
    cout << "After concatenation the string is:" << str1+"heyyyy!" << endl;
    cout << "After concatenation the string 2 is:" << str1 << endl; 

    // push-back
    str2.push_back('v');
    cout << "After psuh-back method:" << str2 << endl;

    // pop-back
    str2.pop_back( );
    cout << "After pop_back method: "<< str2 << endl;

    // find
    int index = str1.find("ell");
    cout << "Index of 'ell' im str1:"<< index << endl;

    // swap
    str1.swap(str2);
    cout << "After swapping str1 and str2 is:" << endl;
    cout << "str1:" << str1 << endl;
    cout << "str2:" << str2 << endl;

    // substr
    string substr= str2.substr(3,5);
    cout << "substring of str from index 3 with length of 5 is:" << substr << endl;

    // getline
    string str3;
    getline(cin, str3);
    cout << "You enetred:" << str3 << endl;

    return 0;  
}    