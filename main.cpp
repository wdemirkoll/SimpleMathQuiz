#include <iostream>
using namespace std;

// Global variables to track score and user reply
int Score = 0;
char Reply;

// Question 1: Checks if the user's answer is correct (A/a)
void Question1(){
    if(Reply == 'A' || Reply == 'a'){
        Score++; // Increment score for correct answer
        cout << "True!" << endl;
    }
    else
        cout << "False!" << endl;
}

// Question 2: Checks if the user's answer is correct (B/b)
void Question2(){
    if(Reply == 'B' || Reply == 'b'){
        Score++;
        cout << "True!" << endl;
    }
    else
        cout << "False!" << endl;
}

// Question 3: Checks if the user's answer is correct (A/a)
void Question3(){
    if(Reply == 'A' || Reply == 'a'){
        Score++;
        cout << "True!" << endl;
    }
    else
        cout << "False!" << endl;
}

// Question 4: Checks if the user's answer is correct (C/c)
void Question4(){
    if(Reply == 'C' || Reply == 'c'){
        Score++;
        cout << "True!" << endl;
    }
    else
        cout << "False!" << endl;
}

// Question 5: Checks if the user's answer is correct (B/b)
void Question5(){
    if(Reply == 'B' || Reply == 'b'){
        Score++;
        cout << "True!" << endl;
    }
    else
        cout << "False!" << endl;
}

int main(){
    // Question 1
    cout << "56 * 20 = ?" << endl;
    cout << "A - 1120" << endl;
    cout << "B - 1050" << endl;
    cout << "C - 950" << endl;
    cout << "Reply, ";
    cin >> Reply;

     Question1();

    // Question 2
    cout << "\n247 + 355 = ?" << endl;
    cout << "A - 600" << endl;
    cout << "B - 602" << endl;
    cout << "C - 700" << endl;
    cout << "Reply, ";
    cin >> Reply;

     Question2();

    // Question 3
    cout << "\n900 / 60 = ?" << endl;
    cout << "A - 15" << endl;
    cout << "B - 10" << endl;
    cout << "C - 5" << endl;
    cout << "Reply, ";
    cin >> Reply;

     Question3();

    // Question 4
    cout << "\n147 + 237 = ?" << endl;
    cout << "A - 400" << endl;
    cout << "B - 500" << endl;
    cout << "C - 384" << endl;
    cout << "Reply, ";
    cin >> Reply;

     Question4();

    // Question 5
    cout << "\n500 / 250 = ?" << endl;
    cout << "A - 3" << endl;
    cout << "B - 2" << endl;
    cout << "C - 5" << endl;
    cout << "Reply, ";
    cin >> Reply;

     Question5();

    // Display final score
    cout << "All questions are complete. Out of 5 questions, " << Score << " were answered correctly." << endl;

  return 0;
}
