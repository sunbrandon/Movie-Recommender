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


 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
