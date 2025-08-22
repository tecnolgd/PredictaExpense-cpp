// To display log history


#include "head.hpp"
#include <iostream>
#include <fstream>

void dispHistory(){
    std::cout<<"____________________________"<<std::endl;
    std::cout<<"**  LOG HISTORY  **"<<std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::ifstream file("expense_log.txt");
        if(file.is_open()){
            std::string line;
            while(std::getline(file,line)){      //to print content from the text file to the console.
                std::cout<<line<<std::endl;
            }
            file.close();
        } else{
            std::cout<<"Unable to open the file.\n";
            }
    std::cout<<"____________________________"<<std::endl;
}