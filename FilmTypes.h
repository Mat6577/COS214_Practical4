#ifndef FILMTYPES_H
#define FILMTYPES_H

#include "Film.h"

class States;

// Context (State Pattern) & Abstract Leaf (Composite Pattern)
class FilmTypes : public Film {
protected:
    States* state;

public:
    FilmTypes();
    virtual ~FilmTypes();

    void setState(States* state);
    States* getState();

    virtual std::string getMetaData() = 0;
    virtual void printMetaData() = 0;
};

// Children of FilmTypes

class LiveActionFilm : public FilmTypes {
public:
    LiveActionFilm();

    std::string getMetaData() override;
    void printMetaData() override;
};

class AnimatedFilm : public FilmTypes {
public:
    AnimatedFilm();

    std::string getMetaData() override;
    void printMetaData() override;
};

class ShortFilm : public FilmTypes {
public:
    ShortFilm();

    std::string getMetaData() override;
    void printMetaData() override;
};

class IndependentFilm : public FilmTypes {
public:
    IndependentFilm();

    std::string getMetaData() override;
    void printMetaData() override;
};

class BlockbusterFilm : public FilmTypes {
public:
    BlockbusterFilm();

    std::string getMetaData() override;
    void printMetaData() override;
};