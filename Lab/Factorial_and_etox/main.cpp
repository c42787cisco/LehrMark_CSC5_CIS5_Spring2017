/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 4th, 2017, 11:32 AM
 * Purpose:  Factorial and e to the x
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Solve first part
    int n,fact=1;
    cout<<"First part, calculate N!"<<endl;
    cout<<"Type in N"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<n<<"! = "<<fact<<endl;
    
    //Solve Second part
    float x;
    cout<<endl<<"Second part, calculate e^x"<<endl;
    cout<<"Type in x"<<endl;
    cin>>x;
    float etox=1;
    for(int n=1;n<=13;n++){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        etox+=pow(x,n)/fact;
    }
    cout<<"e^"<<x<<" = "<<etox<<endl;
    
    //All in 1 working line of code
    cout<<endl<<"Third part, all in one line"<<endl;
    float ex=1.0f,tol=1e-7f;
    for(float i=1.0f,term=1.0f;  term>=tol;  term*=(x/i), ex+=term, i++);
    cout<<"e^"<<x<<" = "<<ex<<endl;
    
    //Exit stage right!
    return 0;
}