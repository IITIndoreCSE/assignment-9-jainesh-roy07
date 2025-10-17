#include <iostream>
using namespace std;

struct Color{
    int red;
    int green;
    int blue;
};

int main(){
    Color colors[5] = {{22,160,133}, {243, 156, 18}, {142, 68, 173}, {52, 73, 94}, {231, 76, 60}};
    
    for(int i= 0; i<3; i++){
        colors[i].red = 255-(colors[i].red);
        colors[i].blue = 255-(colors[i].blue);
        colors[i].green = 255-(colors[i].green);
    }

    cout<<"New RGB Values: "<<endl;
    for(int i = 0; i<5; i++){
        cout<<i+1<<". rgb("<<colors[i].red<<", "<<colors[i].green<<", "<<colors[i].blue<<")"<<endl;
    }
    
    return 0; 
}


