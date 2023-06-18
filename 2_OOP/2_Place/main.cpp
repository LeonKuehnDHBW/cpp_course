//
// Created by geilo on 17.06.2023.
//

#include <vector>
#include "Place.hpp"
#include "Sights.hpp"
#include "Toilets.hpp"



int main2_2()
{
    vector<Place*> myPlaces; //Warum Pointer? Er ermöglicht es auf Dtaen der Abgeleiteten Klasse zuzugreifen aber warum?
    myPlaces.push_back(new Place("Paris", 6, 5));
    myPlaces.push_back(new Sights("Eifelturm", "ALl of Paris", 5, 5));
    myPlaces.push_back(new Toilets("The devils toilet", "Sulfur", 2, 2));


    for(Place* place: myPlaces){
        place->visit();
    }
}