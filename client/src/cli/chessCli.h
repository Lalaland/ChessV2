#ifndef CHESS_CLI_H_INCLUDED
#define CHESS_CLI_H_INCLUDED

#include <boost/utility.hpp>
#include <iostream>


class t_chessCli : boost::noncopyable
{
public:
   t_chessCli()
   {}
   
   ~t_chessCli()
   {
      std::cout<<"I can only hope..."<<std::endl;  
   }

private:
};

#endif
