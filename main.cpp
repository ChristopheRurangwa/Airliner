/*
Name: Christohe Rurangwa
Date: 12/09/2020
CIS 1202-501
Program Name: Airliner.
Description of what the program does:

This program let users search for available
 flights, book flights, and confirms details
 entered by users.
*/

#include <iostream>
#include<string>
#include "cstdlib"
#include "cstring"
#include "Passenger.h"
#include <fstream>
#include <istream>
#include "Places.h"
#include "Airplanes.h"

using namespace std;

struct Data{

    ofstream file;
};

//Prototype functions

string signUp(const char *userName, const char *userPassword);
void guest();
void searchPlane();
int innerMenu();

void allOtherOperations();


int main(){

    cout<<"...Welcome to Airliner...\n";
    fstream file;
    char name[20];
   char passwrd[20];
Passenger pass= Passenger();

cout<<"--------------------------"
      "\n\n"
      "** 1. Sing Up **"

      "**\n\n** 2. Continue as a guest **\n\n"
      "** 3. Exit **"
      "\n\n---"
      "------------------------- \n>";

int choix;
char logNam[20];
char logPass[20];

cin>>choix;

    do {

    switch (choix) {

        case 1:

            {
            cout<<"Enter your Name: \n";
            cin>>name;
                pass.setPassengerName(name);
            cout<<"Enter password: \n";
            cin>>passwrd;
            signUp(name,passwrd);
        cin>>choix;
            break;
        }


        case 2:

            guest();

        cin>>choix;

            break;


        case 3:

            exit(0);

        default:

            {

            cout<<"Invalid option, please try again \n >";

            cin>>choix;

        }


    } }while (choix<4&&choix!=0);



}



/**
 * Populates the file with both names and passwords of users
 * @param name
 * @param password
 * @param file
 * @return
 */
string signUp(const char *userName, const char *userPassword){
  Data db;
  char dob[20];
  cout<<"Enter date of birth: \n";
  cin>>dob;

    db.file.open("database.dat",ios::out|ios::binary);
while (!db.file.eof()){
    db.file.write(userName,20);
    db.file.write(userPassword,20);
    db.file.write(dob,20);

    allOtherOperations();
    break;
}
db.file.close();

    return "";}

void guest(){
    allOtherOperations();

}
/**
 * calls an innerMenu, which deals with most of the operations
 */
void allOtherOperations(){
    innerMenu();

}
/**
 * functions include book flight, searching, etc...,
 * @return
 */
int innerMenu(){
    Places plc=Places();
    Airplanes air=Airplanes();
    int input;

cout<<"** ---------------------------------- **\n";
    cout<<"\n** 1. Book a Flight. **\n\n";
    cout<<"** 2. Check available Flights. **\n\n";
    cout<<"** 3. Search for your Flight. **\n\n";
    cout<<"** 4. Exit. **\n\n";
    cout<<"** ------------------------------ **\n\n";

string origin,destination,date,state;
int i;


    do {
        cin>>input;
        switch (input) {
            case 1:{

            cout<<plc.bookingFlight(origin,destination,date);
            plc.setDestination(destination);

                cin>>input;
                break;}
            case 2:{
                cout<<"Available Planes: \n\n";
                for(i=0; i<7;i++){

                   cout<<""+ air.arr[i]+"... \n";

                }



                cin>>input;
                break;}
            case 3:{// search for flight
              searchPlane();

                cin>>input;
                break;}
            case 4:exit(0);


            default:
                cout<<"Invalid option, please try again \n >";
                cin>>input;

        }
    }while (input<5);

    return 0;
}
/**
 * Looks for entered data if it is available in the array.
 */
void searchPlane(){

    string key;
    Airplanes air;

    cout<< "Enter your plane name here: eg. BOEING-707,...\n";
    cin>>key;

    for(int i=0;i<=7;){

        if(air.arr[i]==key){
            cout<<"The flight "+key+" was found.";

            break;
        }

        i++;//<-when i put it in the for loop, it becomes unreachable

        if(air.arr[i]!=key){

            cout<<"The flight "+key+" was not found, try again.";
            break;
        }
        i++;

    }
};

