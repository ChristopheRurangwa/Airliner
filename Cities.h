//
// Created by Christophe Rurangwa on 12/9/20.
//

#ifndef UNTITLED2_CITIES_H
#define UNTITLED2_CITIES_H


#include "Places.h"
//Inheritance; Cities class inherit from base class Places.
class Cities: public Places {

private:

    string city;
    string airport;
public:
    Cities(){

        city="";

        airport="";
    }

    Cities(string city, string airport){

        city=city;

        airport=airport;
    }

    const string &getCity() const;

    void setCity(const string &city);



    void setAirport(const string &airport);



};


#endif //UNTITLED2_CITIES_H
