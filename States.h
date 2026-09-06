#ifndef STATES_H
#define STATES_H

#include <string>

class FilmTypes;

// State
class States {
public:
    States() {}
    virtual ~States() {}

    virtual void printState() = 0;
    virtual std::string getStateInformation() = 0;
    virtual void changeState(FilmTypes* filmType) = 0;
};

// Concrete State: Development
class Development : public States {
public:
    Development() {}

    void printState() override;
    std::string getStateInformation() override;
    void changeState(FilmTypes* filmType) override;
};

// Concrete State: Production
class Production : public States {
public:
    Production() {}

    void printState() override;
    std::string getStateInformation() override;
    void changeState(FilmTypes* filmType) override;
};

// Concrete State: Distribution
class Distribution : public States {
public:
    Distribution() {}

    void printState() override;
    std::string getStateInformation() override;
    void changeState(FilmTypes* filmType) override;
};

#endif