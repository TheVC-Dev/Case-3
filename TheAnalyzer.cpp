#include <iostream>
#include <fstream>
using namespace std;

double from_file(){
    ifstream inputFile;
    inputFile.open("numtxt.txt");
    double num;
    double num_total = 0;
    int num_count = 0;

    while(inputFile >> num){
         num_total = num_total + num;
         num_count++;
       } 

    cout << "Temperature analyzed for " << num_count << " days." << endl;
    return (num_total/num_count);
    }

int main(){
    double avg_tmp{from_file()};
    cout << avg_tmp << endl;

    return 0;
}
