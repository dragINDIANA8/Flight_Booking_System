#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0;
int global=10;

class d_booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7];
    long int doj;
    int choice,src,dest;
public:
    void d_pnr()
    {
        glob++;
        pnr=glob;
    }
    int j_detail()
    {
        cout << "\nEnter Date of Flight(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "1.New York(1) \t2.Kolkata(2) \t3.Tokyo(3) \t4.Columbia(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.AIR INDIA(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.SPICE JET (2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.SKY BIRD(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.AIR INDIA(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.SPICE JET(2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.SKY BIRD(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.AIR INDIA(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.SPICE JET(2)\t14:00\t\t17:05\t\t$250\t\tRefundable\n";
            cout << "3.SKY BIRD(3)\t19:00\t\t22:05\t\t$300\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.AIR INDIA(1)\t08:00\t\t11:05\t\t$140\t\tRefundable\n";
            cout << "2.SPICE JET(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.SKY BIRD(3)\t19:00\t\t22:05\t\t$180\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.AIR INDIA(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.SPICE JET(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.SKY BIRD(3)\t19:00\t\t22:05\t\t$200\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.AIR INDIA(1)\t08:00\t\t11:05\t\t$180\t\tRefundable\n";
            cout << "2.SPICE JET(2)\t14:00\t\t17:05\t\t$50\t\tRefundable\n";
            cout << "3.SKY BIRD(3)\t19:00\t\t22:05\t\t$150\t\tRefundable\n";
        }
        else if(src==dest)
        {
            cout << "\nDestination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight()
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "AIR INDIA"<<endl;
                strcpy(f_d,"AIR INDIA");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "SPICE JET"<<endl;
                strcpy(f_d,"SPICE JET");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "SKY BIRD" << endl;
                strcpy(f_d,"SKY BIRD");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class i_booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }

    int j_detaili()
    {
        cout << "Enter Date of Flight(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "1.New Delhi(1) \2.New York(2) \3.Quatar(3) \4.England(4) \5.Australia(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.SPEED JET(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.FIRE RUN(2)\t14:00\t\t18:05\t\t$215\tRefundable\n";
            cout << "3.FAST FLY(3)\t18:00\t\t22:05\t\t$240\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.SPEED JET(1)\t10:00\t\t14:05\t\t$255\tRefundable\n";
            cout << "2.FIRE RUN(2)\t14:00\t\t18:05\t\t$213\tRefundable\n";
            cout << "3.FAST FLY(3)\t18:00\t\t22:05\t\t$246\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.SPEED JET(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.FIRE RUN(2)\t14:00\t\t18:05\t\t$290\tRefundable\n";
            cout << "3.FAST FLY(3)\t18:00\t\t22:05\t\t$420\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.SPEED JET(1)\t10:00\t\t14:05\t\t$170\tRefundable\n";
            cout << "2.FIRE RUN(2)\t14:00\t\t18:05\t\t$140\tRefundable\n";
            cout << "3.FAST FLY(3)\t18:00\t\t22:05\t\t$170\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.SPEED JET(1)\t10:00\t\t14:05\t\t$100\tRefundable\n";
            cout << "2.FIRE RUN(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.FAST FLY(3)\t18:00\t\t22:05\t\t$250\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.SPEED JET(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.FIRE RUN(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.FAST FLY(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }
        else if(srci==desti)
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "SPEED JET" << endl;
            strcpy(f_i,"SPEED JET");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "FIRE RUN" << endl;
               strcpy(f_i,"FIRE RUN");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "FAST FLY" << endl;
            strcpy(f_i,"FAST FLY");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};


class passenger: public d_booking,public i_booking
{
protected:
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public:
    void p_detail(int x)
    {   if(x==1)
        { j_detail();
          select_flight();
        }
          else
          {  j_detaili();
             select_flighti();
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check()
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no :";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()
        {
            return pnr;
        }

     int getpnri()
     {
         return pnri;
     }

     void disp()
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};



class payment
{
protected:
    long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
public:
    void pay_detail()
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3:
            cout << "Banks Available: 1.State Bank Of India(1) 2.Punjab National Bank(2) 3.ICICI Bank(3) 4.Allahabad Bank(4) 5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default:
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}

void cancelticket(int x)
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);
   ofstream fin("domestic1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.disp();
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: $100\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"Ticket not found\n";
   fout.close();
   fin.close();
   remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");

}

void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()==x)
     {p.disp();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);
   ofstream fin("international1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.dispi();
         cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: $100\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"\nTicket not found\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");

}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()==x)
     {p.dispi();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}




int main()
{

    class d_booking d1;
    class i_booking i1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    cout << "\n\n \t\t***** Flight Booking System made by SHUBHRANSHU SHEKHAR DAS *****" << endl << endl;
    cout << "\n\n \t\t****** स्वागतम || Welcome || ******  " << endl;

    cout << "\n\n\t\t\t1.Book Flight(1) \n\t\t\t2.Cancel Fight(2) \n\t\t\t3.Check Ticket(3) \n\t\t\t4.Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n\n1.Domestic Fights(1) \n2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2:
                           p1.p_detail(2);
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);
                           break;
                   default:
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:

              system("CLS");
              cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			return 0;
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
      cout<<"\n\n\n***** हमारी सेवा का उपयोग करने के लिए धन्यवाद ||*****" << endl;
    cout<<"\n\n\n***** THANKS FOR USING OUR SERVICE *****" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
}

