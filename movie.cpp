#include "movie.h"

#include <iostream>

using namespace std;

// Constructor
Movie::Movie(char* _director, char* _duration, char* _rating, char* _year, char* _title):Media() {
  director = new char[24];
  rating = new char[24];
  duration = new char[10];
  strcpy(director, _director);
  strcpy(rating, _rating);
  strcpy(duration, _duration);
  strcpy(title, _title);
  strcpy(year, _year);
  id = 3;
}

// Deconstructor
Movie::~Movie(){
  delete [] director;
  delete []  time;
  delete []  rating;
}

// Accessors
char* Movie::getDirector() { 
  return director;
}

char* Movie::getDuration() {
  return duration;
}

char* Movie::getRating() {
  return rating;
}

void Movie::printInfo(){
  cout << "MOVIE |" << " Title: " << title << " / Year: " << year << " / Director: " << director << " / Duration: " << duration << " / Rating: " << rating << endl;
}
