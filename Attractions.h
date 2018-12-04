//
// Created by Linda Nguyen on 11/24/18.
//

#ifndef CITYOFSJ_ATTRACTIONS_H
#define CITYOFSJ_ATTRACTIONS_H

#include "CityCategory.h"

class Attraction : public CityCategory {

private:
    std::vector<Attraction *> attractions;

public:
    Attraction();
    ~Attraction() override;
    Attraction(std::string name, std::string description, bool favorite, int rating);
    void createPlace(std::string name, std::string description, bool favorite, int rating) override;
    void listing() override; // Print
    void listFavorites() override;
    std::string getName();
    void changeName();
    void setName(std::string name);
};

#endif //CITYOFSJ_ATTRACTIONS_H
