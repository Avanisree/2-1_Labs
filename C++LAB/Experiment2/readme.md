Given that an EMPLOYEE class contains following members: data members: Employee number, Employee name, Basic, DA, IT, Net Salary and print data members.


STEP.1: Declare a class by the name of EMPLOYEE.
STEP.2: Create a member functions which:
(i). Reads the data: get_emp_details() 
(ii). Finds the net salary: find_net_salary(float basic, float da, float it)   returning (basic+da)-it 
(iii). Display the data: show_emp_details()
STEP.3: Call these all in main function:
int main() {
    employee emp;
    emp.get_emp_details();
    emp.show_emp_details();
    return 0;
}
