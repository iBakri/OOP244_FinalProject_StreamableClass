// Final Project Milestone 2
// Streamable Class
// Streamable.cpp
// Date	2015/04/04
// Author	Mohammed Bakri
/////////////////////////////////////////////////////////////////

#include "Streamable.h"

namespace oop244{
    
  // destructor
    
Streamable::~Streamable(){
    //Empty Destructor
}
    
// Non-memenber operator oveload implementation for cin and cout
    
std::ostream& operator<<(std::ostream& ostr,const Streamable& S){
    
    return S.display(ostr, true);
  }
    
std::istream& operator>>(std::istream& istr, Streamable& S){
    return S.conInput(istr);
  }


}
