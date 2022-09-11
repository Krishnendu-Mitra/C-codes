#include <stdio.h> 
#include <math.h>
#include<stdlib.h>
//Not ready to use
int main() { 

    int day, month, year=0, dayNumber, monthNumber, numberOfDays, current, i, k, j;
    char* getMonthName;
    
    printf("\n Krish's Crono chart for: ");
     scanf("%d",&year); 
   printCalendar(year); 

    year -= month < 3; 
    dayNumber = (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7; 
    
    switch (monthNumber) { 

    case 0: 

        month = "January"; 

        break; 

    case 1: 

        month = "February"; 

        break; 

    case 2: 

        month = "March"; 

        break; 

    case 3: 

        month = "April"; 

        break; 

    case 4: 

        month = "May"; 

        break; 

    case 5: 

        month = "June"; 

        break; 

    case 6: 

        month = "July"; 

        break; 

    case 7: 

        month = "August"; 

        break; 

    case 8: 

        month = "September"; 

        break; 

    case 9: 

        month = "October"; 

        break; 

    case 10: 

        month = "November"; 

        break; 

    case 11: 

        month = "December"; 

        break; 

    } 
 monthNumber =  month; 
 
    if (monthNumber == 0) 

        numberOfDays = 31; 

    if (monthNumber == 1) { 

        if (year % 400 == 0 

            || (year % 4 == 0 

                && year % 100 != 0)) 

            numberOfDays = 29; 

        if (year == 0)
        numberOfDays = 30;

        else 

            numberOfDays = 28; 

    } 

    if (monthNumber == 2) 

        numberOfDays = 31; 

    if (monthNumber == 3) 

        numberOfDays = 30; 

    if (monthNumber == 4) 

        numberOfDays = 31; 

    if (monthNumber == 5) 

        numberOfDays = 30; 

    if (monthNumber == 6) 

        numberOfDays = 31; 

    if (monthNumber == 7) 

        numberOfDays = 31; 

    if (monthNumber == 8) 

        numberOfDays = 30; 

    if (monthNumber == 9) 

        numberOfDays = 31; 

    if (monthNumber == 10) 

        numberOfDays = 30; 

    if (monthNumber == 11) 

        numberOfDays = 31; 


         printf("%d\n\n", year);  

     current = dayNumber(1, 1, year); 

    for (i = 0; i < 12; i++) { 

        days = numberOfDays(i, year);

        printf("\n--------------%s--------------\n",  getMonthName(i)); 

        printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");  

        for (k = 0; k < current; k++) 

            printf("     "); 

        for (j = 1; j <= days; j++) { 

            printf("%5d", j); 

            if (++k > 6) { 

                k = 0; 

                printf("\n"); 

            } 

        } 

        if (k) 

            printf("\n");   

        current = k; 
    } 



    
    

    return 0; 
}
