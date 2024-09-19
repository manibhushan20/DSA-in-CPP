#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int rno;
        float marks;


        //second method
    //   Student(string n, int r, float m){
    //  name=n;
    //  rno=r;
    //  marks=m;}

    //constuctor
          Student(string name, int rno, float marks){
              this->name=name;
               this->rno=rno;//arrow is used in c++ and dot is used in java
               (*this).marks=marks;//same
        }
};

void change1(Student &s){//by reference
    s.name="Mank";
}
void change2(Student* s){//by reference
   // s->name="Manki";
    (*s).name="Manki";
}

int main() {
    Student s("Manibhushan", 78,36);
    //first method
    // s.name="Raghav Garg";
    // s.rno=73;
    // s.marks=45;

    //    Student* s=new Student ("Rghav", 56,93.8);
    //    cout<<s->name<<endl;

    cout<<endl<<s.name<<endl;
    change1(s);
    cout<<s.name<<endl;
     change2(&s);
      cout<<s.name<<endl;
        Student* ptr=&s;
   //  (*ptr).name="Harsh"; // or
      ptr->name="Harsh";
    cout<<s.name<<endl;


}
