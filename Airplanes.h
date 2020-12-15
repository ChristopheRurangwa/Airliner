//
// Created by Christophe Rurangwa on 12/9/20.
//

#ifndef UNTITLED2_AIRPLANES_H
#define UNTITLED2_AIRPLANES_H
#include <string>
using namespace std;

class Airplanes {

private:

    string planeName;
    double delays;
    string confirmationNumb;

public:

    Airplanes(){
        planeName="";
        delays=0;
        confirmationNumb="";
    }

    const string &getPlaneName() const;

    void setPlaneName(const string &planeName);

    double getDelays() const;

    void setDelays(double delays);

    const string &getConfirmationNumb() const;

    void setConfirmationNumb(const string &confirmationNumb);


    static string arr[12];//<-- static variable, where names of planes are stored.

};



#endif //UNTITLED2_AIRPLANES_H
