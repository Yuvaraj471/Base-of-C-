#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee {
protected:
    char emp_name[50], emp_id[20], address[100], mail_id[50], mobile_no[15];
public:
    void getEmployeeDetails() {
        cout << "Enter Employee Name: ";
        cin.getline(emp_name, 50);
        cout << "Enter Employee ID: ";
        cin.getline(emp_id, 20);
        cout << "Enter Address: ";
        cin.getline(address, 100);
        cout << "Enter Mail ID: ";
        cin.getline(mail_id, 50);
        cout << "Enter Mobile Number: ";
        cin.getline(mobile_no, 15);
    }

    void displayEmployeeDetails() {  
        cout << "\nEmployee Name: " << emp_name;  
        cout << "\nEmployee ID: " << emp_id;  
        cout << "\nAddress: " << address;  
        cout << "\nMail ID: " << mail_id;  
        cout << "\nMobile No: " << mobile_no;  
    }
};

class Salary : public Employee {
protected:
    float BP, DA, HRA, PF, club_fund, gross_salary, net_salary;
public:
    void getBasicPay() {
        cout << "Enter Basic Pay (BP): ";
        cin >> BP;
        cin.ignore();  // clear buffer
    }

    void calculateSalary() {  
        DA = 0.97f * BP;  
        HRA = 0.10f * BP;  
        PF = 0.12f * BP;  
        club_fund = 0.001f * BP;  
        gross_salary = BP + DA + HRA;  
        net_salary = gross_salary - (PF + club_fund);  
    }  

    void displayPaySlip(char designation[]) {  
        cout << "\n=== Pay Slip for " << designation << " ===";  
        displayEmployeeDetails();  
        cout << "\nBasic Pay: " << BP;  
        cout << "\nDA (97%): " << DA;  
        cout << "\nHRA (10%): " << HRA;  
        cout << "\nPF (12%): " << PF;  
        cout << "\nClub Fund (0.1%): " << club_fund;  
        cout << "\nGross Salary: " << gross_salary;  
        cout << "\nNet Salary: " << net_salary;  
    }
};

class AssistantProfessor : public Salary {
public:
    void process() {
        getEmployeeDetails();
        getBasicPay();
        calculateSalary();
        displayPaySlip("Assistant Professor");
    }
};

class AssociateProfessor : public Salary {
public:
    void process() {
        getEmployeeDetails();
        getBasicPay();
        calculateSalary();
        displayPaySlip("Associate Professor");
    }
};

class Professor : public Salary {
public:
    void process() {
        getEmployeeDetails();
        getBasicPay();
        calculateSalary();
        displayPaySlip("Professor");
    }
};

void main() {
    clrscr();
    int choice;
    do {
        cout << "\nSelect Designation to Enter Details:";
        cout << "\n1. Assistant Professor\n2. Associate Professor\n3. Professor\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {  
            case 1: {  
                AssistantProfessor ap;  
                ap.process();  
                break;  
            }  
            case 2: {  
                AssociateProfessor asp;  
                asp.process();  
                break;  
            }  
            case 3: {  
                Professor p;  
                p.process();  
                break;  
            }  
            case 4:  
                cout << "\nExiting program.";  
                break;  
            default:  
                cout << "\nInvalid choice. Try again.";  
        }  
    } while (choice != 4);  

    getch();
}