#include <iostream>
#include <string>
#include "head.hpp"


void askBudget();
void dailyExpLog();
void saveToFile();
void weekLog();
void dispHistory();
void insights();
void menu();
int main(){
    int choice;
    menu();
    std::cout<<"Enter your choice :";
    std::cin>>choice;

    do{
    switch(choice){
        case 1:void askBudget();
            break;
        case 2: dailyExpLog();
            break;
        case 3:saveToFile();
            break;
        case 4:weekLog();
            break;
        case 5:dispHistory();
            break;
        case 6: insights();
            break;
        default:
            std::cout<<"Invalid choice"<<'\n';
        
    }
    }while(choice !=0);
    std::cout<<"Thank you, have a nice day."<<'\n';
    std::cout<<"-----------------"<<'\n';
    return 0;

}
