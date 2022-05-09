#include<iostream>

using namespace std;

class Complex
{
  int a, b;
  public:
//creating constructor 
//>>>special member fn as class used to initialize the objects of its class.when ever an object is creted automaically invoked (called)
  Complex(void); //constructor declaration

  void printNumber()
  {
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
Complex ::Complex(void) //constructor initialized /defined >>>default constructors as it takes no parameter
{
  a = 40;
  b = 0;
}


int main()
{
  Complex  c1 ,c2,c3 ;//object created 
  c1.printNumber();
  c2.printNumber();
  c3.printNumber();

  return 0;
}