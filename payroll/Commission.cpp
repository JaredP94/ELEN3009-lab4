#include "Commission.h"

CommissionWorker::CommissionWorker(const string& first_name, const string& surname, double base_salary, double commission_per_item, int items):
	Employee(first_name, surname),
	_base_salary(base_salary),
	_commission_per_item(commission_per_item),
	_items(items)
	{};

void CommissionWorker::setSalary(double base_salary)
{
	_base_salary = base_salary;
}

void CommissionWorker::setNumItems(int items)
{
	_items = items;
}

void CommissionWorker::setCommPerItem(double commission_per_item)
{
	_commission_per_item = commission_per_item;
}
	
double CommissionWorker::earnings() const
{
	return _base_salary + _commission_per_item * _items;
}

void CommissionWorker::print() const
{
	cout << "CommissionWorker: ";
   // re-use Employee's print function (DRY principle)
   Employee::print();
}