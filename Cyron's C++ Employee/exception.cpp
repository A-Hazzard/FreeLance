#include <iostream>
#include <fstream>

using namespace std;
int main(){

    try{
        //Blok of code
        int age = 15;
        if(age >= 18){
            cout << "Access granted" << endl;
        }else{
        throw 101;//When a problem arises;
        }
    }
    catch(int errorCode){
        //Block of code to handle errors
        cout << "Access denied - you must be older";
        cout << "\nError code: " << errorCode << "\n If you have any problems please contact the administrator." << endl;
    }


    return 0;
}