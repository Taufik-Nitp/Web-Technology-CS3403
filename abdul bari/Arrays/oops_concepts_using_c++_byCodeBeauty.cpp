#include<iostream>      // best program to clear the concept of oops using c++.
using namespace std;
class abstraction1{                      /// This is abstraction
    virtual void AskForPromotion()=0;  // Here = 0 is for makig it pure means that in you must have to declare it body in the child  class.
};                                       //  it is also called do nothing function and pure virtual function.. generally usue in abstrac class.
class employee:abstraction1{
  private:   
    protected:
    int age;
    string name;
    string department;
    public:
    void setname(string naam){    //this is encpsulatiion. the process of keeping member variable as private and member function as public so that we can use that cariable only as member function. and this can be achived by using get() and sey() user defined member function.
       name=naam;
    }
    string getname(){
      return name;
    }

    void setdept(string Dept){
       department=Dept;
    }
    string getdept(){
      return department;
    }

    void setage(int umar){
       age=umar;
    }
    int  getage(){
      return age;
    }
    void introduce(){
      cout<<"name ="<<name<<endl;
      cout <<"age ="<<age<< endl;
      cout<<"department ="<<department<<endl;
    }
      employee(int Age,string Name, string Dept){  //this is constructor
      age=Age;
      name=Name;
      department=Dept;
    }
    void AskForPromotion(){   // logic behind absttraction which user dont need to know. He simply use askforpromotion to check promotion eligiblity.
      if(age>=30){
        cout<<name<<"  got promoted"<<endl;
      }
      else  cout<<name<< "  sorry No promotion!"<<endl;
    }
    virtual void work(){     // this is polymorphism  means a function in parent class(virual void) as well as in child class.when child has has it own logic of that function then child function willl execute.otherwise parent's function will execute.
      cout << name << "  checks mails and backlog calls"<<endl;
    }  // If we dont use virtual keyword in void woek then any base class pointer pointing to the derived object and we call work method then then base wala works method will invoked but if we use virtaul keyword then compiler udarstnd that if there is derived class object then work methid of the dierived class will be invoked.
};
class developer:public employee{    //This is inheritence in which class developer is derived/child class and employee is  base or parent class.Here public eepoyee is used to acess all the function and member of the employee class
  public:
  string FavProgLang;
    developer(int age,string name,string department ,string favprog):employee(age,name,department){
         FavProgLang=favprog;
    }
   void preparelession(){
     cout <<name<<"generally fix bug using "<<FavProgLang<<endl;
  }
 void work(){
    cout<<name<<" is a developer and he develops the application not here for checking mails"<<endl;
  }
};

class Teacher : public employee{    //This is inheritence in which class developer is derived/child class and employee is  base or parent class.Here public eepoyee is used to acess all the function and member of the employee class
  public:  // here public employee tells that all the public elments aromethods will also become public for the child class
  string   Subject;  //but if we use private employee then public element of the employee class will become the private member of the child class.
    Teacher(int age,string name,string department ,string subject):employee(age,name,department){
         Subject=subject;
    }
   void preparelession(){
     cout <<name<<" prepare lession of  "<<Subject<<endl;
  }
 void work(){
    cout<<name<<" is a brilliant maths teacher and he is not here for staff work"<<endl;
  }
};
int main(){
employee e1=employee(22,"taufik ali","cse");   // this is using the constructor  to assigning the values
  // e1.age=67;
  // e1.name="taufik ali ";
  // e1.department="cse";
  // cout<<e1.age<<endl<<e1.name;
  employee e2=employee(98,"tushif","marine");
  // e1.setname("taushif");
  // e1.setage(77);
  // e1.introduce();
  // cout<<e1.getname()<<endl;
  // e1.AskForPromotion();
  // e2.AskForPromotion();
 developer d1=developer(66,"sonamona","computer","python");
 d1.preparelession();
 d1.setname("taufik ali");
 d1.AskForPromotion();
 d1.preparelession();
 d1.work();

Teacher t1=Teacher(56,"srp sir","maths","mathematics");
t1.work();
t1.preparelession();
return 0;
}

