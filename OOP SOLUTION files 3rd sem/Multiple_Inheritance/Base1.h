
 #ifndef BASE1_H
 #define BASE1_H
#include"Base.h"
  // class Base1 definition
class Base1:virtual public Base
  {
  protected: // accessible to derived classes
	  int value; // inherited by derived class

  public:
	     Base1(int parameterValue): Base(20000)
		     {
			 std::cout << "\n  Base1(int parameterValue): Base(20000)\n";
		        value = parameterValue;
		     } // end Base1 constructor
	
	     int getData() const
		    {
		        return value;
		    } // end function getData
  }; // end class Base1

  #endif // BASE1_H
