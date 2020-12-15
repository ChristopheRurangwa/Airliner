//
// Created by Christophe Rurangwa on 12/9/20.
//

#ifndef UNTITLED2_PASSENGER_H
#define UNTITLED2_PASSENGER_H
#include <string>

using namespace std;

class Passenger {
private:
    string passengerName;
    string dateOfBirth;
    string currentCity;
    int serialNumb;
    string partialSerial;

public:
    Passenger(){

        passengerName="";
        dateOfBirth="";
        currentCity="";
        serialNumb=0;
        partialSerial="";

    }

    Passenger(string passengerName,string dateOfBirth,string currentCity,int serialNumb,
    string partialSerial){

        passengerName=passengerName;
        dateOfBirth=dateOfBirth;
        currentCity=currentCity;
        serialNumb=serialNumb;
        partialSerial=partialSerial;

    }

    const string &getPassengerName() const;

    void setPassengerName(const string &passengerName);

    const string &getDateOfBirth();

    void setDateOfBirth(const string &dateOfBirth);

    const string &getCurrentCity();

    void setCurrentCity(const string &currentCity);


    int serialNumber(char alphabets [],int SIZE);


    static char alphabets[26];
};


#endif //UNTITLED2_PASSENGER_H
