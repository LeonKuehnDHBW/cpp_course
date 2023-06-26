//
// Created by geilo on 17.06.2023.
//

#include <vector>
#include "Place.hpp"
#include "Sights.hpp"
#include "Toilets.hpp"



int main2_2()
{
    auto paris{Place("Paris", 4, 5)};
    auto eifelturm{Sights("Eifelturm", "All of Paris", 7, 8)};
    auto devilsToilet {Toilets("Devils Toilet", "Sulfur", 9, 2)};

    vector<Place*> myPlaces;
    myPlaces.push_back(&paris);
    myPlaces.push_back(&eifelturm);
    myPlaces.push_back(&devilsToilet);


    for(Place* place: myPlaces){
        place->visit();
    }
}