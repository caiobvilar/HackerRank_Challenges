#include <iostream>

int days_on months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
struct Date
{
	int day;
	int month;
	int year;
};
int count_leap(Date d);
int check_fine(Date ret, Date d);
int main(int argc,char *argv[])
{
	Date returned,due;
	std::cin >> returned.day >> returned.month >> returned.year;
	std::cin >> due.day >> due.month >> due.year;
	std::cout << returned.day << " " << returned.month << " " << returned.year << std::endl;
	std::cout << due.day << " " << due.month << " " << due.year << std::endl;
	return 0;
}
int count_leap(Date d)
{
	int years=0;
}
int check_fine(Date ret, Date d)
{
	int days=0,month=0,years=0;
	
}
