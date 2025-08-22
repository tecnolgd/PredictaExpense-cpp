#include "head.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

double dailyExpLog(int &session_counter)
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
        file<<"___________________________\n";
        for(int i=0;i<source.size();i++){
            file<<i+1<<") "<<source[i]<<"---> "<<cost[i]<<std::endl; //reding input to the file.
        }
        //file<<"_ _ _ _ _ _ _________ _ _ _ _ _ _ \n";
        session_counter ++;
        if(session_counter==8){
            session_counter=0;
        }
        file.close();
    } else{
        std::cout<<"File not writable !\n";
    }
    for(int i=0;i<cost.size();i++){
        total_cost+=cost[i];
    }
    return total_cost;
}
    
    
    
   


    

