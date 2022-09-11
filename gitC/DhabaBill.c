#include<stdio.h>
#include<math.h>
//code by krish(2300012011)
int main(){
	int bill=1, pay=0;
	char dish, flavor;
	printf("Welcome to Yami Tami de Dhaba\n");
	printf("Our menu-----\n Biriyani            Roll           Katlet\nEgg Biriyani,       Eggroll,       Egg Katlet,\nMattun Biriyani,    Mattunroll,    Mattun Katlet,\nChicken Biriyani,   Chickenroll,   Chicken Katlet,\nDum Biriyani,       Aluroll,       Fish Katlet,\nPannier Biriyani,   Pannierroll\nNim Biriyani,\nFish Biriyani\n\n");
	printf("---------------------------------------\n");
	printf("Order your dish only one: ");
	scanf("%s",&dish);
	switch(dish){
		case 'B':
		case 'b':
			printf("Which flavoir you want: ");
			scanf("%s",&flavor);
	 switch(flavor){
		case 'E':
		case 'e':
		   printf("You choose 1 plate Egg Biriyani\n price is only $180/-\n");
		   printf("Gst is 5% \n");
		   bill = 180 + (180 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'M':
		case 'm':
		   printf("You choose 1 plate Mattun Biriyani\n price is only $320/-\n");
		   printf("Gst is 8% \n");
		   bill = 320 + (320 * (8/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 15% \n");
		   pay = bill - (bill * (15/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'C':
		case 'c':
		   printf("You choose 1 plate Chicken Biriyani\n price is only $250/-\n");
		   printf("Gst is 6% \n");
		   bill = 250 + (250 * (6/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10%  \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'D':
		case 'd':
		   printf("You choose 1 plate Dum Biriyani\n price is only $150/-\n");
		   printf("Gst is 5% \n");
		   bill = 150 + (150 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'P':
		case 'p':
		   printf("You choose 1 plate Pannier Biriyani\n price is only $280/-\n");
		   printf("Gst is 7% \n");
		   bill = 280 + (280 * (7/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 12% \n");
		   pay = bill - (bill * (12/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'N':
		case 'n':
		   printf("You choose 1 plate Nim Biriyani\n price is only $380/-\n");
		   printf("Gst is 5%\n");
		   bill = 380 + (380 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 8% \n");
		   pay = bill - (bill * (8/100));
		   printf("Kindly pay us = %d \n",pay);
		  break;
		case 'F':
		case 'f':
		   printf("You choose 1 plate Fish Biriyani\n price is only $250/-\n");
		   printf("Gst is 5% \n");
		   bill = 250 + (250 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		default:
		  printf("Invalid flavior\n");
		  return 0;
	 }
	 break;
	 case 'R':
	 case 'r':
	 	printf("Which flavoir you want: ");
		scanf("%s",&flavor);
	 switch(flavor){
		case 'E':
		case 'e':
		   printf("You choose 1 plate Egg Roll\n price is only $150/-\n");
		   printf("Gst is 5% \n");
		   bill = 150 + (150 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'M':
		case 'm':
		   printf("You choose 1 plate Mattun Roll\n price is only $200/-\n");
		   printf("Gst is 8% \n");
		   bill = 200 + (200 * (8/100));
		   printf("Your total bill is = %d \n",bill);
		   printf("Offer cut of is 15% \n");
		   pay = bill - (bill * (15/100));
		   printf("Kindly pay us = %d \n",pay);
		  break;
		case 'C':
		case 'c':
		   printf("You choose 1 plate Chicken Roll\n price is only $180/-\n");
		   printf("Gst is 6% \n");
		   bill = 180 + (180 * (6/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'A':
		case 'a':
		   printf("You choose 1 plate Alu Roll\n price is only $120/-\n");
		   printf("Gst is 5% \n");
		   bill = 120 + (120 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'P':
		case 'p':
		   printf("You choose 1 plate Pannier Roll\n price is only $200/-\n");
		   printf("Gst is 5% \n");
		   bill = 200 + (200 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		default:
		  printf("Invalid flavior\n");
		  return 0;
	 }
		break;
	 case 'K':
	 case 'k':
	 	printf("Which flavoir you want: ");
		scanf("%s",&flavor);
	 switch(flavor){
		case 'E':
		case 'e':
		   printf("You choose 1 plate Egg Katlet\n price is only $100/-\n");
		   printf("Gst is 5% \n");
		   bill = 100 + (100 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'M':
		case 'm':
		   printf("You choose 1 plate Mattun Katlet\n price is only $200/-\n");
		   printf("Gst is 8% \n");
		   bill = 200 + (200 * (8/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10% \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'C':
		case 'c':
		   printf("You choose 1 plate Chicken Katlet\n price is only $150/-\n");
		   printf("Gst is 5% \n");
		   bill = 150 + (150 * (5/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10%  \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		case 'F':
		case 'f':
		   printf("You choose 1 plate Fish Katlet\n price is only $150/-\n");
		   printf("Gst is 6% \n");
		   bill = 150 + (150 * (6/100));
		   printf("Your total bill is = %d\n",bill);
		   printf("Offer cut of is 10 0/0 \n");
		   pay = bill - (bill * (10/100));
		   printf("Kindly pay us = %d\n",pay);
		  break;
		default:
		  printf("Invalid flavior\n");
		  return 0;
	 }
	 break;
	 case '0':
	 	printf("Your order is ready in:\n https://google.com/?&search=https://kidkrishkode.com/c-codes/");
	 	return 0;
	 break;
	 default:
		printf("What you choose user('_')\n");
		return 0;
		
   }
	
	printf("Pick your order in our carnival window\n");
	printf("\n");
	printf("\tVisit us again\n");
	return 0;
}
