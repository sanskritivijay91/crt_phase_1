# include <iostream>
using namespace std;

 class College {
    public:
    string name;
    int age;
    void setname (string n){
        name = n;
    }
    void setage (int a){
        age = a;
    }
     
     
 };
   class Student : public College{
    public:
    int rollNo;
    string course;
    string email;
    void setrollNo (int r){
        rollNo = r;
    }
    void setcourse (string c){
        course = c;
    }
    void setemail (string e){
        email = e;
    }

    void show(){
        cout << "=== STUDENT ===" << endl;
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Roll No:" << rollNo << endl;
        cout << "Course:" << course << endl;
        cout << "Email:" << email << endl;
    }
   };

   class Teacher : public College{
    public:
    int empId;
    string department;
    int salary;
    void setempId (int e){
        empId = e;
    }
    void setdepartment (string d){
        department = d;
    }
    void setsalary (int s){
        salary = s;
    }
       virtual void identify() {
        cout << "I belong to TEACHER category (from College hierarchy)" << endl;
    }
    void show(){
           
        cout << "=== TEACHER ===" << endl;  
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Emp Id:" << empId << endl;
        cout << "Department:" << department << endl;
        cout << "Salary:" << salary << endl;\
        identify();  
    }
   };


int main(){
    Student s1;
    s1.setname("rohit");
    s1.setage(22);
    s1.setrollNo(101);
    s1.setcourse("BCA");
    s1.setemail("rohit101@gmail.com");
    s1.show();

    Teacher t1;
    t1.setname("prakash");   
    t1.setage(45);
    t1.setempId(1001);
    t1.setdepartment("Computer Science");
    t1.setsalary(50000);
    t1.show();
    return 0;
       
}