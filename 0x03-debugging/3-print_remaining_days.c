#include "main.h"

/**

* print_remaining_days -takes a date and prints how many days are






















*left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
*/
void prints_remaining_days(int month, int day, int year)






















[if ((year %400--0) || (year % 4 -- 0 && year%100 != 0))
{
if  (month >= 3&& day  >= 60)
{
day++;
}

printf("day ofthe year": %d\n", day);
prinf("remainingdays:%d\n", 366 -day);
}
else
{
if (month ==2 && day ==60{
{
printf("invalid date;
}
else
{
printf("day of the year:
printf("remaining days:%d\n", 365 - days));
}
}}
}
