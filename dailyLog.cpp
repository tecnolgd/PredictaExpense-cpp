#include "head.hpp"
#include <iostream>
#include <string>
#include <vector>

double dailyExpLog()
{
    std::string source;
    int log_id=0,i=1;
    std::vector <double> cost;
    double total_cost=0.0;
    std::cout<<"  ** DAILY LOG **  \n";
    std::cout<<"-----------------"<<'\n';
    std::cout<<"Please enter expense details :\n";
    
    std::cout<<"( NOTE: Details must include date,expense source and individual expense )\n";

    while(log_id == 0)
    {   
        std::cout<<i<<") ";
        std::cin.ignore(); // to avoid skipping input
        std::cout<<"Enter source name : ";
        std::getline(std::cin,source);
        std::cout<<"Enter cost/expense : ";
        std::cin>>cost[i-1];
        std::cout<<"\nEnter 1 to complete the log, 0 to continue logging.\t";
        std::cin>>log_id;
        i++;
    }
    for(int j=0;j<i;j++){
         total_cost +=cost[j];
    }
    return total_cost; 
}
    
    
    
   


    

