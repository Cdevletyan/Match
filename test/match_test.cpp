/**
 * test cases for program
 *
 * Copyright (c) 2021, Christopher Devletyan
*/

#include <cstdint>
#include <cstdlib>
#include <vector>
#include "match/match.cpp"
#include "data/data.h"

// Check a test
#define CHECK(s, b) printf("%s: %s\n", s, b ? "pass" : "fail")

std::vector<Profiles> profiles (uint16_t count)

const std::vector <Profile> up = {
  {001, FEMALE, {MEXICO, 0.5},{VEGAN, 0.1},{true, 0.8},{FRENCH, 1.0},{BUDDHIST,0.7},{true, 0.4}},
}


int main() {

  

  PAIR("pair", Gender.MALE);
  PAIR("pair", <profiles.country>);
  PAIR("pair", <profile.diet>);
  PAIR("pair", <profiles.drinking>);
  PAIR("pair", <profile.language>);
  PAIR("pair", <profile.religion>);


  CHECK("Right Pair", Profile.MALE);
  CHECK("Right pair", Profile.USA);
  CHECK("Right pair", Profile.NONVEGETARIAN);
  CHECK("Right Pair", false);
  CHECK("Right Pair", Profile.ENGLISH);
  CHECK("Right Pair", Profile.JEWISH);
  CHECK("Right Pair", true);
}
