/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 4th, 2017, 9:50 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format the output
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CNVPTOD=100.0f;//Pennies to Dollars

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int salary,sumSlry;//Pennies are the units
    unsigned short dyLimit;//Limit the number of days
    
    //Initialize variables
    sumSlry=salary=1;//1 penny
    
    //Input the number of days
    cout<<"This program calculates your double salary and pay daily"<<endl;
    cout<<"Input the number of days which are equal to 1 but limited to 31"<<endl;
    do{
        cin>>dyLimit;
    }while(dyLimit<1||dyLimit>31);
    
    //Output the heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day     $Salary        $Sum"<<endl;
    cout<<setw(3)<<1<<setw(12)<<salary/CNVPTOD<<setw(12)<<sumSlry/CNVPTOD<<endl;
    //Map inputs to outputs or process the data
    for(int day=2;day<=dyLimit;day++){
        salary*=2;
        sumSlry+=salary;
        cout<<setw(3)<<day<<setw(12)<<salary/CNVPTOD<<setw(12)<<sumSlry/CNVPTOD<<endl;
    }
    
    //Exit stage right!
    return 0;
}