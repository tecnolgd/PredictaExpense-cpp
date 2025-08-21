#include "head.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

double dailyExpLog()
{
    std::vector <std::string> source;
    int log_id=0,i=1;
    std::vector <double> cost;
    double total_cost=0.0,expense;
    std::cout<<"  ** DAILY LOG **  \n";
    std::cout<<"-----------------"<<'\n';
    std::cout<<"Please enter expense details :\n";
    
    std::cout<<"( NOTE: Details must include date,expense source and individual expense )\n";

    while(log_id == 0)
    {   
        std::cout<<i<<") ";
        std::cin.ignore(); // to avoid skipping input
        std::cout<<"Enter source name : ";
        std::string temp;  //temporaray string to be later pushed to vector.
        std::getline(std::cin,temp);
        source.push_back(temp);
        std::cout<<"Enter cost/expense : ";
        std::cin>>expense;
        cost.push_back(expense);
        std::cout<<"\nEnter 1 to complete the log, 0 to continue logging.\t";
        std::cin>>log_id;
        i++;
    }
    
    std::ofstream file("expense_log.txt",std::ios::app);
    if(file.is_open()){
        for(int i=0;i<source.size();i++){
            file<<source[i]<<"--->"<<cost[i]<<std::endl;
        }
        file.close();
    } else{
        std::cout<<"File not writable\n";
    }
    
    for(int j=0;j<i;j++){
        total_cost+=cost[j];
    }
    return total_cost;
}
    
    
    
   


    

