// Abstract base class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include <memory>
using std::string;
#include <iostream>
using std::cout;

class Employee {
public:
   Employee(const string& first_name, const string& surname);
   virtual ~Employee();						// virtual
   string first_name() const;				// non-virtual
   string surname() const;					// non-virtual
   
   virtual double earnings() const = 0;		// pure virtual
   virtual void print() const;				// virtual

private:
   string _first_name;
   string _surname;
};

double total_employee_wages(const std::vector<std::shared_ptr<Employee>>& employees);

#endif
