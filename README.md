 # Movie Recommender
 
 > Author(s): Brandon Sun ([@sunbrandon](https://github.com/sunbrandon)),
            Aaron Lin ([@aaronlin79](https://github.com/aaronlin79)),
            David Lee ([@davidbjol](https://github.com/davidbjol)),
            Darren Banh ([@darrenbanh](https://github.com/darrenbanh))

## Project Description
 > A movie recommender implemented with C++ and possibly SQL
 > * Why is it important or interesting to you?
>> * We found this project interesting because we wanted to work with data bases and movies are a great way to implement a data base search system that has real world applications. Our project will help people with certain movie preferences to be able to find other movies similar to what the like and make the hunt for finding something good to watch a lot easier.
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
>>  * In order to build this project we plan on using C++ and implenting an SQL database with MySQL/BigQuery and connecting it using the C++ library SQLAPI++/SQLite. This would allow us to write the majority of our code in C++ while having the ability to traverse different data bases based on things like genre, release date, actors, etc. instead of having everything locally.
 > * What will be the input/output of your project?
>>  * For our project we will ask the user to input a movie name and our program will use different algorithms to recommened and output a list of movies based on similarities like genre, release date, actors, etc. with the movie the user input. We will also allow the user to search for movies based on their preferences with genre, release dates, actors, etc.
 > * What are the features that the project provides?
>>  * We will have a list of options for the user to choose from in order to search and recommend movies based on different algorithms like movie genre, actors, directors, length, etc. Our program will give the user the freedom to decide whether they want to find a movie similar to one they already like or if they want to find movies that are under a given genre, director, era, or contains an actor that they like.
 > 
 > ## Phase II
## User Interface Specification

### Navigation Diagram
>  ![Navigation Diagram](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/132787942/4d1fc0d3-ea6f-41cb-8b31-4cb562996b95)\
   Diagram of the movie recommendator including the various decision branches included in the program.

### Screen Layouts
> ![Screen Layout](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/132787942/4c011715-91de-4117-b55f-5f34e1759e5f)

## Class Diagram
 > ![UML](https://github.com/cs100/final-project-dlee486-alin166-bsun045-dbanh007/assets/132787942/04c09e43-991f-4cb1-b012-b98da62f8311)\
   Diagram of our program's main classes including the inheritances of each class and the relationships between each class.

 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
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
 
