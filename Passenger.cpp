//
// Created by Christophe Rurangwa on 12/9/20.
//

#include "Passenger.h"
#include "iostream"
using namespace std;

char Passenger::alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                    'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
                    'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

const string &Passenger::getPassengerName() const {
    return passengerName;
}
void Passenger::setPassengerName(const string &passengerName) {
    Passenger::passengerName = passengerName;
}

const string &Passenger::getDateOfBirth() {
    return dateOfBirth;
}

void Passenger::setDateOfBirth(const string &dateOfBirth) {
    Passenger::dateOfBirth = dateOfBirth;
}

const string &Passenger::getCurrentCity() {
    return currentCity;
}

void Passenger::setCurrentCity(const string &currentCity) {
    Passenger::currentCity = currentCity;
}



int Passenger::serialNumber(char alphabets [],int SIZE){
    int lower=133391;
    int max=RAND_MAX;
    srand(time(0));//<-- needed everytime a program run to produce random numbers
    int id= lower+(rand()%max);


    for (int i =0;i<SIZE;i++){

        if(i%2==0){//checks number is even
            if(!isalpha(alphabets[i+((rand()%7)+1)])){// checks if the character is alphabet,
                continue;// skip if not
            }
            else cout<< alphabets[i+((rand()%13)+1)];
        }
    }
    cout<<":||:";

    return id;}