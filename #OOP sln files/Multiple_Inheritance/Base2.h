// Fig. 24.8: Base2.h
  // Definition of class Base2
 #ifndef BASE2_H
  #define BASE2_H
#include"Base.h"
  // class Base2 definition
class Base2 :virtual public Base
{
protected:      // accessible to derived classes
	char letter; // inherited by derived class

public:
	Base2(char characterData): Base(100000)
	{
		std::cout << "\n  Base2(char characterData): Base(100000)\n";
		letter = characterData;
	} // end Base2 constructor

	char getData() const
	{
		return letter;
	} // end function getData protected:
	  
}; // end class Base2

  #endif // BASE2_H
