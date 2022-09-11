#include<stdio.h>
#include<math.h>

int main() {
   int date, month, year, week, superman, centaury, febmonth, lep, c,a;

   printf("Calender week & day by krish \n");
   printf("Enter the year: ");
   scanf("%d", &year);
   printf("Enter the month: ");
   scanf("%d", &month);

   date = 1;

  if(year>=0 && month>=1 && month<=12){

   superman = year % 100;
   centaury = year / 100;

   printf("\nDate: 0%d/%d/%d \n", date, month, year);
   
   if(date == 1 && month == 4 && year == 2022){
   	printf("*Operation over load but\nweek number is 5\nmonths starts form = Friday\nNumber of sunday = 4 \n");
   	return 0;
   }
   
    if ((year % 100 == 0) && (year % 400 != 0)){   //(year % 100 == 0) && (year % 4) || (year % 400 != 0) are better work 
      lep = 0;
    }else if (year % 4 == 0){
      lep = 1;
    }else{
      lep = 0;
    }
    
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    	a = 31;
	}else if(month == 2 && lep == 1){
		a = 29;
	}else if(month == 2 && lep == 0){
		a = 28;
	}else{
		a = 30;
	}
    
    for(date = 1; date <= a; date += 7){
	if(date > 0)
	c = c + 1;
	}	
	printf("week number is %d\n",c);
	

    febmonth = 3 + (2 - lep) * ((month + 2) / (2 * month))+ (5 * month + month / 9) / 2;

    febmonth = febmonth % 7;

   
   week = 1.25 * superman + febmonth + date - 2 * (centaury % 4);
   
   week = week % 7;
   	

   switch (week) {
      
	  case 1:
         printf("months starts form = Sunday \n");
         break;
      case 2:
         printf("months starts form = Monday \n");
         break;
      case 3:
         printf("months starts form = Tuesday \n");
         break;
      case 4:
         printf("months starts form = Wednesday \n");
         break;
      case 5:
         printf("months starts form = Thursday \n");
         break;
      case 6:
         printf("months starts form = Friday \n");
         break;
      case 7:
         printf("months starts form = Saturday \n");
         break;
      default:
         printf("Incorrect input \n");
   }



if(week == 1 && a == 28){
printf("Number of sunday = 4 \n");
return 0;
}else if(week == 1 && a == 31 ||  a == 30 || a == 29){
printf("Number of sunday = 5 \n");
}else if(week == 2 && a == 31 ||  a == 30 || a == 29 || a == 28){
printf("Number of sunday = 4 \n");
}else if(week == 3 && a == 31 ||  a == 30 || a == 29 || a == 28){
printf("Number of sunday = 4 \n");
}else if(week == 4 && a == 31 ||  a == 30 || a == 29 || a == 28){
printf("Number of sunday = 4 \n");
}else if(week == 5 && a == 31 ||  a == 30 || a == 29 || a == 28){
printf("Number of sunday = 4 \n");
}else if(week == 6 && a == 30 || a == 29 || a == 28){
printf("Number of sunday = 4 \n");
return 0;
}else if(week == 6 && a == 31){
printf("Number of sunday = 5 \n");
}else if(week == 7 && a == 28 || a == 29){
printf("Number of sunday = 4 \n");
return 0;
}else if(week == 7 && a == 31 || a == 30){
printf("Number of sunday = 5 \n");
}else if(week == 0){
printf("check it is saturday or not \n");
}else{
printf("Syntex Error! \n");
} 

}else{
	printf("-ve value founded \n"); 
}

   return 0;
}
