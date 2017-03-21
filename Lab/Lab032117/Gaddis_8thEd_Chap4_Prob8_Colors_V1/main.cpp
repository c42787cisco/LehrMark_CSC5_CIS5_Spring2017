/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 21st, 2017, 10:30 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>    //String Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string c1,c2;//The 2 primary colors input by the user
    
    //Initialize variables
    c1="Blue";
    c2="Yellow";
    
    //Test for correctness
    if(!(c1=="Red"||c1=="Blue"||c1=="Yellow")){
        cout<<"Bad Color"<<endl;
        return 1;//Exit program
    }
    
    if(!(c2=="Red"||c2=="Blue"||c2=="Yellow")){
        cout<<"Bad Color"<<endl;
        return 1;//Exit program
    }
    
    if(c1==c2){
        cout<<"Same Color start again"<<endl;
    }
    
    //Map inputs to outputs or process the data
    cout<<c1<<" and "<<c2<<" result in the following "<<endl;
    if((c1=="Red"&&c2=="Blue")||(c2=="Red"&&c1=="Blue"))
        cout<<"Purple Mixture"<<endl;
    if((c1=="Red"&&c2=="Yellow")||(c2=="Red"&&c1=="Yellow"))
        cout<<"Orange Mixture"<<endl;
    if((c1=="Yellow"&&c2=="Blue")||(c2=="Yellow"&&c1=="Blue"))
        cout<<"Green Mixture"<<endl;
    
    //Exit stage right!
    return 0;
}

