#include<stdio.h>
#include<conio.h>
#include<math.h>

void simple_math()
{
    system ("cls");
    printf("\n\tCalculate simple problem\n\n\n");
    float n1;
    float n2;
    char op;
    float result;

    printf("\tFirst number:\t");
    scanf("%f",&n1);

    printf("\tSimbol:\t\t");
    scanf(" %c",&op);

    printf("\tSecond number:\t");
    scanf("%f",&n2);

    switch(op)
    {
    case '+':
        result=n1+n2;
        printf("\n\tResult= %.2f", result);
        break;
    case '-':
        result=n1-n2;
        printf("\n\tResult= %.2f", result);
        break;
    case '*':
        result=n1*n2;
        printf("\n\tResult= %.2f", result);
        break;
    case '/':
        result=n1/n2;
        printf("\n\tResult= %.2f", result);
    }
    int back;
    printf("\n\n\n\tEnter 1 for main menu and 2 for again\n");

    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        main();
    }
    else if(back==2)
    {
        simple_math();
    }
    else
    {
        printf("\n\tSomething went wrong!");
    }
}
void find_age()
{
    system ("cls");
    int d1,m1,y1,d2,m2,y2,a1,a2,a3;
    printf("\n\tAge Calculator\n\n");

    printf("\n\tEnter your birth day:   ");
    scanf("%d",&d1);
    printf("\n\tEnter your birth month: ");
    scanf("%d",&m1);
    printf("\n\tEnter your birth year:  ");
    scanf("%d",&y1);

    printf("\n\n\tEnter current day:   ");
    scanf("%d",&d2);
    printf("\n\tEnter current month: ");
    scanf("%d",&m2);
    printf("\n\tEnter current year:  ");
    scanf("%d",&y2);

    if((d1>31||d1<1)||(d2>31||d2<1)||(m1<1||m1>12)||(m2<1||m2>12)||(y1<0||y2<0))
    {
        find_age();
    }
    else
    {
        a3=y2-y1;
            if(d2>=d1)
           {
              a1=d2-d1;
           }
            else
            {
              m2=m2-1;
              d2=d2+30;
              a1=d2-d1;
            }
        if(m2>=m1)
        {
            a2=m2-m1;
        }
        else
        {
            a3=a3-1;
            m2=m2+12;
            a2=m2-m1;
        }
    }
    printf("\n\n\tYour age is %d year %d month %d day.",a3,a2,a1);
    printf("\n\n\tEnter 1 for main menu or 2 for again\n");

    int back;
    printf("\n\t");
    scanf("%d",&back);
          if(back==1)
         {
           main();
         }
          else if(back==2)
         {
           find_age();
         }
}
void get_series()
{
    system ("cls");
    int i,j,n,l;

    printf("\n\tSeries Calculator\n\n");

    printf("\n\tEnter the number: ");
    scanf("%d",&n);

    printf("\n\tEnter the limit: ");
    scanf("%d",&l);

    printf("\n\tSeries of %d\n",n);
    printf("\t----------------\n");
    for(j=1; j<=l; j++)
    {
        printf("\n\t%d x %d = %d\n",n,j,n*j);
    }
        printf("\n\n\tEnter 1 for main menu or anything for again\n");

    int back;
    printf("\n\t");
    scanf("%d",&back);
         if(back==1)
            {
          main();
            }
         else
            {
           //printf("\n\tSomething went wrong!");
            get_series();
            }
}
void get_cgpa()
{
    system ("cls");
    float g1,g2,g3,g4,g5,g6,g7,g8,cr1,cr2,cr3,cr4,cr5,cr6,cr7,cr8,cr,cgpa;
    printf("\n\tCGPA Calculator\n\n");

    printf("\n\tCourse 1 Credit: ");
    scanf("%f",&cr1);
    printf("\tCourse 1 grade: ");
    scanf("%f",&g1);

    printf("\n\tCourse 2 Credit: ");
    scanf("%f",&cr2);
    printf("\tCourse 2 grade: ");
    scanf("%f",&g2);

    printf("\n\tCourse 3 Credit: ");
    scanf("%f",&cr3);
    printf("\tCourse 3 grade: ");
    scanf("%f",&g3);

    printf("\n\tCourse 4 Credit: ");
    scanf("%f",&cr4);
    printf("\tCourse 4 grade: ");
    scanf("%f",&g4);

    printf("\n\tCourse 5 Credit: ");
    scanf("%f",&cr5);
    printf("\tCourse 5 grade: ");
    scanf("%f",&g5);

    printf("\n\tCourse 6 Credit: ");
    scanf("%f",&cr6);
    printf("\tCourse 6 grade: ");
    scanf("%f",&g6);

    /*printf("\n\tCourse 7 Credit: ");
    scanf("%f",&cr7);
    printf("\tCourse 7 grade: ");
    scanf("%f",&g7);

    printf("\n\tCourse 8 Credit: ");
    scanf("%f",&cr8);
    printf("\tCourse 8 grade: ");
    scanf("%f",&g8);*/

    cr = cr1+cr2+cr3+cr4+cr5+cr6+cr7+cr8;
    cgpa = ((g1*cr1)+(g2*cr2)+(g3*cr3)+(g4*cr4)+(g5*cr5)+(g6*cr6)+(g7*cr7)+(g8*cr8))/cr;

    printf("\n\tYou CGPA: %.2f\n",cgpa);

    printf("\n\n\tEnter 1 for main menu or anything for again\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        main();
    }
    /*else if(back==2)
    {
        get_cgpa();
    }*/
    else
    {
        printf("\n\tSomething went wrong!");
    }
}
void find_temp()
{
        system ("cls");
        int n;
        float C,F,K;

        printf("\n\tTemperature Calculator\n\n");
        printf("\n\tPress 1 for Celcius scale to other.\n");
        printf("\t___________\n");
        printf("\n\tPress 2 for Fahrenheit scale to other.\n");
        printf("\t___________\n");
        printf("\n\tPress 3 for Kelvin scale to other.\n");
        printf("\t___________\n");
        printf("\n\tPress 4 for main menu\n");
        printf("\t___________\n");
        printf("\n\tEnter operation: ");
        scanf("%d",&n);

        if(n==1)
        {
            system ("cls");
            printf("\n\tSwitch from Celcius scale.\n\n");
            printf("\n\tEnter temperature in Celcius scale: ");
            scanf("%f",&C);

            F = 1.8 * C + 32;
            K = 273.15 + C;

            printf("\n\tFahrenheit scale: %.2f\n", F);
            printf("\n\tKelvin scale: %.2f\n", K);
        }
        else if(n==2)
        {
            system ("cls");
            printf("\n\tSwitch from Fahrenheit scale.\n\n");
            printf("\n\tEnter temperature in Fahrenheit scale: ");
            scanf("%f",&F);

            C = .55 * (F - 32);
            K = .55 * (F - 32) + 273;

            printf("\n\tTemparature in Celcius scale: %.2f\n", C);
            printf("\n\tTemparature in Kelvin scale: %.2f\n", K);

        }
        else if(n==3)
        {
            system ("cls");
            printf("\n\tSwitch from Kelvin scale.\n\n");
            printf("\n\tEnter temperature in Kelvin scale: ");
            scanf("%f",&F);

            C = K - 273;
            F = .55 * (K - 273) + 32;

            printf("\n\tTemparature in Celcius scale: %.2f\n", C);
            printf("\n\tTemparature in Fahrenheit scale: %.2f\n", F);
        }
        else if(n==4){
            system ("cls");
            main();
        }
        else
        {
            find_temp();
        }
    printf("\n\n\tEnter 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        find_temp();
    }
}
void find_bmi()
{
     system ("cls");
     float h,bmi;
     int w;
    printf("\n\tBMI Calculator\n\n");
    printf("\n\tEnter height in meter: ");
    scanf("%f",&h);

    printf("\n\tEnter weight in kg: ");
    scanf("%d", &w);

    bmi = w / (h * h);

    printf("\n\n\tYour Body Mass Index is %.2f\n\n", bmi);

   if(bmi<=18.5)
   {
       printf("\tUnderweight.\n");
   }
   else if(18.5<bmi<24.9)
   {
       printf("\tHealthy.");
   }
   else if(25<=bmi<29.9)
   {
       printf("\tOverweight.");
   }
   else if(30>=bmi<34.9)
   {
       printf("\tObese.");
   }
   else if(35>bmi)
   {
       printf("\tExtremely Obese.");
   }
     printf("\n\n");
    printf("\n\tPress 1 for main menu or anything for again\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        find_bmi();
    }
}
void year_to()
{
        system ("cls");
        int x,yr;
        printf("\n\tCalculate Year to\n");
        printf("\n\n\tPress 1 for Year to Week.\n");
        printf("\n\tPress 2 for Year to Day.\n");
        printf("\n\tPress 3 for Year to Hour.\n");
        printf("\n\tPress 4 for Year to Minute.\n");
        printf("\n\tPress 5 for Year to Second.\n");
        printf("\n\n\tPress 6 for back\n");

        printf("\n\n\tPress again: ");
        scanf("%d",&x);

        if(x==1)
        {
            system ("cls");
            printf("\n\tCalculate Year to\n\n");
            printf("\n\tYear: ");
            scanf("%d",&yr);

            printf("\n\t%d Weeks.",yr*52);
            getch();
        }
        else if(x==2)
        {
            system ("cls");
            printf("\n\tCalculate Year to\n\n");
            printf("\n\tYear: ");
            scanf("%d",&yr);

            printf("\n\t%.d Days.",yr*365);
            getch();
        }
        else if(x==3)
        {
            system ("cls");
            printf("\n\tCalculate Year to\n\n");
            printf("\n\tYear: ");
            scanf("%d",&yr);

            printf("\n\t%d Hours.",yr*8760);
            getch();
        }
        else if(x==4)
        {
            system ("cls");
            printf("\n\tCalculate Year to\n\n");
            printf("\n\tYear: ");
            scanf("%d",&yr);

            printf("\n\t%d Minutes.",yr*525600);
            getch();
        }
        else if(x==5)
        {
            system ("cls");
            printf("\n\tCalculate Year to\n\n");
            printf("\n\tYear: ");
            scanf("%d",&yr);

            printf("\n\t%d Seconds.",yr*31536000);
            getch();
        }
        else if(x==6)
        {
        system ("cls");
        time_switch();
        }
        else
        {
            //printf("\n\n\tWrong input!!");
            year_to();
        }
         printf("\n\n\tEnter 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        time_switch();
    }
}
void week_to()
{

        system ("cls");
        int x,wk;
        printf("\n\tCalculate Week to\n\n");
        printf("\n\tPress 1 for Week to Year.\n");
        printf("\n\tPress 2 for Week to Day.\n");
        printf("\n\tPress 3 for Week to Hour.\n");
        printf("\n\tPress 4 for Week to Minute.\n");
        printf("\n\tPress 5 for Week to Second.\n");
        printf("\n\n\tPress 6 for back\n");

        printf("\n\n\tPress again: ");
        scanf("%d",&x);

         if(x==1)
        {
            float week;
            system ("cls");
            printf("\n\tCalculate Week to\n\n");
            printf("\n\tWeek: ");
            scanf("%f",&week);

            printf("\n\t%.4f Years.",week/52);
            getch();
        }
        else if(x==2)
        {
            system ("cls");
            printf("\n\tCalculate Week to\n\n");
            printf("\n\tWeek: ");
            scanf("%d",&wk);

            printf("\n\t%d Days.",wk*7);
            getch();
        }
        else if(x==3)
        {
            system ("cls");
            printf("\n\tCalculate Week to\n\n");
            printf("\n\tWeek: ");
            scanf("%d",&wk);

            printf("\n\t%d Hours.",wk*168);
            getch();
        }
        else if(x==4)
        {
            system ("cls");
            printf("\n\tCalculate Week to\n\n");
            printf("\n\tWeek: ");
            scanf("%d",&wk);

            printf("\n\t%d Minutes.",wk*10080);
            getch();
        }
        else if(x==5)
        {
            system ("cls");
            printf("\n\tCalculate Week to\n\n");
            printf("\n\tWeek: ");
            scanf("%d",&wk);

            printf("\n\t%d Seconds.",wk*604800);
            getch();
        }
        else if(x==6)
        {
        system ("cls");
        time_switch();
        }
         else
        {
            //printf("\n\nWrong input!!");
            week_to();
        }
         printf("\n\n\tPress 1 for main or anything for back\n");
    int back;
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        time_switch();
    }
}
void day_to()
{
        system ("cls");
        int x,d;
        printf("\n\tCalculate Day to\n\n");
        printf("\n\tPress 1 for Day to Year.\n");
        printf("\n\tPress 2 for Day to Week.\n");
        printf("\n\tPress 3 for Day to Hour.\n");
        printf("\n\tPress 4 for Day to Minute.\n");
        printf("\n\tPress 5 for Day to Second.\n");
        printf("\n\n\tPress 6 for back\n");

        printf("\n\n\tPress again: ");
        scanf("%d",&x);

         if(x==1)
        {
            float d;
            system ("cls");
            printf("\n\tCalculate Day to\n\n");
            printf("\n\tDay: ");
            scanf("%f",&d);

            printf("\n\t%.6f Years.",d/365);
            getch();
        }
        else if(x==2)
        {
            float d;
            system ("cls");
            printf("\n\tCalculate Day to\n\n");
            printf("\n\tDay: ");
            scanf("%f",&d);

            printf("\n\t%.2f Weeks.",d/7);
            getch();
        }
        else if(x==3)
        {
            system ("cls");
            printf("\n\tCalculate Day to\n\n");
            printf("\n\tDay: ");
            scanf("%d",&d);

            printf("\n\t%d Hours.",d*24);
            getch();
        }
        else if(x==4)
        {
            system ("cls");
            printf("\n\tCalculate Day to\n\n");
            printf("\n\tDay: ");
            scanf("%d",&d);

            printf("\n\t%d Minutes.",d*1440);
            getch();
        }
        else if(x==5)
        {
            system ("cls");
            printf("\n\tCalculate Day to\n\n");
            printf("\n\tDay: ");
            scanf("%d",&d);

            printf("\n\t%d Seconds.",d*86400);
            getch();
        }
        else if(x==6)
        {
        system ("cls");
        time_switch();
        }
         else
        {
            //printf("\n\n\tWrong input!!");
            day_to();
        }
         printf("\n\n\tPress 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        time_switch();
    }
}
void hour_to()
{
        system ("cls");
        int x,hr;
        printf("\n\tCalculate Hour to\n\n");
        printf("\n\tPress 1 for Hour to Year.\n");
        printf("\n\tPress 2 for Hour to week.\n");
        printf("\n\tPress 3 for Hour to Day.\n");
        printf("\n\tPress 4 for Hour to Minute.\n");
        printf("\n\tPress 5 for Hour to Second.\n");
        printf("\n\n\tPress 6 for back\n");

        printf("\n\n\tPress again: ");
        scanf("%d",&x);

         if(x==1)
        {
            float hr;
            system ("cls");
            printf("\n\tCalculate Hour to\n\n");
            printf("\n\tHour: ");
            scanf("%f",&hr);

            printf("\n\t%.6f Years.",hr/8750);
            getch();
        }
        else if(x==2)
        {
            float hr;
            system ("cls");
            printf("\n\tCalculate Hour to\n\n");
            printf("\n\tHour: ");
            scanf("%f",&hr);

            printf("\n\t%..5f Weeks.",hr/168);
            getch();
        }
        else if(x==3)
        {
            float hr;
            system ("cls");
            printf("\n\tCalculate Hour to\n\n");
            printf("\n\tHour: ");
            scanf("%f",&hr);

            printf("\n\t%.3f Days.",hr/24);
            getch();
        }
        else if(x==4)
        {
            system ("cls");
            printf("\n\tCalculate Hour to\n\n");
            printf("\n\tHour: ");
            scanf("%d",&hr);

            printf("\n\t%d Minutes.",hr*60);
            getch();
        }
        else if(x==5)
        {
            system ("cls");
            printf("\n\tCalculate Hour to\n\n");
            printf("\n\tHour: ");
            scanf("%d",&hr);

            printf("\n\t%d Seconds.",hr*3600);
            getch();
        }
        else if(x==6)
        {
        system ("cls");
        time_switch();
        }
         else
        {
            //printf("\n\n\tWrong input!!");
            hour_to();
        }
         printf("\n\n\tPress 1 for main or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        time_switch();
    }
}
void minute_to()
{
        system ("cls");
        int x,min;
        printf("\n\tCalculate Minute to\n\n");
        printf("\n\tPress 1 for Minute to Year.\n");
        printf("\n\tPress 2 for Minute to Week.\n");
        printf("\n\tPress 3 for Minute to Day.\n");
        printf("\n\tPress 4 for Minute to Hour.\n");
        printf("\n\tPress 5 for Minute to Second.\n");
        printf("\n\n\tPress 6 for back\n");

        printf("\n\n\tPress again: ");
        scanf("%d",&x);

         if(x==1)
        {
            float min;
            system ("cls");
            printf("\n\tCalculate Minute to\n\n");
            printf("\n\tMinute: ");
            scanf("%f",&min);

            printf("\n\t%..10f Years.",min/525600);
            getch();
        }
        else if(x==2)
        {
            float min;
            system ("cls");
            printf("\n\tCalculate Minute to\n\n");
            printf("\n\tMinute: ");
            scanf("%f",&min);

            printf("\n\t%.10f Weeks.",min/10080);
            getch();
        }
        else if(x==3)
        {
            float min;
            system ("cls");
            printf("\n\tCalculate Minute to\n\n");
            printf("\n\tMinute: ");
            scanf("%f",&min);

            printf("\n\t%.5f Days.",min/1440);
            getch();
        }
        else if(x==4)
        {
            float min;
            system ("cls");
            printf("\n\tCalculate Minute to\n\n");
            printf("\n\tMinute: ");
            scanf("%f",&min);

            printf("\n\t%.2f Hours.",min/60);
            getch();
        }
        else if(x==5)
        {
            system ("cls");
            printf("\n\tCalculate Minute to\n\n");
            printf("\n\tMinutes: ");
            scanf("%d",&min);

            printf("\n\t%d Seconds.",min*60);
            getch();
        }
        else if(x==6)
        {
        system ("cls");
        time_switch();
        }
         else
        {
            //printf("\n\n\tWrong input!!");
            minute_to();
        }
         printf("\n\n\tPress 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        time_switch();
    }
}
void second_to()
{
        system ("cls");
        int x,sec;
        printf("\n\tCalculate Second to\n\n");
        printf("\n\tPress 1 for Second to Year.\n");
        printf("\n\tPress 2 for Second to Week.\n");
        printf("\n\tPress 3 for Second to Day.\n");
        printf("\n\tPress 4 for Second to Hour.\n");
        printf("\n\tPress 5 for Second to Minute.\n");
        printf("\n\n\tPress 6 for back\n");

        printf("\n\n\tPress again: ");
        scanf("%d",&x);

         if(x==1)
        {
            float sec;
            system ("cls");
            printf("\n\tCalculate Second to\n\n");
            printf("\n\tSecond: ");
            scanf("%f",&sec);

            printf("\n\t%.f Years.",sec/31536000);
            getch();
        }
        else if(x==2)
        {
            float sec;
            system ("cls");
            printf("\n\tCalculate Second to\n\n");
            printf("\n\tSecond: ");
            scanf("%f",sec);

            printf("\n\t%.f Weeks.",sec/604800);
            getch();
        }
        else if(x==3)
        {
            float sec;
            system ("cls");
            printf("\n\tCalculate Second to\n\n");
            printf("\n\tSecond: ");
            scanf("%f",&sec);

            printf("\n\t%f Days.",sec/86400);
            getch();
        }
        else if(x==4)
        {
            float sec;
            system ("cls");
            printf("\n\tCalculate Second to\n\n");
            printf("\n\tSecond: ");
            scanf("%f",&sec);

            printf("\n\t%f Hours.",sec/3600);
            getch();
        }
        else if(x==5)
        {
            float sec;
            system ("cls");
            printf("\n\tCalculate Second to\n\n");
            printf("\n\tSecond: ");
            scanf("%f",&sec);

            printf("\n\t%f Minutes.",sec/60);
            getch();
        }
        else if(x==6)
        {
        system ("cls");
        time_switch();
        }
         else
        {
            //printf("\n\n\tWrong input!!");
            second_to();
        }
         printf("\n\n\tPress 1 for main or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
        {
        system ("cls");
        time_switch();
        }
}
void get_discount()
{
      system ("cls");
      float price,dis,fp;
    printf("\n\tDiscount Calculator\n\n");
    printf("\n\tOriginal price: ");
    scanf("%f",&price);

    printf("\n\tDiscount: ");
    scanf("%f",&dis);

    fp = price*((100-dis)/100);

    printf("\n\tFinal price: %.2f\n",fp);
    printf("\n\tYou have save %.2f",price-fp);
    printf("\n\n\n\tPress 1 for main menu or anything for again\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        get_discount();
    }
}
void terabyte_to()
{
        system("cls");
        int z,tb;
        printf("\n\tCalculate Terabyte to\n\n");
        printf("\n\tPress 1 Terabyte to Gigabyte\n");
        printf("\n\tPress 2 Terabyte to Megabyte\n");
        printf("\n\tPress 3 Terabyte to Kilobyte\n");
        printf("\n\tPress 4 Terabyte to Byte\n");
        printf("\n\n\tPress 5 for back\n");
        printf("\n\n\tPress again: ");
        scanf("%d",&z);

        if(z==1)
        {
            system("cls");
            printf("\n\tCalculate Terabyte to\n\n");
            printf("\n\tTerabyte: ");
            scanf("%d",&tb);
            printf("\n\tGigabyte: %d",tb*1024);
            getch();
        }
         else if(z==2)
        {
            system("cls");
            printf("\n\tCalculate Terabyte to\n\n");
            printf("\n\tTerabyte: ");
            scanf("%d",&tb);
            printf("\n\tMegabyte: %d",tb*1048576);
            getch();
        }
         else if(z==3)
        {
            system("cls");
            printf("\n\tCalculate Terabyte to\n\n");
            printf("\n\tTerabyte: ");
            scanf("%d",&tb);
            printf("\n\tKilobyte: %d",tb*1.07374182e9);
            getch();
        }
         else if(z==4)
        {
            system("cls");
            printf("\n\tCalculate Terabyte to\n\n");
            printf("\n\tTerabyte: ");
            scanf("%d",&tb);
            printf("\n\tByte: %d",tb*1.09951163e12);
            getch();
        }
        else if(z==5)
        {
            data_switch();
        }
         else
        {
            //printf("\n\n\tWrong input!!");
            terabyte_to();
        }
         printf("\n\n\tPress 1 for main and 2 for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else if(back==2)
    {
        system ("cls");
        data_switch();
    }
}
void gigabyte_to()
{
        system("cls");
        int z;
        printf("\n\tCalculate Gigabyte to\n\n");
        printf("\n\tPress 1 Gigabyte to Terabyte\n");
        printf("\n\tPress 2 Gigabyte to Megabyte\n");
        printf("\n\tPress 3 Gigabyte to Kilobyte\n");
        printf("\n\tPress 4 Gigabyte to Byte\n");
         printf("\n\n\tPress 5 for back\n");
        printf("\n\n\tPress again: ");
        scanf("%d",&z);

        if(z==1)
        {
            float g;
            system("cls");
            printf("\n\tCalculate Gigabyte to\n\n");
            printf("\n\tGigabyte: ");
            scanf("%f",&g);
            printf("\n\tTerabyte: %f",g/1024);
            getch();
        }
         else if(z==2)
        {
            int gb;
            system("cls");
            printf("\n\tCalculate Gigabyte to\n\n");
            printf("\n\tGigabyte: ");
            scanf("%d",&gb);
            printf("\n\tMegabyte: %d",gb*1024);
            getch();
        }
         else if(z==3)
        {
            int gb;
            system("cls");
            printf("\n\tCalculate Gigabyte to\n\n");
            printf("\n\tGigabyte: ");
            scanf("%d",&gb);
            printf("\n\tKilobyte: %d",gb*1048576);
            getch();
        }
         else if(z==4)
        {
            int gb;
            system("cls");
            printf("\n\tCalculate Gigabyte to\n\n");
            printf("\n\tGigabyte: ");
            scanf("%d",&gb);
            printf("\n\tByte: %d",gb*1.07374182e9);
            getch();
        }
        else if(z==5)
        {
            data_switch();
        }
         else
        {
            //printf("\n\n\tWrong input!!");
            gigabyte_to();
        }
         printf("\n\n\tPress 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        data_switch();
    }
}
void megabyte_to()
{
        system("cls");
        int z,mb;
        printf("\n\tCalculate Megabyte to\n\n");
        printf("\n\tPress 1 Megabyte to Terabyte\n");
        printf("\n\tPress 2 Megabyte to Gigabyte\n");
        printf("\n\tPress 3 Megabyte to Kilobyte\n");
        printf("\n\tPress 4 Megabyte to Byte\n");
        printf("\n\n\tPress 5 for back\n");
        printf("\n\n\tPress again: ");
        scanf("%d",&z);

        if(z==1)
        {
            float m;
            system("cls");
            printf("\n\tCalculate Megabyte to\n\n");
            printf("\n\tMegabyte: ");
            scanf("%f",&m);
            printf("\n\tTerabyte: %f",m/1048576);
            getch();
        }
         else if(z==2)
        {
            float m;
            system("cls");
            printf("\n\tCalculate Megabyte to\n\n");
            printf("\n\tMegabyte: ");
            scanf("%f",&m);
            printf("\n\tGigabyte: %d",m/1024);
            getch();
        }
         else if(z==3)
        {
            system("cls");
            printf("\n\tCalculate Megabyte to\n\n");
            printf("\n\tMegabyte: ");
            scanf("%d",&mb);
            printf("\n\tKilobyte: %d",mb*1024);
            getch();
        }
         else if(z==4)
        {
            system("cls");
            printf("\n\tCalculate Megabyte to\n\n");
            printf("\n\tMegabyte: ");
            scanf("%d",&mb);
            printf("\n\tByte: %d",mb*1024*1024);
            getch();
        }
        else if(z==5)
        {
            data_switch();
        }
         else
        {
            //printf("\n\n\tWrong input!!");
            megabyte_to();
        }
         printf("\n\n\tPress 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        data_switch();
    }
}
void kilobyte_to()
{
        system("cls");
        int z,kb;
        printf("\n\tCalculate Kilobyte to\n\n");
        printf("\n\tPress 1 Kilbyte to Terabyte\n");
        printf("\n\tPress 2 Kilobyte to Gigabyte\n");
        printf("\n\tPress 3 Kilobyte to Megabyte\n");
        printf("\n\tPress 4 Kilobyte to Byte\n");
        printf("\n\n\tPress 5 for back\n");
        printf("\n\n\tPress again: ");
        scanf("%d",&z);

        if(z==1)
        {
            float k;
            system("cls");
            printf("\n\tCalculate Kilobyte to\n\n");
            printf("\n\tKilobyte: ");
            scanf("%f",&k);
            printf("\n\tTerabyte: %f",k/1.07374182e9);
            getch();
        }
         else if(z==2)
        {
            float k;
            system("cls");
            printf("\n\tCalculate Kilobyte to\n\n");
            printf("\n\tKilobyte: ");
            scanf("%f",&k);
            printf("\n\tGigabyte: %d",k/1048576);
            getch();
        }
         else if(z==3)
        {
            float k;
            system("cls");
            printf("\n\tCalculate Kilobyte to\n\n");
            printf("\n\tKilobyte: ");
            scanf("%f",&k);
            printf("\n\tMegabyte: %f",k/1024);
            getch();
        }
         else if(z==4)
        {
            system("cls");
            printf("\n\tCalculate Kilobyte to\n\n");
            printf("\n\tKilobyte: ");
            scanf("%d",&kb);
            printf("\n\tByte: %d",kb*1024);
            getch();
        }
        else if(z==5)
        {
            data_switch();
        }
        else
        {
            //printf("\n\n\tWrong input!!");
            kilobyte_to();
        }
         printf("\n\n\tPress 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        data_switch();
    }
}
void byte_to()
{
        system("cls");
        int z,b;
        printf("\n\tCalculate Byte to\n\n");
        printf("\n\tPress 1 Byte to Terabyte\n");
        printf("\n\tPress 2 Byte to Gigabyte\n");
        printf("\n\tPress 3 Byte to Megabyte\n");
        printf("\n\tPress 4 Byte to Kilobyte\n");
        printf("\n\n\tPress 5 for back\n");
        printf("\n\n\tPress again: ");
        scanf("%d",&z);

        if(z==1)
        {
            float by;
            system("cls");
            printf("\n\tCalculate Byte to\n\n");
            printf("\n\tByte: ");
            scanf("%f",&b);
            printf("\n\tTerabyte: %f",b/1.09951163e12);
            getch();
        }
         else if(z==2)
        {
            float b;
            system("cls");
            printf("\n\tCalculate Byte to\n\n");
            printf("\n\tByte: ");
            scanf("%f",&b);
            printf("\n\tGigabyte: %d",b/1.07374182e9);
            getch();
        }
         else if(z==3)
        {
            float b;
            system("cls");
            printf("\n\tCalculate Byte to\n\n");
            printf("\n\tByte: ");
            scanf("%f",&b);
            printf("\n\tMegabyte: %f",b/1048576);
            getch();
        }
         else if(z==4)
        {
            float b;
            system("cls");
            printf("\n\tCalculate Byte to\n\n");
            printf("\n\tByte: ");
            scanf("%f",&b);
            printf("\n\tKilobyte: %f",b/1024);
            getch();
        }
        else if(z==5)
        {
            data_switch();
        }
        else
        {
            //printf("\n\n\tWrong input!!");
            byte_to();
        }
         printf("\n\n\tPress 1 for main menu or anything for back\n");
    int back;
    printf("\n\t");
    scanf("%d",&back);
    if(back==1)
    {
        system ("cls");
        main();
    }
    else
    {
        system ("cls");
        data_switch();
    }
}
void data_switch()
{
    int n;
    system("cls");
    printf("\n\tData Switch.\n\n");
    printf("\n\tChoose an option.\n");
    printf("\n\tPress 1 Terabyte to....\n");
    printf("\n\tPress 2 Gigabyte to....\n");
    printf("\n\tPress 3 Megabyte to....\n");
    printf("\n\tPress 4 Kilobyte to....\n");
    printf("\n\tPress 5 Byte to....\n");
    printf("\n\n\tPress 6 for back\n");

    printf("\n\n\tPress: ");
    scanf("%d",&n);

    if(n==1)
    {
        terabyte_to();
    }
    else if(n==2)
    {
       gigabyte_to();
    }
    else if(n==3)
    {
        megabyte_to();
    }
    else if(n==4)
    {
       kilobyte_to();
    }
    else if(n==5)
    {
       byte_to();
    }
    else if(n==6)
    {
        main();
    }
    else
    {
        data_switch();
    }
}
void time_switch()
 {
     system ("cls");
     int p;
    float yr,wk,d,hr,min,sec;

    printf("\n\tTime Switch.\n\n");
    printf("\n\tChoose an option.\n");

    printf("\n\tPress 1 for Year to........\n");
    printf("\n\tPress 2 for Week to........\n");
    printf("\n\tPress 3 for Day to........\n");
    printf("\n\tPress 4 for Hour to........\n");
    printf("\n\tPress 5 for Minute to........\n");
    printf("\n\tPress 6 for Second to........\n");
    printf("\n\n\tPress 7 for back\n");
    printf("\n\n\tPress: ");
    scanf("%d",&p);


    if(p==1)
    {
       year_to();
    }
    else if(p==2)
    {
        week_to();
    }
    else if(p==3)
    {
        day_to();
    }
    else if(p==4)
    {
        hour_to();
    }
    else if(p==5)
    {
        minute_to();
    }
     else if(p==6)
    {
        second_to();
    }
    else if(p==7)
    {
        main();
    }
    else
    {
        time_switch();
    }
 }
int main()
{
    system("cls");
    int operation;

    printf("\n\t-------------------------------------");
    printf("\n\t\tWelcome to C Calculator");
    printf("\n\t-------------------------------------");

    printf("\n\n\tMain Menu\n\n");
    printf("\n\tPress 1 for simple math.\n");
    printf("\t___________\n\n");
    printf("\tPress 2 for Age.\n");
    printf("\t___________\n\n");
    printf("\tPress 3 for Series of a number.\n");
    printf("\t___________\n\n");
    printf("\tPress 4 for CGPA.\n");
    printf("\t___________\n\n");
    printf("\tPress 5 for Temperature.\n");
    printf("\t___________\n\n");
    printf("\tPress 6 for BMI.\n");
    printf("\t___________\n\n");
    printf("\tPress 7 for Time.\n");
    printf("\t___________\n\n");
    printf("\tPress 8 for Discount.\n");
    printf("\t___________\n\n");
    printf("\tPress 9 for Data.\n");
    printf("\t___________\n\n");



    printf("\n\tSelect any operation: ");
    scanf("%d",&operation);

//simple +-*/
    if(operation==1)
    {
        simple_math();
    }
//age calculator
    else if(operation==2)
    {
        find_age();
    }
//finding series
    else if(operation==3)
    {
        get_series();
    }
//CGPA
    else if(operation==4)
    {
        get_cgpa();
    }
//temperature
    else if(operation==5)
    {
        find_temp();
    }
//BMI
    else if(operation==6)
    {
        find_bmi();
    }
//time
    else if(operation==7)
    {
        time_switch();
    }
//discount
    else if(operation==8)
    {
        get_discount();
    }
//data
    else if(operation==9)
    {
        data_switch();
    }
    else
    {
        main();
    }
}
