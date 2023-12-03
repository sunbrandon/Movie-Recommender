#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "../header/Input.h"
#include "../header/Sort.h"
#include "../header/Movie.h"

using namespace std;

int main() {
    Sort* s = new Sort();

    vector<Movie> movieVector;

    movieVector = s->sortCSV();

    // for (unsigned int i = 0; i < movieVector.size(); i++) {
    //     cout << i << ": " << movieVector.at(i).getMovieID() << endl;
    //     cout << i << ": " << movieVector.at(i).getTitle() << endl;
    //     cout << i << ": " << movieVector.at(i).getYear() << endl;
    //     //cout << i << ": " << movieVector.at(i).getGenres() << endl;
    //     cout << i << ": " << movieVector.at(i).getDuration() << endl;
    //     //cout << i << ": " << movieVector.at(i).getDirectors() << endl;
    //     //cout << i << ": " << movieVector.at(i).getWriters() << endl;
    //     cout << i << ": " << movieVector.at(i).getProduction() << endl;
    //     //cout << i << ": " << movieVector.at(i).getActors() << endl;
    //     //cout << i << ": " << movieVector.at(i).getDescriptions() << endl;
    //     cout << i << ": " << movieVector.at(i).getRating() << endl;
    //     cout << i << ": " << movieVector.at(i).getNumOfVotes() << endl;
    // }

    vector<string> aV = movieVector.at(2).getDescriptions();

    for (int i = 0; i < aV.size(); i++) {
        cout << aV.at(i) << endl;
    }

    return 0;
}