#include <iostream>
#include <string>
using namespace std;


int main(){
    string people[10];

    for(int i = 0; i < 10; i++){
        cout << "Enter the person's surname: " << endl;
        cin >> people[i];

    }

    for(int i = 0; i < 3; i++){
        cout << "Enter the number of flat: " << endl;
        int flat_number;
        cin >> flat_number;
        flat_number--;
        if(flat_number < 0 || flat_number >= 10){
            cout << "Invalid flat number" << endl;
            return 0;
            }
        cout << "Person who lives here: " << people[flat_number] << endl;
    }
}