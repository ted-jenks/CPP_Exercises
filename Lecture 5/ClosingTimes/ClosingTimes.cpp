#include <iostream>
using namespace std;

enum Day
{
	Sun,
	Mon,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat
};

int closing_time(Day day_of_the_week);
void print_day(Day day_of_the_week);

/* MAIN PROGRAM */
int main()
{
	int count;

	cout.setf(ios::left);
	/* Print table heading */
	cout.width(17);
	cout << "DAY";
	cout << "CLOSING TIME\n\n";

	/* Print table from Sunday to Saturday */
	for (count = static_cast<int>(Sun); count <= static_cast<int>(Sat); count++)
	{
		cout.width(19);

		print_day(static_cast<Day>(count));

		cout << closing_time(static_cast<Day>(count)) << "pm\n";
	}
	return 0;
}
/* END OF MAIN PROGRAM */

void print_day(Day day_of_the_week) {
	switch (day_of_the_week)
		{
		case Sun:
			cout << "Sunday";
			break;
		case Mon:
			cout << "Monday";
			break;
		case Tue:
			cout << "Tuesday";
			break;
		case Wed:
			cout << "Wednesday";
			break;
		case Thu:
			cout << "Thursday";
			break;
		case Fri:
			cout << "Friday";
			break;
		case Sat:
			cout << "Saturday";
			break;
		default:
			cout << "ERROR!";
		}
}

/* FUNCTION TO GENERATE SHOP CLOSING TIMES FROM DAY OF THE WEEK */
int closing_time(Day day_of_the_week)
{
	switch (day_of_the_week)
		{
		case Sun:
			return 1;
			break;
		case Mon:
			return 6;
			break;
		case Tue:
			return 6;
			break;
		case Wed:
			return 8;
			break;
		case Thu:
			return 6;
			break;
		case Fri:
			return 6;
			break;
		case Sat:
			return 5;
			break;
		default:
			cout << "ERROR!";
		}
		return 0;
}