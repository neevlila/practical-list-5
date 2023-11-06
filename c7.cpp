#include<iostream>
using namespace std;
class Animal
{
        public:
            virtual void eat()
            {
                cout<<"This is Animal class : ) "<<endl;
            }
            
            void show()
            {
                cout<<"This is base class  :) "<<endl;
            }
};
class Cow : public Animal
{
        public:
            void eat()
            {
                cout<<"This is Cow : ) "<<endl;
            }
            void show()
            {
                cout<<"This is Sub class : ) "<<endl;
            }
};

int main()
{
    cout<<"Name. Lila Neev "<<endl;
	  cout<<"Enrollment no. 220130318021";
    
    Animal *a;
    Cow *c1 = new Cow();
    c1->eat();
    c1->show();
}
