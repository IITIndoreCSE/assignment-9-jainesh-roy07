#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main(){
    Point points[7];
    cout<<"Enter coordinates for 7 points (x,y): "<<endl;

    for(int i = 0; i<7; i++){
        cout<<endl<<"Point "<<i+1<<" - "<<"x: ";
        cin>>points[i].x;
        cout<<endl<<"Point "<<i+1<<" - "<<"y: ";
        cin>>points[i].y;
    }

    int ptsInTheFirstQuadrant = 0;
    for(int i = 0; i<7; i++){
        if(points[i].x>0 and points[i].y>0){
            ptsInTheFirstQuadrant ++;
        }
    }

    cout<<endl<<"Number of points in the first quadrant: "<<ptsInTheFirstQuadrant;

    
    return 0; 
}



