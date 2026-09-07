# COS214_Practical4
Fourth practical for COS 214 (Design Patterns).
We were tasked with implementing four design patterns: **Composite, Decorator, Iterator, and State**.

## Table of contents
|**Design Pattern**|**Name**|
|------------------|--------|
|Iterator|FilmIterator|
||StateIterator|
|Composite|FilmCategories|
|State|States|
|Decorator|Genres| 


## Iterator
### This implements the Iterator pattern.

| Pattern participants | mapping |
|----------------------|---------|
|**Abstract Iterator**| FilmCategoryIterator |
|| StateBasedIterator |
|**Concrete Iterators**|FilmIterator|
|**Abstract Aggregates**|AbstractFilmCategories|
||FilmCategories|

## States
### This implements the state pattern.

| Pattern participants | mapping |
|----------------------|---------|
|**Client**| FilmTypes |
|**AbstractState**| States |
|**ConcreteState**|Development|
||Distribution|
||Production|

## Comosite
### This implements the composite pattern.

| Pattern participants | mapping |
|----------------------|---------|
|**Composite**| FilmCategories |
|**Leafs**|AnimatedFilm|
||BlockbusterFilm|
||IndependentFilm|
||LiveActionFilm|
||ShortFilm|


## Genres
### This implements the decorator pattern.

| Pattern participants | mapping |
|----------------------|---------|
|**Abstract Decorator**| Genres |
|**Concrete Decorators**|Comedy|
||Drama|
||Horror|
||Romance|
||Thriller|
