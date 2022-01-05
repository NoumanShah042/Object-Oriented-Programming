
  #ifndef DERIVED_H
  #define DERIVED_H
#include "Base1.h"
#include "Base2.h"



 

 
  class Derived : public Base1, public Base2
  {
  private:
	  double real; // derived class's private data
	     friend ostream &operator<<(ostream &, const Derived &);
 public:
	    Derived(int, char, double);
	    double getReal() const;

  }; // end class Derived

  #endif // DERIVED_H
