#include <iostream>
#include <fstream>


using namespace std;

void readEmployeeData(){
  struct studentData{
    string ID;
    string Name;
    string HoursWorked;
    string RateofPay;
    string Deductions;
  };



//ofstream creates and writes to files
//ifstream reads from files
string EmployeeData_Output;

//Read from edata.txt
ifstream edataFile("edata.txt");

//Loop through with the getline() function to readd the file line by line, essentially output everything from the file.
while(getline(edataFile, EmployeeData_Output)) cout << EmployeeData_Output << endl;

 

edataFile.close();

}

int main() {
 
 struct EmployeeData{
  int ID;
  string Name;
  string HoursWorked;
  string RateofPay;
  string Deductions;
 };
EmployeeData emp;

string Employee[5] = {emp.Name, emp.HoursWorked, emp.RateofPay, emp.Deductions};

readEmployeeData();

  return 0;
}