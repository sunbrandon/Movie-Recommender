#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "../header/Input.h"
#include "../header/Sort.h"
#include "../header/Movie.h"
#include "../header/Search.h"

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

    //vector<string> aV = movieVector.at(2).getActors();

    // for (int i = 0; i < movieVector.size(); i++) {
    //     cout << movieVector.at(i).getTitle() << endl;
    // }

    // Input* in = new Input();
    // vector<string> fin = in->getFilter();

    cout << endl;

    //cout << movieVector.size() << endl;
    Search* ts = new Search();
    vector<Movie> filterVector;
    filterVector = ts->similarAlgo(movieVector);

    cout << filterVector.at(0).getTitle() << endl;
    cout << filterVector.at(1).getTitle() << endl;
    cout << filterVector.at(2).getTitle() << endl;
    
    return 0;
}