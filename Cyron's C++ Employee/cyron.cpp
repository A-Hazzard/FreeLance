/*
  Author: Cyron Hercules
  Creation Date: 7/6/2022 (MM/DD/YYYY)
  Description: A program that reads employee's information which is stored
  in an array. Reads the information from a text file (edata.txt), that then 
  finds the gross, net, average and deduction payments information
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*Function that reads the employee data records from an input text file (edata.txt) and creates a student struct that adds the Employee Data
to an array */
void readEmployeeData(){
  struct student{
    string ID;
    string Name;
    string HoursWorked;
    string RateofPay;
    string Deductions;
  };





string EmployeeData_Output;
//ifstream reads from files
//Read from edata.txt
ifstream readFile("edata.txt");

/*Loop through with the getline() function to read the file line by line then
using the EmlpoyeeData_Output to store the data from the file into that string,
. Essentially outputting everything from the file into the new string variable.*/
cout << "Edata.txt file information: \n" << endl;
while( getline(readFile, EmployeeData_Output) ) cout << EmployeeData_Output << endl;

 
//Closing edata.txt file
readFile.close();

}

//Function that computes gross and net payments and writes to a text fill (epayinfo.txt).
void gross_netPay(int ID, string Name, double hoursWorked, double rateOfPay, double Deductions){
  

try{  
       ifstream readFile("edata.txt");
    if(readFile){
        //ofstream writes to files
       ofstream employeePaymentInfo("epayinfo.txt",  std::ios_base::app);
    employeePaymentInfo << "\nGROSS AND NET PAY INFORMATION:";
      while(readFile >> ID >> Name >> hoursWorked >> rateOfPay >>  Deductions){
      double grossPay = hoursWorked * rateOfPay;
      double netPay = grossPay - Deductions;
    
      employeePaymentInfo << "\nID: " << ID << ", Name: " << Name << ", Hours: " << hoursWorked << ", Rate of Pay: " << rateOfPay << ", Deductions: " << Deductions << ", gross pay: " << grossPay << ", net pay: " << netPay << endl;
   
       }  
             cout << "\nAppended gross and net pay to file: " << "epayinfo.txt" << endl;

     }

     else{ throw 1;
     } 
    }catch(int errorcode){
      cout << "An error occurred while trying to write to epayinfo.txt\nError code: " << errorcode << endl;
    }
}


//Function that computes average hourly and deduction payments for each employee from a text file (epayinfo.txt). 
void averagePayment(int ID, string Name, double hoursWorked, double rateOfPay, double Deductions) {
  
  try{
       ifstream readFile ("edata.txt");

   
     ofstream employeePaymentInfo("epayinfo.txt",  std::ios_base::app);
     employeePaymentInfo << "\nAverage Pay Information:";
    while (readFile >> ID >> Name >> hoursWorked >> rateOfPay >>  Deductions){
  double averageHoursWork = hoursWorked / 5;
  double averageDeductions = Deductions / 5;
    employeePaymentInfo << "\nID: " << ID << ", Name: " << Name << ", Average Hours Worked: " << averageHoursWork << ", Average Deductions: " << averageDeductions << endl;

 }
 cout << "Appended Average in file epayinfo.txt" << endl;
 
 }catch(int errorCode){ 
  cout << "Failed to calculate average\nError Code: " << errorCode << endl;
 }


  }//End average Function


int main() {
 
 struct EmployeeData{
  int ID;
  string Name;
  double HoursWorked;
  double RateofPay;
  double Deductions;
 };
EmployeeData emp;

string Employee[5] = {
    emp.Name, 
    to_string(emp.HoursWorked), 
    to_string(emp.RateofPay), 
    to_string(emp.Deductions) 
  };
readEmployeeData();
gross_netPay(emp.ID, emp.Name, emp.HoursWorked, emp.RateofPay, emp.Deductions);
averagePayment(emp.ID, emp.Name, emp.HoursWorked, emp.RateofPay, emp.Deductions);






  return 0;
}