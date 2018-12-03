#include <iostream>
#include <string>
#include "CityCategory.h"
#include "Attractions.h"
#include "Restaurants.h"
#include "User.h"
#include "UserFacade.h"

/*
 * Still needs to support users' inputs!!
 * Needs to handle dangling pointers !!
 */

int main() {
    int choice, rating, favorite;
    std::string name, description;

    std::cout << "Thank you for trying out the City of SJ's itinerary! Use the application to bookmark your favorite places and services!\n\n";

    auto *user1 = new User();
    user1->viewAll();
    //user1->viewCategory();

    delete user1;
    return 0;
}