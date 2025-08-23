// Header file to include all function declarations involved in the application.
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Function declarations
double askBudget();
double dailyExpLog(int &session_counter);
void weekLog(int session_counter);
double warning(double bud,double exp,int  day_pass);
void dispHistory();
void insights(double saving,double budget,int days);
void menu();

#endif