# include <iostream>
using namespace std;
int main(){
    int help;
    string result;
    cout<< "Enter the number for service to avail:";
    cin>> help;
    switch (help){
        case 1:
        result = "it is for customer support";
        break;
        case 2:
        result = "it is for billing";
        break;
        case 3:
        result = "it is for technical support";
        break;
        case 4:
        case 0:
        result = "it is for speaking to agent!";
        break;
        default:
        cout<< "Invalid number!" << endl;
        return 1;

    }
    cout << "you have selected " << help << " " << ":" << " " << result << endl;
    return 0;   
}          