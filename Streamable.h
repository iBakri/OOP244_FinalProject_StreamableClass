// Final Project Milestone 2
// Streamable Class
// Streamable.h
// Date	2015/04/04
// Author	Mohammed Bakri
/////////////////////////////////////////////////////////////////

#ifndef __244__Streamable__
#define __244__Streamable__

#include <fstream>
#include <iomanip>
#include <iostream>

namespace oop244{
  class Streamable{
  public:
      
      // pure virutal methods:
      
      virtual std::fstream& store(std::fstream& file)const;
      
      //constant member function, does not modify owner and receives and returns references of std::fstream
      
      virtual std::fstream& load(std::fstream& file);
      
        //receives and returns references of std::fstream
        /*constant member function and returns a reference of std::ostream, display() receives two arguments;
          the first is a reference of std::ostream and teh second is a bool argument called linear.*/
      
      virtual std::ostream& display(std::ostream& ostr, bool linear)const=0;
      
      virtual std::istream& conInput(std::istream& istr)=0;    //returns and receives references of std::istream.
   
      // virutal destructor:
    
      virtual ~Streamable();
  };
  // Non-memenber operator overoad prototypes for cin and cout:

std::ostream& operator<<(std::ostream& ostr,const Streamable& S);
std::istream& operator>>(std::istream& istr, Streamable& S);

}
#endif
