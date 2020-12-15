//
// Created by Christophe Rurangwa on 12/9/20.
//

#include "Places.h"
#include <iostream>
#include "Passenger.h"
#include "Airplanes.h"
#include "Cities.h"


using namespace std;
Passenger pas=Passenger();
Places pl = Places();
const string Places::getDestination() const {
    return destination;
}

void Places::setDestination(const string &destination) {
    Places::destination = destination;
}



void Places::setOrigin(const string &origin) {
    Places::origin = origin;
}

const string &Places::getState() const {
    return state;
}

void Places::setState(const string &state) {
    Places::state = state;
}
/**
 * The user will input data, to be later used in confirmation
 * and identification of user.
 * @param origin
 * @param destination
 * @param date
 * @return
 */
string Places::bookingFlight(string origin, string destination, string date){
    Cities cty=Cities();
    Airplanes air1= Airplanes();

    const int SIZ =27;
    

    srand(time(0));//<-- needed everytime a program run to produce random numbers
    int randNumb=1+(rand()%7);
    int rd=1+(rand()%3);
    double powMin=pow(4,rd);


        string state,airport;

    cout<<"FROM; \nenter city: \n";

        cin>>origin;
    pl.setOrigin(origin);
    pas.setCurrentCity(origin);
    cty.setCity(origin);

    cout<<"To; \nenter city: \n";

        cin>>destination;

        pl.setDestination(destination);

    cout<<"\nEnter today's date in the format, mm/dd/yyyy: \n";
    cin>>date;

    cout<<"Enter state: \n";
    cin>>state;
    pl.setState(state);
    cout<<"Enter airport: \n";
    cin>>airport;

       cty.setAirport(airport);
       cty.getDestination();

       //serial number creation.
     int serl= pas.serialNumber(pas.alphabets,SIZ);

     string str=to_string(serl);//<-- convert int to string.
    air1.setConfirmationNumb(str);
    air1.setPlaneName(air1.arr[randNumb]);

    air1.setDelays(powMin);
    cout<<" Delays: "<<air1.getDelays()<<" minutes\n";


    cout<<""
          "\n-------------------------------------------------------------------------------------------------------\n";
    cout<<"\nYOUR FRIGHT CONFIRMED FROM: "+ Places::showPlace()+" in "
    +pl.getState()+". --> "+cty.showPlace()+" Flight No. "<<pas.serialNumber(pas.alphabets,SIZ)<< " \n";//<--overriden method;
    return cty.getCity()+" ----> "+destination+" -----| "+date+" Airplane: "
    +(air1.getPlaneName())+" CONFIRMATION No. --> "+air1.getConfirmationNumb()+
    "\n-------------------------------------------------------------------------------------------------------\n";;
}

/**
 * Retrieves the city the passenger entered, later to be
 * used for displaying in cout<<...
 * @return
 */

string Places::showPlace() {

    return pas.getCurrentCity();
}
