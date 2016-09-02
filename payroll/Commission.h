#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h"

class CommissionWorker: public Employee
{
public:
	CommissionWorker(const string& first_name, const string& surname, double base_salary, double commission_per_item, int items);
	void setSalary(double base_salary);
	void setNumItems(int items);
	void setCommPerItem(double commission_per_item);
	
	virtual double earnings() const;
	void print() const;
	
private:
	double _base_salary;
	double _commission_per_item;
	int _items;
};

#endif