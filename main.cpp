 #include <stdio.h>
 #include <unistd.h>

 int Ampere_5(int Units_consumed);
 int Ampere_15(int Units_consumed);
 int Ampere_30(int Units_consumed);
 int Ampere_60(int Units_consumed);

 int main(void) {
   int Before_month_reading, After_month_reading, Units_consumed, paid_day, ampere;
   float x, fine_for_delay, discount_for_fast_payment, should_be_paid;
   printf("Enter a Ampere unit\n");
   scanf("%d", &ampere);
   printf("Enter the Before_month-reading:\n");
   scanf("%d",&Before_month_reading);
   printf("Enter the After_month-reading:\n");
   scanf("%d",&After_month_reading);
   printf("Enter the paid_day:\n");
   scanf("%d",&paid_day);

   Units_consumed=After_month_reading-Before_month_reading;

   if(paid_day <= 7){
     if(ampere == 5) { 
         
    
       x = Ampere_5(Units_consumed);
       printf("The Units_consumed is %d\n",Units_consumed);
       sleep(1);
       if(Units_consumed<=20){
           printf("you wii have to pay only Rs 30 moneys for current ampere 5:-");
         }
       else {
       printf("The Payment should you have to pay is RS  %f\n",x);
       sleep(1);
       printf("\033[1;32mYou paid the bill within 7 days, so you will get the discount of 2 percent\033[0m\n");
       sleep(1);
       discount_for_fast_payment = (2.0/100.0) * x;
       printf("The discount for fast payment is RS %.2f\n",discount_for_fast_payment); 
       sleep(1);
       should_be_paid = x - discount_for_fast_payment;
       printf("The Payment should you pay after discount is RS %.2f\n",should_be_paid);
       sleep(1);
       } }
     else if(ampere == 15){
       x = Ampere_15(Units_consumed);
       printf("The Units_consumed is %d\n",Units_consumed);
       sleep(1);
       if(Units_consumed<=20){
            printf("you wii have to pay only Rs 50 moneys for current ampere 15:-");
          }
        else{
       
       printf("The Payment should you have to pay is RS  %f\n",x);
       sleep(1);
       printf("\033[1;32mYou paid the bill within 7 days, so you will get the discount of 2 percent\033[0m\n");
       sleep(1);
       discount_for_fast_payment = (2.0/100.0) * x;
       printf("The discount for fast payment is RS %.2f\n",discount_for_fast_payment);
       sleep(1);
       should_be_paid = x - discount_for_fast_payment;
       printf("The Payment should you pay after discount is RS %.2f\n",should_be_paid);
       sleep(1);
     }
     }
       else if(ampere == 30){
       x = Ampere_30(Units_consumed);
       printf("The Units_consumed is %d\n",Units_consumed);
       sleep(1);
         if(Units_consumed<=20){
             printf("you wii have to pay only Rs 75 moneys for current ampere 30");
           }
         else{
         
       printf("The Payment should you have to pay is RS  %f\n",x);
       sleep(1);
       printf("\033[1;32mYou paid the bill within 7 days, so you will get the discount of 2 percent\033[0m\n");
       sleep(1);
       discount_for_fast_payment = (2.0/100.0) * x;
       printf("The discount for fast payment is RS %.2f\n",discount_for_fast_payment);
       sleep(1);
       should_be_paid = x - discount_for_fast_payment;
       printf("The Payment should you pay after discount is RS %.2f\n",should_be_paid);
       sleep(1);
     }
       }
     else{
       x = Ampere_60(Units_consumed);
       printf("The Units_consumed is %d\n",Units_consumed);
       sleep(1);
       if(Units_consumed<=20){
           printf("you wii have to pay only Rs 125 moneys for current ampere 60");
         }
       else{
       printf("The Payment should you have to pay is RS  %f\n",x);
       sleep(1);
       printf("\033[1;32mYou paid the bill within 7 days, so you will get the discount of 2 percent\033[0m\n");
       sleep(1);
       discount_for_fast_payment = (2.0/100.0) * x;
       printf("The discount for fast payment is RS %.2f\n",discount_for_fast_payment);
       sleep(1);
       should_be_paid = x - discount_for_fast_payment;
       printf("The Payment should you pay after discount is RS %.2f\n",should_be_paid);
       sleep(1);
     }
     }
    }
   else if(paid_day <= 15){
       if(ampere == 5){
           x = Ampere_5(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %.2f\n",x);
         sleep(1);
       }
       else if(ampere == 15){
           x = Ampere_15(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %.2f\n",x);
         sleep(1);
       }
       else if(ampere == 30){
           x = Ampere_30(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %.2f\n",x);
         sleep(1);
       }
       else{
           x = Ampere_60(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %.2f\n",x);
         sleep(1);
       }
   }
   else if(paid_day <= 30){
       if(ampere == 5){
           x = Ampere_5(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 5%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (5.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else if(ampere == 15){
           x = Ampere_15(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 5%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (5.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);  sleep(1);
       }
       else if(ampere == 30){
           x = Ampere_30(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
           printf("The Payment should you have to pay is RS  %f\n",x);
           printf("You paid the bill in %d days, so you will be fined 5%% of the bill\n", paid_day);
           fine_for_delay = (5.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
       }
       else{
           x = Ampere_60(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 5%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (5.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay); 
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
   }
   else if(paid_day <= 40){
       if(ampere == 5){
           x = Ampere_5(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 10%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (10.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);  
         sleep(1);
       }
       else if(ampere == 15){
           x = Ampere_15(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 10%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (10.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else if(ampere == 30){
           x = Ampere_30(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
          sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 10%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (10.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else{
           x = Ampere_60(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 10%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (10.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
   }
   else if(paid_day <= 60){
       if(ampere == 5){
           x = Ampere_5(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else if(ampere == 15){
           x = Ampere_15(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else if(ampere == 30){
           x = Ampere_30(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else{
           x = Ampere_60(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
   }
   else{
       if(ampere == 5){
           x = Ampere_5(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else if(ampere == 15){
           x = Ampere_15(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else if(ampere == 30){
           x = Ampere_30(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
       else{
           x = Ampere_60(Units_consumed);
           printf("The Units_consumed is %d\n",Units_consumed);
         sleep(1);
           printf("The Payment should you have to pay is RS  %f\n",x);
         sleep(1);
           printf("You paid the bill in %d days, so you will be fined 25%% of the bill\n", paid_day);
         sleep(1);
           fine_for_delay = (25.0/100.0) * x;
           printf("The fine for delayed payment is RS %.2f\n", fine_for_delay);
         sleep(1);
           should_be_paid = x + fine_for_delay;
           printf("The Payment should you pay after fine is RS %.2f\n",should_be_paid);
         sleep(1);
       }
     printf("\033[1;31mYour bill is not paid until the 60th day of billing, the electric connection can be disconnected at any time by NEA authorities without any prior notice\033[0m\n");
   }


   return 0;
 }

 // For 5 Ampere
 int Ampere_5(int Units_consumed){
   int Total_bill;

   if(Units_consumed<=20){
     Total_bill=Units_consumed*3 + 30;

   }
   else if (Units_consumed<=30){
     Total_bill= 20*3 + (Units_consumed - 20) * 6.5 + 50;

   }
   else if (Units_consumed<=50){
     Total_bill= 20*3 + 10*6.5 + (Units_consumed - 30) * 8 + 50;

   }
   else if (Units_consumed<=100){
     Total_bill= 20*3 + 10*6.5 + 20*8 + (Units_consumed - 50) * 9.5 + 75;

   }
   else if (Units_consumed<=250){
     Total_bill= 20*3 + 10*6.5 + 20*8 + 50*9.5 + (Units_consumed - 100) * 9.5 + 100;

   }
   else {
     Total_bill= 20*3 + 10*6.5 + 20*8 + 50*9.5 + 100*9.5 + (Units_consumed - 250) * 11 + 150;

   }
   return Total_bill;
 }


 // For 15 Ampere
 int Ampere_15(int Units_consumed){
   int Total_bill;
   if(Units_consumed<=20){
     Total_bill=Units_consumed*4 + 50;

   }
   else if (Units_consumed<=30){
     Total_bill= 20*4 + (Units_consumed - 20) * 6.5 + 75;

   }
   else if (Units_consumed<=50){
     Total_bill= 20*4 + 10*6.5 + (Units_consumed - 30) * 8 + 50;

   }
   else if (Units_consumed<=100){
     Total_bill= 20*4 + 10*6.5 + 20*8 + (Units_consumed - 50) * 9.5 + 100;

   }
   else if (Units_consumed<=250){
     Total_bill= 20*4 + 10*6.5 + 20*8 + 50*9.5 + (Units_consumed - 100) * 9.5 + 125;

   }
   else {
     Total_bill= 20*4 + 10*6.5 + 20*8 + 50*9.5 + 100*9.5 + (Units_consumed - 250) * 11 + 175;

   }
   return Total_bill;
 }

 // For 30 Ampere
 int Ampere_30(int Units_consumed){
   int Total_bill;
   if(Units_consumed<=20){
     Total_bill=Units_consumed*5 + 75;

   }
   else if (Units_consumed<=30){
     Total_bill= 20*5 + (Units_consumed - 20) * 6.5 + 100;

   }
   else if (Units_consumed<=50){
     Total_bill= 20*5 + 10*6.5 + (Units_consumed - 30) * 8 + 100;

   }
   else if (Units_consumed<=100){
     Total_bill= 20*5 + 10*6.5 + 20*8 + (Units_consumed - 50) * 9.5 + 125;

   }
   else if (Units_consumed<=250){
     Total_bill= 20*5 + 10*6.5 + 20*8 + 50*9.5 + (Units_consumed - 100) * 9.5 + 150;

   }
   else {
     Total_bill= 20*5 + 10*6.5 + 20*8 + 50*9.5 + 100*9.5 + (Units_consumed - 250) * 11 + 200;

   }
   return Total_bill;
 }

 // For 60 Ampere
 int Ampere_60(int Units_consumed){
   int Total_bill;
   if(Units_consumed<=20){
     Total_bill=Units_consumed*6 + 125;

   }
   else if (Units_consumed<=30){
     Total_bill= 20*6 + (Units_consumed - 20) * 6.5 + 125;

   }
   else if (Units_consumed<=50){
     Total_bill= 20*6 + 10*6.5 + (Units_consumed - 30) * 8 + 125;

   }
   else if (Units_consumed<=100){
     Total_bill= 20*6 + 10*6.5 + 20*8 + (Units_consumed - 50) * 9.5 + 150;

   }
   else if (Units_consumed<=250){
     Total_bill= 20*6 + 10*6.5 + 20*8 + 50*9.5 + (Units_consumed - 100) * 9.5 + 200;

   }
   else {
     Total_bill= 20*6 + 10*6.5 + 20*8 + 50*9.5 + 100*9.5 + (Units_consumed - 250) * 11 + 250;

   }
   return Total_bill;
 }
