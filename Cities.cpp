//
// Created by Christophe Rurangwa on 12/9/20.
//

#include "Cities.h"
Cities cty=Cities();
const string &Cities::getCity() const {
    return city;
}

void Cities::setCity(const string &city) {
    Cities::city = city;
}



void Cities::setAirport(const string &airport) {

    Cities::airport = airport;
}

/**
 * Method override!!
 * Here, this method is used to show state instead of city.
 */

string showPlace() {

    return cty.getState();
}