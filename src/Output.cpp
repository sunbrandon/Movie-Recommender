#include "../header/Output.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Output::Output() {}

Output::~Output() {}

void Output::outputMenu() {
    cout << "Please select your option from the list." << endl;
    cout << endl;
    cout << "1. Search" << endl;
    cout << "2. Quiz" << endl;
    cout << "3. Surprise!" << endl;
    cout << "q. Exit" << endl;
    cout << endl;
}

void Output::questionOut1() {
    cout << endl;
    cout << "Question 1: How are you feeling today?" << endl;
    cout << endl;
    cout << "a. Gloomy" << endl;
    cout << "b. Adventurous" << endl;
    cout << "c. Nostalgic" << endl;
    cout << "d. Romantic" << endl;
    cout << endl;
}

void Output::questionOut2() {
    cout << endl;
    cout << "Question 2: What is the occasion?" << endl;
    cout << endl;
    cout << "a. Movie Date" << endl;
    cout << "b. By yourself" << endl;
    cout << "c. With friends" << endl;
    cout << "d. With family" << endl;
    cout << endl;
}

void Output::questionOut3() {
    cout << endl;
    cout << "Question 3: If you had to switch careers today, which would you choose?" << endl;
    cout << endl;
    cout << "a. Computer Hacker" << endl;
    cout << "b. Cop" << endl;
    cout << "c. Drummer" << endl;
    cout << "d. Archaeologist" << endl;
    cout << endl;
}

void Output::questionOut4() {
    cout << endl;
    cout << "Question 4: What goes through your mind during a good movie?" << endl;
    cout << endl;
    cout << "a. Nothing...I'm too busy laughing" << endl;
    cout << "b. I want to live in their world!" << endl;
    cout << "c. What's going to happen next?" << endl;
    cout << "d. When will this movie end???" << endl;
    cout << endl;
}

void Output::questionOut5() {
    cout << endl;
    cout << "Question 5: Which option best describes the type of movie you want?" << endl;
    cout << endl;
    cout << "a. A movie I haven't heard much about" << endl;
    cout << "b. A classic" << endl;
    cout << "c. I keep seeing clips and I'm ready to watch the full movie" << endl;
    cout << "d. Everyone thinks it's good" << endl;
    cout << endl;
}

void Output::searchChoiceOut() {
    cout << "Select which search to use:" << endl;
    cout << endl;
    cout << "a. Search Similar" << endl;
    cout << "b. Search Filter" << endl;
    cout << "c. Back" << endl;
    cout << endl;
}

void Output::similarOut() {

    cout << "Please insert a previously watched movie: " << endl;
    cout << endl;

}

void Output::filterOutGenre() {

    cout << "Select the genre of your movie: "  << endl;
    cout << endl;
    cout << "1. Action" << endl;
    cout << "2. Adventure" << endl;
    cout << "3. Animation" << endl;
    cout << "4. Biography" << endl;
    cout << "5. Comedy" << endl;
    cout << "6. Crime" << endl;
    cout << "7. Drama" << endl;
    cout << "8. Family" << endl;
    cout << "9. Fantasy" << endl; 
    cout << "10. Film-Noir" << endl;
    cout << "11. History" << endl;
    cout << "12. Horror" << endl;
    cout << "13. Music" << endl;
    cout << "14. Musical" << endl;
    cout << "15. Mystery" << endl;
    cout << "16. Romance" << endl;
    cout << "17. Sci-Fi" << endl;
    cout << "18. Thriller" << endl;
    cout << "19. War" << endl;
    cout << "20. Western" << endl;
    cout << endl;

}

void Output::filterOutYear(){

    cout << "Select a decade: " << endl;
    cout << endl;
    cout << "a. 1920 - 1940" << endl;
    cout << "b. 1941 - 1960" << endl;
    cout << "c. 1961 - 1980" << endl;
    cout << "d. 1981 - 2000" << endl;
    cout << "e. 2001 - 2020" << endl;
    cout << endl;

}

void Output::filterOutDuration(){

    cout << "Select the length of the movie (minutes): " << endl;
    cout << endl;
    cout << "a. 60 - 90" << endl;
    cout << "b. 91 - 120" << endl;
    cout << "c. 121 - 150" << endl;
    cout << "d. 151 - 180" << endl;
    cout << "e. 181 - 210" << endl;
    cout << "f. 211 - 240" << endl;
    cout << endl;

}

void Output::filterOutRating(){

    cout << "Select the rating of the movie: " << endl;
    cout << endl;
    cout << "a. 0 - 8.3" << endl;
    cout << "b. 8.4" << endl;
    cout << "c. 8.5" << endl;
    cout << "d. 8.6" << endl;
    cout << "e. 8.7" << endl;
    cout << "f. 8.8" << endl;
    cout << "g. 8.9+" << endl;
    cout << endl;

}

void Output::filterOutPopularity(){

    cout << "Select the popularity of the movie: " << endl;
    cout << endl;
    cout << "a. 50,000 - 500,000" << endl;
    cout << "b. 500,001 - 1,000,000" << endl;
    cout << "c. 1,000,001 - 1,500,000" << endl;
    cout << "d. 1,500,001 - 2,000,000" << endl;
    cout << "e. 2,000,001 - 2,500,000" << endl;
    cout << endl;

}