#include "head.hpp"
#include <iostream>
#include <string>
void dailyExpLog()
{
    std::string details;
    int log_id=0,i=1;
    std::cout<<"  ** DAILY LOG **  \n";
    std::cout<<"-----------------"<<'\n';
    std::cout<<"Please enter expense details :\n";
    std::cout<<"( NOTE: Detalis must include date,expense source and total expense )\n";

    while(log_id == 0)
    {   
        std::cout<<i<<") ";
        std::cin.ignore(); // to avoid skipping input
        std::getline(std::cin,details);
        std::cout<<"\nEnter 1 to complete the log, 0 to continue logging.\t";
        std::cin>>log_id;
        i++;

    }
}
    
    
    
   


    

