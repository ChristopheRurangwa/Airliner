//
// Created by Christophe Rurangwa on 12/9/20.
//

#ifndef UNTITLED2_PLACES_H
#define UNTITLED2_PLACES_H
#include <string>

using namespace std;


class Places {
private:
    string destination;
    string origin;
    string state;
public:
    Places(){
        destination="";
        origin="";
        state="";
    }

    Places( string destination,  string origin, string state){

        destination=destination;
        origin=origin;
        state=state;
    }



    const string getDestination() const;

    void setDestination(const string &destination);



    void setOrigin(const string &origin);

    const string &getState() const;

    void setState(const string &state);

    string bookingFlight(string origin, string destination, string date);

    virtual string showPlace();//<-- Method to be available for overriding.

};




#endif //UNTITLED2_PLACES_H
