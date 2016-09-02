#include "Commission.h"
#include "Employee.h"
#include "Fixed.h"
#include "gtest/gtest.h"
#include "Hourly.h"

#include <memory>

using std::make_shared;
using std::shared_ptr;

TEST(CommissionWorker, correctEarningsReturned)
{
	shared_ptr<CommissionWorker> commissionWorker_ptr = make_shared<CommissionWorker>("Jeff", "Jefferson", 1000, 75.95, 13);
	
	EXPECT_EQ(1987.35, commissionWorker_ptr->earnings());
}

TEST(CommissionWorker, ableToSetNewSalary)
{
	shared_ptr<CommissionWorker> commissionWorker_ptr = make_shared<CommissionWorker>("Jeff", "Jefferson", 1000, 75.95, 13);
	commissionWorker_ptr->setSalary(1500);
	
	EXPECT_EQ(2487.35, commissionWorker_ptr->earnings());
}

TEST(CommissionWorker, ableToSetNewCommRate)
{
	shared_ptr<CommissionWorker> commissionWorker_ptr = make_shared<CommissionWorker>("Jeff", "Jefferson", 1000, 75.95, 13);
	commissionWorker_ptr->setCommPerItem(99.90);
	
	EXPECT_EQ(2298.70, commissionWorker_ptr->earnings());
}

TEST(CommissionWorker, ableToSetNewItemNumber)
{
	shared_ptr<CommissionWorker> commissionWorker_ptr = make_shared<CommissionWorker>("Jeff", "Jefferson", 1000, 75.95, 13);
	commissionWorker_ptr->setNumItems(20);
	
	EXPECT_EQ(2519, commissionWorker_ptr->earnings());
}

