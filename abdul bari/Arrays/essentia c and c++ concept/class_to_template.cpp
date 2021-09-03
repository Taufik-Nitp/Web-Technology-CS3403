#include <iostream>
using namespace std;
template<class T>
class arithmetic
{
private:
    T a=4.2;
    T b=23;

public:

    T add()
    {
        T c = a + b;
        return c;
    }
       T sub()
    {
        T m = a - b;
        return m;
    }
};
int main()
{
    arithmetic<float> s1;
 
    cout << (int)s1.add() << endl<< s1.sub();  //typecasting
         
}