//This code reads budget from from the user and writes it to a text file.
#include "head.hpp"
#include <iostream>
#include <fstream>

double askBudget()
{
    double budget=1.0;
    int confirm;
    std::cout<<"***********\n";
    std::cout<<"$   BUDGET SETTINGS   $  \n";
    std::cout<<"-----------------"<<'\n';

    do{                                           //loop for budget entry and change as per user demands
        std::cout<<"Please enter your  monthly budget :"<<'\n';
        std::cin>>budget;
        while(budget<=0.0){
            std::cout<<"Invalid budget.Try again !\n";
            std::cin>>budget; 
        }
        std::cout<<"\t--- enter 1 to confirm, 0 to change the budget ---\n";
        std::cin>>confirm;
    }
    while(confirm !=1);

    std::ofstream file("expense_log.txt"); //open file 
    file<<"MONTHLY BUDGET: "<<budget<<std::endl; // writing budget to the file.
    std::cout<<"-----------------"<<'\n';
    return budget;
}