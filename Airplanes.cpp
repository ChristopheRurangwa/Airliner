//
// Created by Christophe Rurangwa on 12/9/20.
//

#include "Airplanes.h"
string Airplanes::arr[12]={"BOEING-707","SPIRIT-AIRLINE","SOUTH-WEST", "ALLEGIANT-AIRLINE", "DELTA-AIRLINE","EMIRATES-AIRLINE"};

const string &Airplanes::getPlaneName() const {
    return planeName;
}

void Airplanes::setPlaneName(const string &planeName) {
    Airplanes::planeName = planeName;
}

double Airplanes::getDelays() const {
    return delays;
}

void Airplanes::setDelays(double delays) {
    Airplanes::delays = delays;
}

const string &Airplanes::getConfirmationNumb() const {
    return confirmationNumb;
}

void Airplanes::setConfirmationNumb(const string &confirmationNumb) {
    Airplanes::confirmationNumb = confirmationNumb;
}
