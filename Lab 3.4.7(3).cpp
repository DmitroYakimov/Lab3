#include <iostream>
using namespace std;

struct Date {
 int year;
 int month;
 int day;
};

bool isLeap(int year) {
 int year1;
  if (year % 4 != 0) {
   year1 = 0;
 } 
   else if (year % 100 != 0) {
    year1 = 1;
 } 
    else if (year % 400 != 0) {
      year1 = 0;
 } 
      else {
        year1 = 1;
 }
         return year1;
}

int monthLength(int year, int month) {
 switch (month) {
 case 1:
  return 31;
  case 2:
   if (isLeap(year)) {
    return 29;
  } 
  else {
   return 28;
  }
    case 3:
     return 31;
    case 4:
     return 30;
    case 5:
     return 31;
    case 6:
     return 30;
    case 7:
     return 31;
    case 8:
     return 31;
    case 9:
     return 30;
    case 10:
     return 31;
    case 11:
     return 30;
    case 12:
     return 31;
 }
}
int dayOfYear(Date date) {
   if (isLeap(date.year)) {
   date.day += 1;
 }
 switch (date.month) {
 case 1:
  if (date.month == 1) {
   return date.day;
  } 
  else {
   return 31;
  }
 case 2:
  if (date.month == 2) {
   if (!isLeap(date.year))
    return 59;
   else
    return 60;
  }
  else {
   if (!isLeap(date.year))
    return 59;
   else
    return 60;
  }
 case 3:
  if (date.month == 3) {
   return 59 + date.day;
  } 
  else {
   return 31;
  }
 case 4:
  if (date.month == 4) {
   return 90 + date.day;
  } 
  else {
   return 30;
  }
 case 5:
  if (date.month == 5) {
   return 120 + date.day;
  } 
  else {
   return 31;
  }
 case 6:
  if (date.month == 6) {
   return 151 + date.day;
  } 
  else {
   return 30;
  }
 case 7:
  if (date.month == 7) {
   return 181 + date.day;
  } 
  else {
   return 31;
  }
 case 8:
  if (date.month == 8) {
   return 211 + date.day;
  } 
  else {
   return 31;
  }
 case 9:
  if (date.month == 9) {
   return 243 + date.day;
  } 
  else {
   return 30;
  }
 case 10:
  if (date.month == 10) {
   return 273 + date.day;
  } 
  else {
   return 31;
  }
 case 11:
  if (date.month == 11) {
   return 304 + date.day;
  } 
  else {
   return 30;
  }
 case 12:
  if (date.month == 12) {
   return 334 + date.day;
  } 
  else {
   cout << "ERROR MONTH > 12";
  }
 } 
}
int main(void) {
 Date d;
 cout << "Enter year month day: ";
 cin >> d.year >> d.month >> d.day;
 cout << dayOfYear(d) << endl;
 return 0;
}