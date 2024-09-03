#include <iostream>
using namespace std;

int main()
{
    cout << "Payslip for Employee:" << endl;
    cout << "....................." << endl;


    string Name;
    cout << "Name: ";
    cin >> Name ;

    float Gross;
    cout << "Gross Salary: " << "Rp";
    cin >> Gross ;

    float Tax = (0.2)*Gross;
    cout << fixed << "Tax (20%):  " << "Rp" << Tax << endl;

    int Installment;
    cout << "Installment: " << "Rp";
    cin >> Installment;

    int Insurance;
    cout << "Insurance: " << "Rp";
    cin >> Insurance ;

    float Net = Gross - Tax - Installment - Insurance;
    cout << fixed << "Net Salary: " << "Rp " << Net;

}
