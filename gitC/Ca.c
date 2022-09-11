#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number: ");
	scanf("%d",&a);
	if(a % 2 == 0){
	 b = 0;
	}else{
		b = 1;
	}
	switch(b){
	  case 0:
	       printf("%d is even number\n",a);
	     break;
	  case 1:
	       printf("%d is odd number\n",a);
	     break;
	  default:
	     printf("%d is logicless number\n",a);
	 }
	return 0;
}

#include<stdio.h>
int main(){
	int bill, pay;
	char dish[15], flavor[15];
	printf("Welcome to Yami Tami de Dhaba\n");
	printf("Order your dish only one(Egg Biriyani, Mattun Biriyani, Chicken Biriyani, Dum Biriyani\nPannier Biriyani, Nim Biriyani, Fish Biriyani\n");
	scanf("%c",&flavor);
	switch(flavor){
		case 'E':
		   printf("You choose 1 plate Egg Biriyani\n price is only ₹180/-\n");
		   printf("Gst is 5%\n");
		   bill = 180 + (180 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10%\n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'M':
		   printf("You choose 1 plate Mattun Biriyani\n price is only ₹320/-\n");
		   printf("Gst is 8%\n");
		   bill = 320 + (320 * (8/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 15%\n");
		   pay = bill - (bill * (15/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'C':
		   printf("You choose 1 plate Chicken Biriyani\n price is only ₹250/-\n");
		   printf("Gst is 6%\n");
		   bill = 250 + (250 * (6/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10%\n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'D':
		   printf("You choose 1 plate Dum Biriyani\n price is only ₹150/-\n");
		   printf("Gst is 5%\n");
		   bill = 150 + (150 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10%\n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'P':
		   printf("You choose 1 plate Pannier Biriyani\n price is only ₹280/-\n");
		   printf("Gst is 7%\n");
		   bill = 280 + (280 * (7/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 12%\n");
		   pay = bill - (bill * (12/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'N':
		   printf("You choose 1 plate Nim Biriyani\n price is only ₹380/-\n");
		   printf("Gst is 5%\n");
		   bill = 380 + (380 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 8%\n");
		   pay = bill - (bill * (8/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'F':
		   printf("You choose 1 plate Fish Biriyani\n price is only ₹250/-\n");
		   printf("Gst is 5%\n");
		   bill = 250 + (250 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10%\n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		default:
		  printf("Invalid food\n");
	}
	
	printf("Pick your order in our carnival window\n");
	printf("\n");
	printf("Visit us again\n");
	return 0;
}

#include<stdio.h>
#include<math.h>

int main() {
   int date, month, year, week, superman, century, fmonth, leap, a, c;

   printf("Enter the year ");
   scanf("%d", &year);
   printf("Enter the month ");
   scanf("%d", &month);

   date = 1;

if(year>=0 && month>=1 && month<=12){

   superman = year % 100;
   century = year / 100;

   printf("Date: 0%d/%d/%d \n", date, month, year);
   
     if ((year % 100 == 0) && (year % 400 != 0)){
         leap = 0;
     }else if (year % 4 == 0){
         leap = 1;
     }else{
         leap = 0;
     }
  
  if(month == 1|| month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
  	a = 31;
  }else if(month == 2 && leap == 1){
  	a = 29;
  }else if(month == 2 && leap == 0){
  	a = 28;
  }else{
  	a = 30;
  }

  fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))+ (5 * month + month / 9) / 2;

  fmonth = fmonth % 7;

   week = 1.25 * superman + fmonth + date - 2 * (century % 4);

   //remainder on division by 7
   week = week % 7;

   switch (week) {
      case 0:
         printf("Week start from = Saturday \n");
         break;
      case 1:
         printf("Week start from = Sunday \n");
         break;
      case 2:
         printf("Week start from = Monday \n");
         break;
      case 3:
         printf("Week start from = Tuesday \n");
         break;
      case 4:
         printf("Week start from = Wednesday \n");
         break;
      case 5:
         printf("Week start from = Thursday \n");
         break;
      case 6:
         printf("Week start from = Friday \n");
         break;
      default:
         printf("Incorrect input \n");
   }

 if(week == 0 && a == 28 || a == 29){
 	printf("Total sunday = 4 \n");
    return 0;
 }else if(week == 0 && a == 31 || a == 30){
 	printf("Total sunday =  5 \n");
 }else if(week == 1 && a == 28){
 	printf("Total sunday =  4 \n");
    return 0;
 }else if(week == 1 && a == 31 || a == 30 || a == 29){
 	printf("Total sunday =  5 \n");
 }else if(week == 2 && a == 31 || a == 30 || a == 29 || a == 28){
 	printf("Total sunday =  4 \n");
 }else if(week == 3 && a == 31 || a == 30 || a == 29 || a == 28){
 	printf("Total sunday =  4 \n");
 }else if(week == 4 && a == 31 || a == 30 || a == 29 || a == 28){
 	printf("Total sunday =  4 \n");
 }else if(week == 5 && a == 31 || a == 30 || a == 29 || a == 28){
 	printf("Total sunday =  4 \n");
 }else if(week == 6 && a == 30 || a == 29 || a == 28){
 	printf("Total sunday =  4 \n");
    return 0;
 }else if(week == 6 && a == 31){
 	printf("Total sunday =  5 \n");
 }else if(week == 7){
 	printf("Check it is which day! \nYour if-else statement have an error \n");
 }else{
 	printf("Syntex Error!\n");
 }

}else{
	printf("-ve value founded \n");
}
   return 0;
}

#include<stdio.h>
//code by krish
int main(){
    int i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d",&k);
    for(i=1; i<=k; i++){
      for(j=k; j>i; j--)
        printf("  ");
      for(j=1; j<=i; j++)
          printf("%d ",j);
      for(j=j-2; j>=1; j--)
          printf("%d ",j);
      printf("\n");
    }
    
    for(i=k-1; i>=1; i--){
      for(j=k; j>i; j--)
        printf("  ");
      for(j=1; j<=i; j++)
          printf("%d ",j);
      for(j=j-2; j>=1; j--)
          printf("%d ",j);
      printf("\n");
    }
    return 0;
}

#include<stdio.h>
//code by krish
int main(){
    int i, j,r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
      for(j=r;j>i;j--)
        printf("  ");
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct student{
 char name[20];
 int roll;
 int marks;
}s1;
int main(){
  int i=0;
   printf("\n");
   printf("Enter student name: ");
   scanf("%s",&s1.name);
   printf("Enter student roll: ");
   scanf("%d",&s1.roll);
   printf("Enter student marks(out of 100): ");
   scanf("%d",&s1.marks);
   i = s1.marks + 0;
   printf("-------------------------------------\n");
   printf("Your student name is %s \n",s1.name);
   printf("Your student roll is %d \n",s1.roll);
   printf("Your student marks is %d \n",s1.marks);
   if(i>=45){
    printf("Your student is pass and promoted \n");
    }else{
     printf("Your student is fail \n");
    }
    if(i>=0 && i<45){
      printf("Grade is F \n");
    }else if(i>=45 && i<50){
    printf("Grade is E \n");
    }else if(i>=50 && i<60){
    printf("Grade is D \n");
    }else if(i>=60 && i<70){
    printf("Grade is C \n");
    }else if(i>=70 && i<80){
    printf("Grade is B \n");
    }else if(i>=80 && i<90){
    printf("Grade is A \n");
    }else if(i>=90 && i<100){
    printf("Grade is O \n");
    }else{
    printf("Syntex error! \n");
    }
    printf("Enter the password: ");
    scanf("%s",s1.name);
    i++;
    printf("Your password @%s%d with saved the data in your local host C:/php files/php?code/Sql bit/data codes.txt \n",s1.name,i);
return 0;
}

#include<stdio.h>
//code by krish(mistic print)
int main(){
	int a=1, b, i;
	printf("Enter the last number: ");
	scanf("%d",&b);
	
     if(b>0){ 
	  for(i=1; i<=b; i++){
		  if(i % 3 == 0 && i % 6 == 0 && i % 9 == 0){
			  printf(" %d is mistic number \n",i);
		   }
	    }
	 }else{
		 printf(" %d is unorder input \n",b);
		 b++;
		}
	return 0;
}

#include<stdio.h>
//code by krish(qurze print)
int main(){
	int a=1, b, i;
	printf("Enter the last number: ");
	scanf("%d",&b);
	
     if(b>0){ 
	  for(i=1; i<=b; i++){
		  if(i % 4 == 0 && i % 6 == 0){
			  printf(" %d is qurze number \n",i);
		   }
	    }
	 }else{
		 printf(" %d is unorder input \n",b);
		 b++;
		}
	return 0;
}

#include <stdio.h>
//code by krish[2KCH(oH)Cl]
int main(){
	float C, b=1, e=0, d;
	printf("Enter amount of CH(oH)Cl gas(aq): ");
	scanf("%f",&C);
	b = C + 0.50;
	
	if(C<0){
		printf("Negetive amount of product is not valid in our thermodynamics \n");
    }else if(C>=0 && C<=4){
    	e = (C + C)*2;
    	printf("Kindly mix %f M(aq) potassium \n",C);
        printf("Kindly mix %f M(l) ZnO2 gas \n",b);
        printf("Your net amount of KCH(oH)Cl powder is %f M(l) only \n",e);
    }else if(C>4 && C<=8){
    	C = C + 0.20;
    	e = (C - 0.40 + C)*2;
    	printf("Kindly mix %f M(aq) potassium \n",C);
        printf("Kindly mix %f M(l) ZnO2 gas \n",b);
        printf("Your net amount of KCH(oH)Cl powder is %f M(l) only \n",e);
    }else if(C>8 && C<=15.5){
    	C = C + 0.30;
    	e = (C - 0.60 + C)*5;
    	printf("Kindly mix %f M(aq) potassium \n",C);
        printf("Kindly mix %f M(l) ZnO2 gas \n",b);
        printf("Your net amount of KCH(oH)Cl powder is %f M(l) only \n",e);
    }else{
    	printf("Syntex error!");
    }
   printf("Please obey the rules, if you don't want to your lab was melted in fire.");
  return 0;
}

#include<stdio.h>
//evenOdd check code by krish
int main(){
  int a, b;
  printf("\nEnter Your Number: ");
  scanf("%d",&a);
  b = a % 2;
  switch(b){
    case 0:
    printf("%d is even",a);
    break;
    case 1:
    printf("%d is odd",a);
    break;
    default:
    printf("Syntex error!");
    break;
  }
 return 0;
}

#include <stdio.h>
//code by krish
int main() {
   int year;
   printf("\nEnter a year: ");
   scanf("%d", &year);
   if (year <= 0){
      printf("%d is a strat time.", year);
   }else if (year % 400 == 0 && year % 4 == 0){
      printf("%d is a leap year.", year);
   }else{
      printf("%d is not a leap year.", year);
   }
  return 0;
}

#include<stdio.h>
//struct code by krish
struct student{
	char name[20];
	int roll;
	int marks;
	}s1;
//input data section	
int main(){
	printf("Enter the student name: ");
	gets(s1.name);
	printf("Enter the roll: ");
	scanf("%d",&s1.roll);
	printf("Enter the marks: ");
	scanf("%d",&s1.marks);
//output data section	
	printf("\nYour student name is: ");
	puts(s1.name);
	printf("Your student roll is: %d\n",s1.roll);
    printf("Your student marks is: %d",s1.marks);
 return 0;
}

#include<stdio.h>
#include<math.h>
//code by krish
int main(){
	int i=1, n, a, result;
	printf("Sum of square values\n");
	printf("Enter the last number: ");
	scanf("%d", &n);
	if(i%3==0){
	do{
		a=a+pow(i,2);
		i++;
	}while(i<=n);
	}else{
		printf("Error!");
	}
	result = a;
	printf("Your value is: %d",result);
return 0;
}

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
//70A3 code by krish
int main(){ 
  int i, j; char name[20];
  printf("\nWhat is your name: ");
  scanf("%s",&name);
  printf("%s, My computer want to say something to you...\n",name);
  for(j=39;j>=-39;j--){ 
    for(i=-20;i<=20;i++){ //or 35unit
if(((abs(j-25)<14&&abs(i)<6)||(abs(j-25)==13&&abs(i)<10))||(pow(abs(i)-9,2)+2*pow(j,2)<=100)||(9*abs(i)-14*j-210<=0&&j<=-3)||(pow(i,2)+2*pow(j+30,2)<=225&&pow(i,2)+2*pow(j+30,2)>=64&&j<-29)||(abs(abs(i)-11.5)<3.5&&abs(j+23)<7)){ 
      printf("*");} 
      else{ 
      printf(" "); 
      } 
    } 
    printf("\n"); 
  } 
 return 0; 
}

#include <stdio.h>
//Diamond by krsh
int main(){
int n,c,k;
  printf("Enter number of rows: \n");
scanf("%d", &n);
 for(k = 1; k <= n; k++){
 for (c = 1; c <= n-k; c++)
 printf(" ");
 for(c = 1; c <= 2*k-1; c++)
 printf("+");
 printf("\n");
 }
for(k = 1;k <= n - 1; k++) {
 for(c = 1; c <= k; c++)
 printf(" ");
 for (c = 1;c <= 2*(n-k)-1;c++)
 printf("+");
 printf("\n");
 }
 return 0;
}



#include <stdio.h>  
//twoNum call assignment by krish
void swap(int *, int *); //prototype of the function   
int main(){  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
    swap(&a,&b);  
    printf("After swapping values in main a = %d, b = %d\n",a,b); // The values of actual parameters do change in call by reference, a = 10, b = 20  
}  
void swap (int *a, int *b){  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",*a,*b); // Formal parameters, a = 20, b = 10   
}

#include<stdio.h>
//pointer assignment by krish
int main(){
	int num = 10;
	printf("Value of variable num is: %d",num);
	printf("Address of variable num is: %p",&num);
 return 0;
}

#include <stdio.h>
//Palindrome hw by krish
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d",&n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    return 0;
}

#include <stdio.h>
//Armstrong hw by krish
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
        remainder = originalNum % 10;  
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
 return 0;
}

#include<stdio.h>
//Krishnamurthy hw by krish
int main(){
  int number, temp, sum, currentDigit, fact;
  printf("Enter an Integer: ");
  scanf("%d",&number);
  temp = number;
  sum = 0;
  while(temp!=0){
    currentDigit = temp % 10;
    fact = 1;
    for(int i=1; i<=currentDigit; i++){
      fact *= i;
    }
    sum += fact;
    temp /= 10;
  }
if(sum == number){
    printf("%d is Krishnamurthy Number.",number);
  }else{
    printf("%d is not a Krishnamurthy Number.",number);
  }
  return 0;
}

#include <stdio.h>
//prime assignment by krish
int main() {
  int n, i, f = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
    f = 1;
  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      f = 1;
      break;
    }
  }
  if (f == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
  return 0;
}

#include<stdio.h>
//grade assignment by krish
int main(){
float grade;
printf("Enter Your number: ");
scanf("%f",&grade);
if(grade < 40){
printf("Sorry, you are fail\n");
}else if((grade <= 49) || (grade >= 40)){
printf("Your grade is D\n");
}else if((grade <= 59) || (grade >= 50)){
printf("Your grade is C\n");
}else if((grade <= 69) || (grade >= 60)){
printf("Your grade is B\n");
}else if((grade <= 79) || (grade >= 70)){
printf("Your grade is A\n");
}else if((grade <= 89) || (grade >= 80)){
printf("Your grade is E\n");
}else if((grade <= 100) || (grade >= 90)){
printf("Your grade is O\n");
}else{
printf("Your number is invalid\n");
}
return 0;
}

 #include <stdio.h>
//positive & negative assignment by krish
int main(){
 float num;
printf("Enter your number: ");
scanf("%f",&num);
if(num >= 1){
printf("Your number is positive value\n");
}else if(num == 0){
printf("0 is 0");
}else{
printf("Your number is negative value\n");
}
return 0;
}

 #include<stdio.h>
//Vote assignment by krish
int main(){
 int age;
printf("Please enter your age: ");
scanf("%i",&age);
if(age >= 18)
printf("Congratulations,You are eligible for vote\n");
else
printf("Sorry,You are not eligible for vote\n");
return 0;
} 

#include <stdio.h>
//Larger then 2num assignment by krish
int main(){
 float num;
printf("Enter your number: ");
scanf("%f",&num);
if(num >= 9)
printf("Your number is two character number\n");
else
printf("Your number is one character number\n");
return 0;
}

#include <stdio.h>
#include <math.h>
//evenodd assignment by krish
int main() {
    int num;
printf("Even and odd value checking by given value\n");
    printf("Enter the value: ");
    scanf("%d", &num);
 if(num % 2 == 0){
 printf("%d is even.", num);
}else{ 
printf("%d is odd.", num);
}
    return 0;
}

#include <stdio.h>
#include <math.h>
//Celsius to Fahrenheit assignment by krish
int main(){
float cels, fahr;
printf("Celsius to Fahrenheit calculation by given temperature\n");
printf("Enter the Celsius value: ");
scanf("%f", &cels);
fahr = (cels * 9/5) + 32;
printf("%.2f degree Celsius = %.2f degree Fahrenheit", cels, fahr);
return 0;
}

#include <stdio.h>
#include <math.h>
//Triangle assignment by krish
int main(){
float base, height, area;
printf("Area of triangle calculation by given base and height value\n");
printf("Enter the height: ");
scanf("%f", &height);
printf("Enter the Base: ");
scanf("%f", &base);
area = 0.5 * (height * base);
printf("Area of triangle: %f\n", area);
return 0;
}

#include <stdio.h> 
#include <math.h>
//Circlearea assignment by Krish
int main(){ 
	float radius,area; 
	printf("Circle area calculation by given radius\n\n");
	printf("Enter the radius: ");  
	scanf("%f", &radius); 
	area = radius * 3.1415926 * radius; 
	printf("The Area value is: %f\n\n", area); 
	return 0; 
}

#include <stdio.h>
//Sum2 assignment by krish
int main(){
float num1;
float num2;
float result;
printf("Sum of any two number calculation\n");
printf("Enter the 1st number: ");
scanf("%f",&num1);
printf("Enter the 2nd number: ");
scanf("%f",&num2);
result = num1+num2;
printf("%f", result);
 return 0;
}

#include<stdio.h>
//hello world assignment by krish
int main(){
	printf("Hello World");
return 0;
}