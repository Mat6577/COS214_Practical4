#include "FilmCategoryIterator.h"
#include "FilmCategories.h"

FilmCategoryIterator::FilmCategoryIterator(const FilmCategories* cat):aggregate(cat){
    first();
}

void FilmCategoryIterator:: first(){
    if (aggregate){
        currentIter=aggregate->children.begin();
    }
}
    void FilmCategoryIterator::next() {
        if (!isDone()){
        ++currentIter;
    }
    }
    bool FilmCategoryIterator::isDone() const {
        if (!aggregate) return true;
        return currentIter==aggregate->children.end();
    };
    Film* FilmCategoryIterator::currentItem() const{
        if (isDone()) return nullptr;
        return *currentIter;
    };