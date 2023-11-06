#include<iostream>
using namespace std;
class Animal
{
    public:
        void eat()
        {
            cout<<"Eating food : ) "<<endl;
        }
};
class Cow : public Animal
{
    public:
        void eat()
        {
            cout<<"Cow eat a Grasse : ) ";
        }
};
int main()
{
    cout<<"Name. Lila Neev"<<endl;
	cout<<"Enrollment no. 220130318021";
    Cow c1=Cow();
    c1.eat();
}
