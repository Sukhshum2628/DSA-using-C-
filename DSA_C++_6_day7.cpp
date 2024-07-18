#include<iostream>
#include<string>
using namespace std;
class Teacher
{
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept){
        dept=newDept;

    }
    //getter and setter 
    void setSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
    Teacher(){
        cout<<"Constructor is calling"<<endl;
    }
    Teacher(string name,string dept,string subject,double salary){
       this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }
    void getInfo(){
        cout<<"Teacher name "<<name<<endl;
        cout<<"Teacher subject "<<subject<<endl;
        cout<<"Teacher dept "<<dept<<endl;
        cout<<"Teacher salary "<<salary<<endl; 
    }
};
int main()
{
   /* Teacher t1;
    t1.name="sarang";
    t1.subject="Math";
    t1.changeDept("CSE");
    t1.setSalary(4500);
    cout<<t1.getSalary();
    cout<<t1.name<<endl;
    */

    Teacher t1("sumedh","CSE","C++",1500000);
    t1.getInfo();
    return 0;
}