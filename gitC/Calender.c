#include<stdio.h>
#include<math.h>

int fm(int date, int month, int year) {
int fmonth, lep;
if ((year % 100 == 0) && (year % 400 != 0))
lep = 0;
   else if (year % 4 == 0)
  lep = 1;
else
  lep = 0;

  fmonth = 3 + (2 - lep) * ((month + 2) / (2 * month))+ (5 * month + month / 9) / 2;

 fmonth = fmonth % 7;

  return fmonth;
}
int day_of_week(int date, int month, int year) {

   int dayOfWeek;
   int YY = year % 100;
   int century = year / 100;

   printf("Date: %d/%d/%d \n", date, month, year);

   dayOfWeek = 1.25 * YY + fm(date, month, year) + date - 2 * (century % 4);

   dayOfWeek = dayOfWeek % 7;

   switch (dayOfWeek) {
      case 0:
         printf("weekday = Saturday");
         break;
      case 1:
         printf("weekday = Sunday");
         break;
      case 2:
         printf("weekday = Monday");
         break;
      case 3:
         printf("weekday = Tuesday");
         break;
      case 4:
         printf("weekday = Wednesday");
         break;
      case 5:
         printf("weekday = Thursday");
         break;
      case 6:
         printf("weekday = Friday");
         break;
      default:
         printf("Incorrect data");
   }
   return 0;
}
int main() {
   int date, month, year;

   printf("Enter the year ");
   scanf("%d", &year);

   month = 1;

   date = 1;

   day_of_week(date, month, year);

   return 0;
}

