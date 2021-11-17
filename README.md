# typing_test
A program that calculates your WPM and accuracy

<h3>How to run</h3>
Navigate to typing_test directory in terminal -> Type in 'make' to compile -> Type in ./run to execute

<h3>Progress</h3>
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
