#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include<ctype.h>
using namespace std;
calculateretailprice(double wholecost,double markup){

   double newmarkup=markup/100;
   double profit=wholecost*newmarkup;
   double retailprice=profit+wholecost;
  return retailprice;
}
int getnumaccidents(string region){
    int num;
    cout<<"enter the number of accidents for region "<<region<<endl;
    cin>>num;
    while (num<0){
        cout<<"please enter a positive number"<<endl;
        cin>>num;
    }
    return num;
}
void getlowest(int r1,int r2,int r3,int r4,int r5){
    int lowest=0;
    string region=" ";
    if(r1<r2&&r1<r3&&r1<r4&&r1<r5){
       int lowest=r1;
        region="north";
    }
    else if (r2<r1&&r2<r3&&r2<r4&&r2<r5){
       int lowest=r2;
        region="south";
    }
    else if(r3<r1&&r3<r2&&r3<r4&&r3<r5){
       int lowest=r3;
        region="east";
    }
    else if(r4<r1&&r4<r2&&r4<r3&&r4<r5){
       int lowest=r4;
        region="west";
    }
    else {
       int lowest=r5;
        region="central";
    }
    cout<<"the region with the lowest number "<<region<<"and the lowest number is"<<lowest<<endl;

}
double fallingdistance(int t=0){

   double d=0.0;
   const double g=9.8;
   d=(0.5*g)*(pow(t,2));
    return d;

}
double keneticenergy (float m,float v){
    double ke=0.0;
    ke=(0.5*m)*(pow(v,2));
    return ke;

}
double celsuis (float f){
   double c=0.0;
   c=5.0/9*(f-32);
   return c;


}
int cointoss(void){

  int randnum;
  randnum=1+rand()%2;
  return randnum;

}
string uppercaseit(string s){
    string converted;
   for (short i=0;i<s.length;++i)
        converted+=toupper(s[i]);

   return converted;

}
bool samestring (s1,s2){
  if (uppercaseit(s1).compare(uppercaseit(s2))==0)
    return true;
  return false;


}
int main()
    {
    int choice;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    if (choice==1){
    int usertotal;
    int seed=time(0);
    srand(seed);
    int randn1=1+rand()%100;
    int randn2=1+rand()%100;
    int comptotal=randn1+randn2;
    cout<<setw(5)<<randn1<<endl;
    cout<<setw(3)<<"+"<<randn2<<endl;
    cout<<"---------"<<endl;
    cin>>usertotal;
    if (usertotal==comptotal){
        cout<<"good job!"<<endl;
    }
    else {
        cout<<"sorry ,wrong answer"<<endl;
    }
    }
    if (choice==2){
        int penny,nickels,dims,quarters;
        cout<<"enter your pennies"<<endl;
        cin>>penny;
         cout<<"enter your nickels"<<endl;
        cin>>nickels;
         cout<<"enter your dims"<<endl;
        cin>>dims;
         cout<<"enter your quarters"<<endl;
        cin>>quarters;
      int total=(penny*0.01)+(nickels*0.05)+(dims*0.1)+(quarters*0.25);
      if (total==1){
        cout<<"congratulations"<<endl;
      }
      else if (total>1){
        cout<<"the amount is more than one dollar"<<endl;
      }
      else {

        cout<<"the amount is less than one dollar"<<endl;
      }
    }
    if (choice==3){
        const float increase=0.04;
        const int years=6;
        float membership=2500;
        for (int i=1;i<=years;i++){
            membership=membership+(membership+increase);
            cout<<"year "<<i<<" feets for 4% increse="<<membership<<endl;
        }
    }
    if (choice==4){
    for (int i=10;i<=30;i+=5){
    cout<<"the calories burned per minute="<<i*3.9<<endl;
}
    }
    if (choice==5){
      int count=1;
      for (float i=1.5;i<=26;i+=1.5){
        cout<<"for the year ="<<count<<"the ocean level will rise="<<i<<endl;
        count++;
      }
    }
    if (choice==6){
            int days;
            float pay=1;
            float total=0.0;
            cout<<"enter your days"<<endl;
            cin>>days;
            for (int i=1;i<=days;i++){
                cout<<"the pay for  "<<i<<" in dolars="<<pay*0.01<<endl;
                total+=(pay*0.01);
                 pay*=2;
            }
            cout<<"the total period="<<total<<"$"<<endl;
    }
    if (choice==7){
            int floors,rooms,roomsoccup,roomunoccup,totalroom,totalroomoccup,totalroomunoccupe,percenroomoccupe=0;
            cout<<"how many the floors does the hotel have"<<endl;
            cin>>floors;
            while (floors<1){
                cout<<"please enter a positive number"<<endl;
                cin>>floors;
            }
            for (int i=1;i<=floors;i++){
                if (i!=13){
                    cout<<"enter how many of rooms in one floor"<<endl;
                    cin>>rooms;
                    while (rooms>10){
                        cout<<"that's not exist please enter invalid number"<<endl;
                        cin>>rooms;
                    }
                   cout<<"enter how many of rooms occupied in one floor"<<endl;
                    cin>>roomsoccup;
                    roomunoccup=rooms-roomsoccup;
                    totalroom+=rooms;
                    totalroomoccup+=roomsoccup;
                    totalroomunoccupe+=roomunoccup;
                    percenroomoccupe=totalroomoccup/totalroom;
                }
            }
        cout<<"the total rooms="<<totalroom<<endl;
         cout<<"the total rooms occupied="<<totalroomoccup<<endl;
          cout<<"the total rooms unoccupied="<<totalroomunoccupe<<endl;
           cout<<"the percentage of total rooms="<<percenroomoccupe<<endl;
    }
     if (choice==8){
        float startorg=0.0f;
        int days=0;
        float averageincrease=0.0f;
        float dailypopuation=0.0f;
         cout<<"enter your starting day of organisms"<<endl;
         cin>>startorg;
         while(startorg<2){
            cout<<"enter the number more than 2"<<endl;
            cin>>startorg;
         }
          cout<<"enter your the number of days"<<endl;
         cin>>days;
         while(startorg<1){
            cout<<"enter the number more than 1"<<endl;
            cin>>startorg;
         }
          cout<<"enter your the increase average of poulation"<<endl;
         cin>>averageincrease;
         while(averageincrease<0){
            cout<<"enter the number more than 2"<<endl;
            cin>>averageincrease;
         }
         for (int i=1;i<=days;i++){
            //calculation of the increase
            dailypopuation=((averageincrease/100)*startorg+startorg);
            cout<<"the poulation for one day"<<i<<"is"<<dailypopuation<<endl;
            startorg=dailypopuation;
         }
    }
     if (choice==9){
       int num,counter=0;
       int high,low;

       while (num!=-99){
            cout<<"enter your number and press -99 to exist the program"<<endl;
          cin>>num;
        if (counter==0){
            high=num;
            low=num;
        }
        else {
            if (num>high&&num!=-99)
                high=num;
            else if (num<low&&num!=-99)
                low=num;
        }
        counter++;
       }
        cout<<"the high number in the list="<<high<<endl;
        cout<<"the low number in the list="<<low<<endl;
    }
     if (choice==10){
         int numstudents;
         string studentname,firststudent,laststudent;
         cout<<" enter the numbers of students but it should be between 1 and 25"<<endl;
         cin>>numstudents;
         while (numstudents<1 || numstudents>25){
             cout<<" enter the numbers of students but it should be between 1 and 25"<<endl;
         cin>>numstudents;
         }
         for (int i=1;i<=numstudents;i++)
         {
             cout<<"please enter students name"<<endl;
             cin>>studentname;
             if (i==1){
                firststudent=studentname;
                laststudent=studentname;
             }
             else {
                if (studentname<firststudent)
                    firststudent=studentname;
                else if (studentname>laststudent)
                    laststudent=studentname;
             }
         }
         cout<<"first student is ="<<firststudent<<endl;
         cout<<"last student is ="<<laststudent<<endl;
    }
     if (choice==11){
       int sales;
       int sale[5];
       for (int i=0;i<5;i++){
        cout<<"enter sales to store#"<<endl;
        cin>>sales;
        sale[i]=sales/100;
       }
        for (int c=0;c<5;c++){
            cout<<"store#"<<c+1<<endl;
            for (int f=0;f<sale[c];f++)
             {
                  cout<<"*";
             }
             cout<<endl;
             }

     }
     if (choice==12){
      int seed=time(0);
      srand(seed);
      int userguess;
      int randnum=1+rand()%100;

      cout<<"enter your guess number but it should be between 1-100"<<endl;
      cin>>userguess;

      while (userguess!=randnum)
       {
         if (userguess>randnum)
          {
              cout<<"too heigh,please try again"<<endl;
             cin>>userguess;
          }
          else{
            cout<<"too low,please try again"<<endl;
          cin>>userguess;
          }

    }
    if (userguess==randnum){
        cout<<"congratoltions"<<endl;
    }
     }
     if (choice==13){
        for (int c=0;c<6;c++){
            for (int f=0;f<c;f++){
                cout<<"*";

        }
      cout<<endl;
    }
     for (int c=6;c>0;c--){
            for (int f=0;f<c;f++){
                cout<<"*";

        }
      cout<<endl;
    }
     }
     if (choice==14){
        double wholecost,markup;
        cout<<"enter the whole cost and the markup percentage"<<endl;
        cin>>wholecost>>markup;
        while (wholecost<0||markup<0){
            cout<<"enter a positive number"<<endl;
            cin>>wholecost>>markup;
        }
        double totalprice=calculateretailprice( wholecost, markup);
        cout<<"the retail price of the item is $+"<<totalprice<<endl;
    }
     if (choice==15){
      int accn,accs,acce,accw,accc;
      for (int i=0;i<5;i++){
        switch (i){
        case 0:
            accn=getnumaccidents("north");
            break;
        case 1:
            accn=getnumaccidents("south");
            break;
        case 2:
            accs=getnumaccidents("east");
            break;
        case 3:
            acce=getnumaccidents("west");
            break;
        default:
            accc=getnumaccidents("central");
            break;
        }
      }
       getlowest( accn,accs,acce,accw,accc);

    }
  if (choice==16){
   int t=0;
   double d=0.0;
   cout<<"i will calculate the distance by meters"<<endl;
   for (int i=1;i<=10;i++){
    d=fallingdistance(i);
    cout<<i<<" seconds "<<d<<" meters "<<endl;
   }
    }
     if (choice==17){
   float m=0.0;
   float v=0.0;
   double ke;
   cout<<"enter the mass and volicty"<<endl;
   cin>>m>>v;
   ke=keneticenergy(m,v);
   cout<<"the kenetic energy of an object="<<ke<<endl;
    }
    if (choice=18){
      double c=0.0;
      float f=0.0f;
      for (int i=1;i<=20;i++){

        c=celsuis(i);
        cout<<"table display of "<<i<<" converted to celsuis="<<c<<endl;
      }
    }
     if (choice=19){
      int howmanytimes;

      cout<<"how many times you want to coin "<<endl;
      cin>>howmanytimes;
      int randnum;
      string headtail="";
      srand ((time(0)));
      for (int i=1;i<=howmanytimes;i++){
        randnum=cointoss();
        if (randnum==1)
            headtail="head";
        else
            headtail="tail";

      cout<<"the toss of the coining="<<headtail<<endl;
      }
    }
     if (choice=20){
     string num1;
     string num2;
     cout<<" enter two names and i will tell you if they are the same or not"<<endl;
     cout<<"enter the first name"<<endl;
     cin>>num1;
     cout<<"enter the second name"<<endl;
     cin>>num2;
     if (samestring(s1,s2)==true)
        cout<<" the two names are the same"endl;
     else
        cout<<"the twonames are not the same"<<endl;
    }
     if (choice=21){

    }
     if (choice=22){

    }
     if (choice=23){

    }
     if (choice=24){

    }
     if (choice=25){

    }

    return 0;
}
