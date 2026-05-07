# include <iostream>
using namespace std;

class students{
    public:
    string name;
    int rollnumber;
    int regnumber;
    string email;
    long long phno;
    int grade;

    students(string n ,int rollnumber, int r , string e, long long p , int g)
    {
        name = n;
        this->rollnumber = rollnumber;
        this->regnumber = r;  
        this->email = e;
        this->phno = p;
        this->grade = g;
    } 

    void show(){
        cout << "Name:" << name << endl;
        cout << "RollNumber: " << rollnumber << endl;
        cout << "RegNO: " <<regnumber << endl;
        cout << "Email: " << email << endl;
        cout << "Phone Number: " << phno << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main(){
    students s1 ("Ram", 1, 101, "ram101@gmail.com", 5467892235, 87);
    students s2 ("Riya" , 2, 102, "riya102@gmail.com", 3356876124, 75);
    students s3 ("roy", 3, 103, "roy103@gmail.com", 9866543287, 99);
    students s4 ("Ankita", 4 , 104, "ankita104@gmail.com", 7765349087, 75);
    s1.show();
    cout << endl;
    s2.show();
    cout << endl;
    s3.show();
    cout << endl;
    s4.show();   
    return 0;   
}