//
//  utilities.cpp
//  Øving_3
//
//  Created by Felix Aarekol Forseth on 11/07/2022.
//

#include "utilities.hpp"

int randomWithLimits(int lower, int higher){
    srand(static_cast<unsigned int>(time(nullptr)));
    int random_number = rand() % (higher-lower) + lower;
    return random_number;
}
