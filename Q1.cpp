
#include <iostream>
using namespace std;


struct Item{
    int id;
    float cost;
};
int main(){
    Item items[6] = {{1, 32}, {2, 56}, {3, 56.87}, {4, 9.45}};

    cout<<"Item id and Cost whose cost is greater than 50.00"<<endl;
    for(int i = 0; i<6; i++){
        if(items[i].cost>50){
            cout<<items[i].id<<" : "<<items[i].cost<<endl;
        }
    }

    
    return 0; 
}
