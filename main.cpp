#include <iostream>
#include <string>
#include "head.hpp"



void dailyExpLog();
void saveToFile();
void weekLog();
void savePredict();
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
        case 1: dailyExpLog();
            break;
        case 2:saveToFile();
            break;
        case 3:weekLog();
            break;
        case 4:savePredict();
            break;
        case 5:dispHistory();
            break;
        case 6: insights();
            break;
        default:
            std::cout<<"Invalid choice"<<'\n';
        
    }
}while(choice !=0);
    return 0;

}
