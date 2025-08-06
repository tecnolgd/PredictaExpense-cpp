#include <iostream>
#include <string>
#include "head.hpp"



void dailyExpLog();
void saveToFile();
void weekLog();
void savePredict();
void dispHistory();
void spendWarn();
void menu();
int main(){
    int choice;
    void menu();
    std::cout<<"enter you rchoice";
    std::cin>>choice;

    switch(choice){
        case 1:void dailyExpLog();
            break;
        case 2:void saveToFile();
            break;
        case 3:void weekLog();
            break;
        case 4:void savePredict();
            break;
        case 5:void dispHistory();
            break;
        case 6:void spendWarn();
            break;
        default:
            std::cout<<"invalid choice"<<'\n';
        
    }
    return 0;

}
