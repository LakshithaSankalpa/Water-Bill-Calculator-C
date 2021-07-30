#include<stdio.h>
#include<stdlib.h>

// function declarations
void display(int unit,int MSC,int result, float total,float VAT,float TBill,float LateBilAmount, int LateBillMonth, float AddCharge, float Net_Total); 
void domestic(int unit, int MSC,int result,float total,float VAT,float TBill,float LateBilAmount, int LateBillMonth, float AddCharge, float Net_Total); 
void samurdhi(int unit, int MSC,int result,float total,float VAT,float TBill,float LateBilAmount, int LateBillMonth, float AddCharge, float Net_Total);

// main function
int main()
{
  int unit;
  int choice;
  float LateBilAmount=0;
  int LateBillMonth=0;
  int MSC=0, result=0;
  float total=0, VAT=0, TBill=0, AddCharge=0, Net_Total=0;
  char ch;

    printf("**********************************************************************************************************\n");
    printf("**                               WELCOME TO WATER BILL GENERATOR                                        **\n");
    printf("**                                      Lakshitha Sankalpa                                              **\n");
    printf("**********************************************************************************************************\n");

    printf("__________________________________________________________________________________________________________\n");
    printf("              *** NATIONAL WATER SUPPLY AND DRAINAGE BOARD LAW, No. 2 OF 1974 ***\n");
    printf("Referance: http://www.waterboard.lk/web/images/contents/consumer_help/water_tariff_e.pdf & Gazette 2012'09'18\n");
    printf("__________________________________________________________________________________________________________\n");
    printf("\n");
    printf("Firstly check your connection category (Domestic, Samurdhi etc.) and go to relevant table \nshown in the web (http://www.waterboard.lk/scripts/Downloads/).\n");
    printf("__________________________________________________________________________________________________________\n\n");

  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("--                                 MONTH WATER BILL CALCULATOR                                          --\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("Enter No. of units                   : ");
    scanf("%d", &unit);
    printf("Enter No. of days                    : Period of 30 days\n"); 
    printf("Enter Previous delay Bill Amount     : Rs."); 
    scanf("%f", &LateBilAmount);
    printf("Enter delay in Bill Month Duration   : "); 
    scanf("%d", &LateBillMonth);
    printf("__________________________________________________________________________________________________________\n");


    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("--                                    SELECT YOUR CATERGORY                                             --\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("\n1.DOMESTIC");
    printf("\n2.SAMURDHI RECEIPIENTS");
    printf("\n3.TENEMENT GARDEN");
    printf("\n4.PUBLIC STAND POSTS AND GARDEN TAPS");
    printf("\n5.SCHOOLS AND RELIGIOUS INSTITUTIONS");
    printf("\n6.COMMERCIAL(Hotels,etc..)");
    printf("\n7.GOVERNMENT HOSPITALS");
    printf("\n8.INDUSTRIES OTHER");
   
    printf("\n9.Exit");
    printf("\n__________________________________________________________________________________________________________");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    printf("__________________________________________________________________________________________________________\n\n");

    switch (choice) {
      case 1:
        domestic(unit, MSC, result,total,VAT,TBill,LateBilAmount,LateBillMonth,AddCharge,Net_Total); 
        break;
      case 2:
        samurdhi(unit, MSC, result,total,VAT,TBill,LateBilAmount,LateBillMonth,AddCharge,Net_Total); 
        break;
      case 3:
        printf("Sorry.. Not avalable for this moment. Thank You.\n");
        system("pause");
        return main();
        break;
      case 4:
        printf("Sorry.. Not avalable for this moment. Thank You.\n");
        system("pause");
        return main();
        break;
      case 5:
        printf("Sorry.. Not avalable for this moment. Thank You.\n");
        system("pause");
        return main();
        break;
      case 6:
        printf("Sorry.. Not avalable for this moment. Thank You.\n");
        system("pause");
        return main();
        break; 
      case 7:
        printf("Sorry.. Not avalable for this moment. Thank You.\n");
        system("pause");
        return main();
        break; 
      case 8:
        printf("Sorry.. Not avalable for this moment. Thank You.\n");
        system("pause");
        return main();
        break; 
      case 9:
       printf("__________________________________________________________________________________________________________\n");
        printf("Thank You.\n");
        printf("__________________________________________________________________________________________________________\n");
        system("pause");
        exit(0);
      default:
      printf("__________________________________________________________________________________________________________\n");
        printf("Invalid input.\n");
        printf("Please enter correct input.\n");
        printf("__________________________________________________________________________________________________________\n");
        system("pause");
        return main();
       
    }
    
    printf("----------------------------------------------------------------------------------------------------------\n");
    
  system("pause");

  return 0;
}


// function for displaying the result
void display(int unit, int MSC,int result, float total,float VAT,float TBill,float LateBilAmount, int LateBillMonth, float AddCharge,float Net_Total)
{
  printf("----------------------------------------------------------------------------------------------------------\n");
  printf("--                                       THIS MONTH BILL                                                --\n");
  printf("----------------------------------------------------------------------------------------------------------\n");
  printf("Monthly service charge applicable for %d units  = Rs.%d \n", unit, MSC);
  printf("Usage Charge of %d units                        = Rs.%d\n",unit,result);
  printf("Total before Tax                                = Rs.%.2f\n",total);
  printf("VAT (12%%)                                      = Rs.%.2f\n",VAT); 
  printf("                                               ______________\n");
  printf("Total Bill in period of 30 days                 = Rs.%.2f\n",TBill); 
  printf("                                               ______________\n");
  printf("**********************************************************************************************************\n");

  printf("----------------------------------------------------------------------------------------------------------\n");
  printf("--                                 TOTAL BILL YOU PAYABALE                                              --\n");
  printf("----------------------------------------------------------------------------------------------------------\n");
  printf("Your Previous delay Bill Amount                           = Rs.%.2f\n", LateBilAmount); 
  printf("Your delay Bill Month Duration                            = %d \n", LateBillMonth); 
  printf("Your delay Bill additional charge of 2.5%% per %d month   = Rs.%.2f\n", LateBillMonth,AddCharge);
  printf("Bill of This Month                                        = Rs.%.2f\n",TBill); 
  printf("                                                         ______________\n");
  printf("NET Total Bill                                            = Rs.%.2f\n",Net_Total); 
  printf("                                                         ______________\n");
  printf("**********************************************************************************************************\n\n");
  system("pause");
  printf("__________________________________________________________________________________________________________\n");
  printf("                                               *Thank You.\n");
  printf("                                           *CopyRight @Lakshith Sankalpa.\n");
  printf("__________________________________________________________________________________________________________\n");
  printf("                                              *HNDIT-Labuduwa\n\n");
 printf("__________________________________________________________________________________________________________\n");

}

//////////////////////*** function for DOMESTIC

void domestic(int unit, int MSC,int result, float total, float VAT,float TBill,float LateBilAmount, int LateBillMonth, float AddCharge, float Net_Total)
{
  //Calculation of MSC, (Monthly Service Charge (Rs.)) & Usage Charge per (Rs./ Unit) as result

        if(unit>0 && unit<=5)
        {
          MSC=50;
          result=(unit*8);
        }
        else if(unit>5 && unit<=10)
        {
          MSC=65;
          result=(5*8)+((unit-5)*11);
        }
        else if(unit>10 && unit<=15)
        {
          MSC=70;
          result=(5*8)+(5*11)+((unit-10)*20);
        }
        else if(unit>15 && unit<=20)
        {
          MSC=80;
          result=(5*8)+(5*11)+(5*20)+((unit-15)*40);
        }
        else if(unit>20 && unit<=25)
        {
          MSC=100;
          result=(5*8)+(5*11)+(5*20)+(5*40)+((unit-20)*58);
        }
        else if(unit>25 && unit<=30)
        {
          MSC=200;
          result=(5*8)+(5*11)+(5*20)+(5*40)+(5*58)+((unit-25)*88);
        }
        else if(unit>30 && unit<=40)
        {
          MSC=400;
          result=(5*8)+(5*11)+(5*20)+(5*40)+(5*58)+(5*88)+((unit-30)*105);
        }
        else if(unit>40 && unit<=50)
        {
          MSC=650;
          result=(5*8)+(5*11)+(5*20)+(5*40)+(5*58)+(5*88)+(10*105)+((unit-40)*120);
        }
        else if(unit>50 && unit<=75)
        {
          MSC=1000;
          result=(5*8)+(5*11)+(5*20)+(5*40)+(5*58)+(5*88)+(10*105)+(10*120)+((unit-50)*130);
        }
        else // if(unit>75)
        {
          MSC=1600;
          result=(5*8)+(5*11)+(5*20)+(5*40)+(5*58)+(5*88)+(10*105)+(10*120)+(25*130)+((unit-75)*140);
        }

  total=MSC+result;
  VAT=((total*12)/100);
  TBill=VAT+total;
  AddCharge=((LateBilAmount*2.5)/100); //*LateBillMonth; //additional charge of 2.5% per month
  Net_Total=AddCharge+LateBilAmount+TBill;
  display(unit, MSC, result, total,VAT,TBill,LateBilAmount,LateBillMonth, AddCharge,Net_Total);
}

//////////////////////*** function for SAMURDHI RECEIPIENTS

void samurdhi(int unit, int MSC,int result, float total, float VAT,float TBill,float LateBilAmount, int LateBillMonth, float AddCharge, float Net_Total)
{
  //Calculation of MSC, (Monthly Service Charge (Rs.)) & Usage Charge per (Rs./ Unit) as result

        if(unit>0 && unit<=5)
        {
          MSC=50;
          result=(unit*5);
        }
        else if(unit>5 && unit<=10)
        {
          MSC=50;
          result=(5*5)+((unit-5)*10);
        }
        else if(unit>10 && unit<=15)
        {
          MSC=50;
          result=(5*5)+(5*10)+((unit-10)*15);
        }
        else if(unit>15 && unit<=20)
        {
          MSC=80;
          result=(5*5)+(5*10)+(5*15)+((unit-15)*40);
        }
        else if(unit>20 && unit<=25)
        {
          MSC=100;
          result=(5*5)+(5*10)+(5*15)+(5*40)+((unit-20)*58);
        }
        else if(unit>25 && unit<=30)
        {
          MSC=200;
          result=(5*5)+(5*10)+(5*15)+(5*40)+(5*58)+((unit-25)*88);
        }
        else if(unit>30 && unit<=40)
        {
          MSC=400;
          result=(5*5)+(5*10)+(5*15)+(5*40)+(5*58)+(5*88)+((unit-30)*105);
        }
        else if(unit>40 && unit<=50)
        {
          MSC=650;
          result=(5*5)+(5*10)+(5*15)+(5*40)+(5*58)+(5*88)+(10*105)+((unit-40)*120);
        }
        else if(unit>50 && unit<=75)
        {
          MSC=1000;
          result=(5*5)+(5*10)+(5*15)+(5*40)+(5*58)+(5*88)+(10*105)+(10*120)+((unit-50)*130);
        }
        else // if(unit>75)
        {
          MSC=1600;
          result=(5*5)+(5*10)+(5*15)+(5*40)+(5*58)+(5*88)+(10*105)+(10*120)+(25*130)+((unit-75)*140);
        }

  total=MSC+result;
  VAT=((total*12)/100);
  TBill=VAT+total;
  AddCharge=((LateBilAmount*2.5)/100); //*LateBillMonth; //additional charge of 2.5% per month
  Net_Total=AddCharge+LateBilAmount+TBill;
  display(unit, MSC, result, total,VAT,TBill,LateBilAmount,LateBillMonth, AddCharge,Net_Total);
}
