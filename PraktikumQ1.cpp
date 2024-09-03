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

    int Tax = (0.2)*Gross;
    cout << fixed << "Tax (20%):  " << "Rp" << Tax << endl;

    float Installment;
    cout << "Installment: " << "Rp";
    cin >> Installment;

    float Insurance;
    cout << "Insurance: " << "Rp";
    cin >> Insurance ;

    int Net = Gross - Tax - Installment - Insurance;
    cout << fixed << "Net Salary: " << "Rp " << Net;

}
