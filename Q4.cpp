#include <iostream>
using namespace std;

struct SalesRecord{
    string month;
    float amount;

};


int main(){
    SalesRecord sales[12];
    cout<<"Enter sales data for each month:"<<endl;

    for(int i =0; i<12; i++){
        cout<<endl<<"Month "<<i+1<<" Name: ";
        cin>>sales[i].month;

        cout<<endl<<"Sales Amount: ";
        cin>>sales[i].amount;


    }

    float max_sales = -1; 
    float min_sales = 10e5;


    for(int i = 0; i<12; i++){
        if(sales[i].amount>max_sales){
            max_sales = sales[i].amount;
        }
        if(sales[i].amount<min_sales){
            min_sales = sales[i].amount;
        }
    }

    for(int i = 0; i<12; i++){
        if(sales[i].amount == max_sales){
            cout<<endl<<"Month with maximum sales: "<<sales[i].month<<" with amount "<<sales[i].amount<<endl;
        }
        if(sales[i].amount == min_sales){
            cout<<endl<<"Month with minimum sales: "<<sales[i].month<<" with amount "<<sales[i].amount<<endl;
        }
    }

  
    return 0; 
}




