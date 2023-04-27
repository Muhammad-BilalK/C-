#include<iostream>

using namespace std;

int main(){

    int amount;
    const int balance = 20000;
    cout<<"\n\n";
    cout<<"************** WELCOME TO ATM MACHINE SOFTWARE Mr. ABC ********************"<<endl;
    cout<<"Your Current Balance Is: "<<balance<<endl;
    cout<<"Enter Amount to Withdraw: "<<endl;
    cin>>amount;
    cout<<"\n";
    if(amount <= balance){

        if(amount >= 5000){
         cout<<"Rs. 5000 = "<<amount / 5000<<endl;
         amount = amount % 5000;
        }

        if(amount >= 1000){
         cout<<"Rs. 1000 = "<<amount / 1000<<endl;
         amount = amount % 1000;
        }

        if(amount >= 500){
         cout<<"Rs. 500 = "<<amount / 500<<endl;
         amount = amount % 500;
        }

        if(amount >= 100){
         cout<<"Rs. 100 = "<<amount / 100<<endl;
         amount = amount % 100;
        }

        if(amount >= 50){
         cout<<"Rs. 50 = "<<amount / 50<<endl;
         amount = amount % 50;
        }

        if(amount >= 10){
         cout<<"Rs. 10 = "<<amount / 10<<endl;
         amount = amount % 10;           
        }

        if(amount >= 5){
         cout<<"Rs. 5 = "<<amount / 5<<endl;
         amount = amount % 5;            
        }

        if(amount >= 2){
         cout<<"Rs. 2 = "<<amount / 2<<endl;
         amount = amount % 2;
        }

        if(amount >= 1){
         cout<<"Rs. 1 = "<<amount / 1<<endl;
         amount = amount % 1;
        }

         
    }
    else{
        cout<<"Account Error!!";
    }


    return 0;
}