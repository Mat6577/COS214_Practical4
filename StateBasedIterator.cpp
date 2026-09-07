#include "StateBasedIterator.h"
#include "FilmCategories.h"
#include "Film.h"
#include "FilmTypes.h"
#include "States.h"

StateBasedIterator::StateBasedIterator(const FilmCategories* cat, const std::string& state)
    : aggregate(cat), targetState(state) {
    first();
}

void StateBasedIterator::advanceToNextMatch() {
    if (!aggregate) return;

    while (currentIter != aggregate->children.end()) {
        Film* item = *currentIter;
        
        // Safely check if this child item is a FilmTypes leaf
        FilmTypes* filmLeaf = dynamic_cast<FilmTypes*>(item);
        if (filmLeaf && filmLeaf->getState()) {
            // Your teammate's method is getStateInformation()
            if (filmLeaf->getState()->getStateInformation() == targetState) {
                return; // Found a match!
            }
        }
        ++currentIter;
    }
}

void StateBasedIterator::first() {
    if (aggregate) {
        currentIter = aggregate->children.begin();
        advanceToNextMatch();
    }
}

void StateBasedIterator::next() {
    if (!isDone()) {
        ++currentIter;
        advanceToNextMatch();
    }
}

bool StateBasedIterator::isDone() const {
    if (!aggregate) return true;
    return currentIter == aggregate->children.end();
}

Film* StateBasedIterator::currentItem() const {
    if (isDone()) return nullptr;
    return *currentIter;
}


