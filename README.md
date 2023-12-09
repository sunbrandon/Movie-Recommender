 # Movie Recommender
 
 > Author(s): Brandon Sun ([@sunbrandon](https://github.com/sunbrandon)),
            Aaron Lin ([@aaronlin79](https://github.com/aaronlin79)),
            David Lee ([@davidbjol](https://github.com/davidbjol)),
            Darren Banh ([@darrenbanh](https://github.com/darrenbanh))

## Project Description
   A movie recommender implemented with C++ and possibly SQL

Why is it important or interesting to you?
   * We found this project interesting because we wanted to work with data bases and movies are a great way to implement a data base search system that has real world applications. Our project will help people with certain movie preferences to be able to find other movies similar to what the like and make the hunt for finding something good to watch a lot easier.

What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
   * In order to build this project we plan on using C++ and implenting an SQL database with MySQL/BigQuery and connecting it using the C++ library SQLAPI++/SQLite. This would allow us to write the majority of our code in C++ while having the ability to traverse different data bases based on things like genre, release date, actors, etc. instead of having everything locally.

What will be the input/output of your project?
   * For our project we will ask the user to input a movie name and our program will use different algorithms to recommened and output a list of movies based on similarities like genre, release date, actors, etc. with the movie the user input. We will also allow the user to search for movies based on their preferences with genre, release dates, actors, etc.

What are the features that the project provides?
   * We will have a list of options for the user to choose from in order to search and recommend movies based on different algorithms like movie genre, actors, directors, length, etc. Our program will give the user the freedom to decide whether they want to find a movie similar to one they already like or if they want to find movies that are under a given genre, director, era, or contains an actor that they like.
 
   ## Phase II
## User Interface Specification

### Navigation Diagram
   ![Navigation Diagram](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/132787942/4d1fc0d3-ea6f-41cb-8b31-4cb562996b95)\
Diagram of the movie recommendator including the various decision branches included in the program.

### Screen Layouts
  ![Screen Layout](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/132787942/4c011715-91de-4117-b55f-5f34e1759e5f)

## Class Diagram
   ![UML](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/132787942/04c09e43-991f-4cb1-b012-b98da62f8311)\
Diagram of our program's main classes including the inheritances of each class and the relationships between each class.  Menu is dependant on a variety of classes such as SearchInterface, Question, mySQL, Movie, Result.  SearchInterface will have two inherited classes SearchFilter and SearchSimilar, each different types of searches.  The SelectSearch interface is something which is also used in searchInterface.  The Question class creates a multitude of Question inhereted classes.  Result also creates a multitude of result inherited classes.  mySQL and Movie are also classes which work within the Menu class. 

 
## Phase III

## Updated Class Diagram
   ![Updated UML-1](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/132787942/39cd94f5-8acf-42e9-9124-636085437edf)

Our updated UML diagram was significantly overhauled for both clarity and accounting for SOLID principles:

For clarity, we consolidated our classes such as Question and Result to having unique functions for each output rather than having multiple classes for different outputs.  Futhermore, we removed redundant classes such as SelectSearch which were better classified as a more wholistic Output class.  We also went through and fixed the private and public variables to better reflect the functionality of class.  We removed the SQL class after understanding that implementing the database link into the CS100 server was unnfeasible, and instead opted into using CSV dataset for a more efficient workflow.  

We also updated our UML to show the correct inheritance of our classes, where previously it was convoluted and confusing.  This included adding correct UML notation such as dotted arrows, aggregation/composition notation, and better formating in general.  This had the benefit of both allowing for the UML to be more easily read and providing a more practical road map for us to code upon.  All in all, the template allowed for less uncertainty and discouraging the cowboy coding mentality.

For considerations of SOLID principles, the main change we made was for the Single Responsibility Principle (SRP).  We separated our classes based on their functionality.  The Input and Output classes are examples of this, each only storing functions for I/O respectively.  This also accounts for the deletions of outputQuestion(), the Menu class, and the outputResult() functions.  This idea of seperation also holds true for out algorithms and Result classes.  This allowed for our code to be more condensed and efficient, allowing for easier coding.

To a lesser extent, we also considered the idea of the Interface Segregation Principle (ISP) when overhauling our UML diagram.  As the ISP states, clients should not have to be dependant upon interface they do not use.  We ensured when creating our classes that each function was something that needed to be used by each inherited class, allowing for no redundant or unused functions following the ISP.  This ensured that when coding, we would never come across a case where a function is empty during implementation, allowing for less redundant and more concise code.  The associated principle of abstraction also played a part in the modification of our diagram as we included certain private and public variables depending on their use case and functionality. 

 ## Phase IV

 ## Final UML
 ![CS100_Final_UML](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/995b92c8-87c9-4295-8a6a-a52e5396196b)
 
 ## Screenshots
 ![1](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/3fee3963-0280-4739-bf99-c20452e5f043)
 ![search choice (2)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/88d363ae-503d-4a13-a9ef-54d2cfb4f08f)
 ![search similar (3)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/a29c1041-04b7-4c47-b5b3-fe09c11f72a6)
 ![search similar result (4)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/a38ec6cc-6696-45b7-bc7b-16d6dabdddfd)
 ![search filter (5)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/07d6272d-2f52-4b6c-a5b4-f8d1e57fa426)
 ![search filter decade (6)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/93bc7fc0-c664-403a-b95b-00e011b63a25)
 ![screen filter duration (7)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/6ae3fc51-6471-4363-8a53-b65bd0a54217)
 ![search filter rating (8)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/d0e9fad5-5ec2-491b-aa5d-cff22707cea0)
 ![search filter popularity (9)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/9c793874-1762-40bd-b87e-797a21c5ea40)
 ![search filter result (10)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/8e3228c7-bf3a-47de-9777-35317dfea124)
 ![quiz question 1 (11)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/675a3df3-132d-4a42-8c9f-51c78a0f7862)
 ![quiz question 2 (12)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/d21adb1f-bac3-496a-907a-1fc746905d75)
 ![quiz question 3 (13)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/5459eaa8-0a37-4b72-b307-448c4a76aaaa)
 ![quiz question 4 (14)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/4afd3b30-9c7a-4070-9e8a-198c7a15cd34)
 ![quiz question 5 (15)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/1693099f-2906-448a-8807-a9902ff6868f)
 ![quiz result (16)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/e498896a-3441-4ed3-b37b-0011f625546b)
 ![surprise result (17)](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/144963579/2b735671-6993-430a-89d5-38b0974f5a19)
 
 ## Installation/Usage
#### Installation:
   1. Visit the github repository at: [Movie Recommender](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007)
   2. Click the green <> Code button in the upper right part of the screen
   3. It will reveal a drop-down menu, and make sure it is on the HTTPS tab. Copy the listed URL.
   4. Open up VSCode (make sure you are in your home directory) and run the command (replacing \<clone-url> with the copied URL):
      ```
      git clone --recursive <clone-url>
      ```
   5. If you see the files and folders load in, then you are good to go!

#### Usage:
   1. In the correct directory, begin by running:
      ```
      cmake .
      ```
      and
      ```
      make
      ```
      These will allow the user to build and execute the code
   2. Run:
      ```
      ./bin/movieRec
      ```
      Note: Make sure you are in the program directory, or there may be issues running the executable
   3. The program should run, and the user will be prompted with a menu of options that list various ways to receive movie recommendations.
      Options include:
        1) Search Similar
             - Presented from the "Search" option, this option allows the user to input a movie (within the database) and receive 3 recommendations based off of similarities between the movies (e.g. genres).
        2) Search Filter
             - Presented from the "Search" option, this option narrows down a user's preferences through filters such as genres, duration, and popularity. 3 specialized movie recommendations will be outputted.
        3) Quiz
             - This option presents the user with a series of fun and personalized questions. The program will suggest 3 movies based off of the user's answers.
        4) Surprise!
             - This option surprises the user with a random movie recommendation.
      
   4. To exit/end the program, users may enter 'q' from the menu. Similarly, if users choose a search option, but decide against it, they may enter 'c' to return to the menu and select a different option.
   5. Upon exiting the menu, the program will end. To run again, simply start from Step 2.

      Note: To view all of the movies and their information, please refer to the movies.csv file.

 ## Testing
Our project was tested and validated through various approaches.

#### Unit Testing:
   We utilized googletest to build and test our functions. We built function tests for every implemented function in our program to maximize coverage and test for potential bugs. This was executed through the use of 63 function tests over 8 separate classes. In order to test specific functions that took in unique parameters or required inputs, we created a Tests class to alter the functions so that they would return a coverage message if the function ran as expected. To build upon this, we would validate each function with a parallel unit test to ensure that the function was ran and tested completely. As a final measure, we opted to use Gcov and Lcov to test our program coverage (aiming for 80%+).

#### Alpha/Beta Testing:
   Prior to our final deliverable, our group opened up our program in two phases to willing participants. In our Alpha phase, we opened our program to close friends and classmates. By allowing our friends to mess around and play with our program, we were able to detect a handful of bugs and features that were not very user-friendly. For example, one participant was particularly eager to use our program's search similar function to receive a movie similar to "Star Wars". However, their excitement quickly turned into confusion as their input resulted in a bug we had not caught before: we had to alter certain cin occurrences to getline statements so that the buffer would take in the whole movie for search similar, not just the first word. For our Beta phase, we decided to ask our TA, Gency, for some pointers on potential improvements during office hours. He was specifically interested in our quiz feature, which worked like expected, but brought new problems to light. As developers, we were largely focused on getting the code to run as expected, but we missed the mark on user experience. We failed to realize two things: the experience was just as important as the functionality and user expectations. When the user entered an invalid input, we were missing a message to prompt them to try again, resulting in great confusion as the program waits for an input and the user waits for further instructions. We were also missing crucial whitespaces, which resulted in a messy user experience.

#### Usability Testing:
   We decided to implement usability testing, because our program must be straightforward, easy to navigate, and user-friendly. To follow through, we handed our program to roommates and acquaintances to try. As they progressed through our program, we would periodically ask them questions regarding the user experience and if the program was confusing in any manner. We ended off by asking for features they would like to see implemented, either to meet their expectations or create a better product overall. This form of testing was specifically useful for us when weighing movies against one another. The testing process enabled us to receive useful feedback regarding the recommended movies and user expectations. For example, in our search filter function, we had previously thought that genre was an important category, but severly underestimated how users viewed its importance. This resulted in a need to increase the weight of genres and decrease the weight of filters such as popularity.

#### Regression Testing:
   A form of testing we had previously overlooked proved to be crucial as we struggled to identify where the bug originated from. Through the complexities of creating, checking out, and merging branches, we thought we had everything together until we realized that we were receiving a reoccuring bug that we had resolved in the previous sprint. This was a combination of bugs originating from our invalid input prompts and change in funtion parameters. We had somehow messed up some of our code during a merge conflict when testing and our working code broke. This resulted in a need for us to re-test functions that had worked to check if our code had regressed. Unfortunately, it had, so we needed to find a different solution and ended up working it out.
 
