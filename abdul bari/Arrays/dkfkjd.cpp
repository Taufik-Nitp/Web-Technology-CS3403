#include<iostream>
using namespace std;
union student
{
    int age;
    float due;
    char section;
};

 int main(){
// int a=5;
// int *b=&a;
// int *c=b;
// int **d=&b;
// cout <<a<<endl<<b<<endl<<b<<*b<<c<<endl<<*c<<endl<<d<<endl<<*d<<endl<<**d<<endl;


//-----------------------_________________________----------------------____________------------------------
// int a[10]={2,3,4,5,6,7,8,9,10,11};
// int *b=a;
// for(int i=0;i<10;i+=2){
//     cout<<*b<<endl;
//     b++;
// }
union student s1;
s1.age=18888;
s1.section='c';
s1.due=399.23;

cout<< s1.age<<endl<<s1.due<<endl<<s1.section<<endl;
return 0;
 }