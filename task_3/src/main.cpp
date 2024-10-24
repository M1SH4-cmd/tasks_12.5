#include <iostream>
#include <cassert>
using namespace std;

float travelTime(float distance, float speed){
    assert(speed >= 0);
    if (distance < 0) distance *= -1;
    return distance / speed;
}



int main(){
    cout << "Enter your distance and speed" << endl;
    float distance, speed;
    cin >> distance >> speed;

    cout << "Your travel time is:\t" << travelTime(distance, speed) << endl;
}