# typing_test
A program that calculates your WPM and accuracy



https://user-images.githubusercontent.com/69085473/142742489-b77e9e80-40de-4ffe-b0be-a14edaaf4415.mov



<h3>How to run:</h3>

* Navigate to typing_test directory in terminal 
* Type in 'make' to compile 
* Type in ./run to execute

<h3>How it works:</h3>

The program selects any of the 5 open-source science articles provided and displays the first paragraph. Behind the scenes, a 60 second timer function is triggered in parallel to the typing_test so as to not be blocked by the user input. 

Each time a user enters a character, the paragraph on the screen reflects so, green if the letter matches and red if not so. It also resets to the original text color each time the user uses backspaces. All typed entries are constantly stored and updated to calculate the WPM and Accuracy. If the user returns to fix a mistake they made earlier, the program adjusts the values so.

At the end of the 60 timer, the WPM is calculated using the [formula](#ref) below:

![Net_WPM](https://user-images.githubusercontent.com/69085473/142742594-3993972b-0915-4715-94e1-9ad3f5479c58.png)

The accuracy is calculated by dividing the number of correct letters with the total number of letters typed.

<h3>Progress:</h3>
I tracked my work in sprints, all of them typically lasted between 2-3 days.
<br />
<br />
<b>Sprint 1</b>

* Select any one of the 5 articles in random after launching.
* Start a 60 second timer in another thread using multithreading. The program exits after the timer has passed.
* Implement a makefile to compile all relevant text files appropriately.
* Supports user entered article when provided with the file path.
* Displays the first paragraph of the article and can input user characters.

<b>Sprint 2</b>

* The program compares each user inputted character with the paragraph to determine if they match using a pointer. It also adjusts itself for backspaces and incorrect letters.
* Updates to the next paragraph after the initial paragraph is complete.
* Appropriate colors added for correct characters and incorrect characters. Green for right, red for wrong. Backspace resets the characters color and pointer.

<b>Sprint 3</b>

* Calculate the WPM and Accuracy using the relevant formula.
* Calculate num of correct / incorrect characters and appropriately handle when user corrects error.
* Allow user to exit upon Ctrl + C (override system raw)
* Create an infinite loop of paragraphs when text too short. 
* Exit program and display results once 60 second timer runs out in thread.


<h5 id = "ref">Reference: </h5>

* https://www.speedtypingonline.com/typing-equations


