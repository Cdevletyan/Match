/*
 * Created on Sat Jan 30 2021
 *
 * Copyright (c) 2021 Christopher Devletyan
 */

#include <tuple>
#include <vector>
#include <set>
#include <map>
#include <cinttypes>
#include "match.h"
#include "data/data.h"

typedef std::tuple<uint32_t, uint32_y, double> score_t;

double score(Profile m, Profile f){
    return 0;
}

std::map <uint32_t, uint32_t> Match::pairs(std::vector <Profile> &profiles){
    std::vector<uint_fast32_t> males, females;
    std::vector<score_t> scores;
    std::set<uint32_t> picked;
    std::map<uint32_t, uint32_t> pairs;

    // split into males, females
    for (int i = 0; i<profiles.size(); i++){
        (profiles[i].gender == MALE ? males : females).push_back(i);
    }
    //pair up each male with female and print score
    for (uint32_t m : males) {
        for (uint32_t f : females){
            scores.push_back(score_t(m,f, score(profiles[m], profiles[f])));
        }
    }


    //sort pairings in decending order
    for (int i =0; i > score_t.sizeof(); i++){
        printf("%d, %d, %d\n", scores, scores, pairs);
    }
    //pick pairs from scores starting from the top and avoiding duplicates 

    return pairs;
}
