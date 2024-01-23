#include <iostream>
#include <string>
using namespace std;

int main() {
    string Name;
    int iDNum;
    string eNTer;
    string ready;
    int Points = 100;
    string userAnswer;

    cout << "Hey there! What is your name? ";
    cin >> Name;

    cout << "Great! Now enter your Identification number: ";
    cin >> iDNum;

    cout << "All is set! ... My name is WordMan, and I am here to help." << endl;
    cout << "So, as my name suggests, I am a word game helper. You can also call me your personal word master." << endl;
    cout << "Type 'Enter' to continue: ";
    cin >> eNTer;

    if (eNTer == "Enter" || eNTer == "enter" || eNTer=="ENTER") {
        cout << "Great! Let's go!" << endl;
    } else {
        cout << "Error" << endl;
        return 1;
    }

    cout << "This is how the game works: I will give you a word with blank spaces, and you are to guess the word." << endl;
    cout << "You would be given 100 points to start with, and every wrong answer deducts 20 points, while the right one gives you 10 points." << endl;
    cout << "Before we start, make sure your caps lock is on. Turn on your caps lock key on your keyboard." << endl;
    cout << "Are you ready? Type 'Yes' or 'No': ";
    cin >> ready;

    if (ready == "Yes" || ready == "yes" || ready=="YES") {
        cout << "Okay!" << endl;
    } else {
        cout << "Alright! Come back when you are ready!" << endl;
        return 1;
    }

    cout << "Find the word: B _ M _ _ O" << endl;
    cin >> userAnswer;

    if (userAnswer == "BAMBOO" || userAnswer == "bamboo" || userAnswer="Bamboo") {
        Points += 10;
        cout << "Alrighty! You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "Your answer is wrong. Minus 20 points." << endl;
    }

    cout << "Find the word: _ _A Z_ _ G" << endl;
    cin >> userAnswer;

    if (userAnswer == "AMAZING" || userAnswer == "amazing" userAnswer=="Amazing") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: N _ _W _ _K I _G" << endl;
    cin >> userAnswer;

    if (userAnswer == "NETWORKING" || userAnswer == "networking" || userAnswer == "Networking") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: G _ _ A _ E _" << endl;
    cin >> userAnswer;

    if (userAnswer == "GREATER" || userAnswer == "greater" || userAnswer== "Greater") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: H _ _ P _ _ _ S S" << endl;
    cin >> userAnswer;

    if (userAnswer == "HAPPINESS" || userAnswer == "happiness" || userAnswer == "Happinesss") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: S _ _ _ _ N T _ F _ C" << endl;
    cin >> userAnswer;

    if (userAnswer == "SCIENTIFIC" || userAnswer == "scientific" || userAnswer == "Scientific") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: H _ A _ _" << endl;
    cin >> userAnswer;

    if (userAnswer == "HEALTH" || userAnswer == "health" || userAnswer == "Health") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: W _ A _ _ _" << endl;
    cin >> userAnswer;

    if (userAnswer == "WEALTH" || userAnswer == "wealth" || userAnswer == "Wealth") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: L _ _ _" << endl;
    cin >> userAnswer;

    if (userAnswer == "LIFE" || userAnswer == "life" || userAnswer == "Life") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout << "Find the word: P _ _ S _ _ _ I _ Y" << endl;
    cin >> userAnswer;

    if (userAnswer == "PROSPERITY" || userAnswer == "prosperity" || userAnswer == "Prosperity") {
        Points += 10;
        cout << "You gained 10 points." << endl;
    } else {
        Points -= 20;
        cout << "You are wrong! Minus 20 points." << endl;
    }

    cout<<"Find the word: G _ O _ _ F Y" << endl;
    cin >> userAnswer;

    if (userAnswer =="GLORIFY" || userAnswer == "Glorify" || userAnswer == "glorify"){
        Points+= 10;
        cout<< "You gained 10 points." << endl;
    }
    else
    {
        Points -=20;
        cout <<"You are wrong! Minus 20 points." << endl;
    }

    cout<<"Find the word: G A _ _ A N T _ _ L" << endl;
    cin>> userAnswer;

    if ( userAnswer == " GANGANTUAL" || userAnswer =="Gangantual" || userAnswer == "gangantual"){
        Points += 10;
        cout<<"You gained 10 points." << endl;
    }
    else{
        Points -=20;
        cout<<"You are wrong! Minus 20 points."<<endl;
    }
    cout<<" Find the word P _ _ R M _ _ Y" << endl;
    cin>> userAnswer;

    if (userAnswer == "PHARMACY" || userAnswer == "Pharmacy"|| userAnswer == "pharmacy")
    { Points += 10;
    cout<<"You gained 10 points."<<endl;}
    else{

        Points -= 20;
        cout<<"You are wrong! Minus 20 points."<< endl;
    }

    cout<<"Find the word: _ R E _ _ R _ D" << endl;
    cin userAnswer;

    if (userAnswer == "PREPARED" || userAnswer == "Prepared" || userAnswer == "prepared")
    { Points += 10;
        cout<<"You gained 10 points." << endl;
    }
    else{ Points -=
           cout<<"You are wrong! Minus 20 points."<< endl;
    }

    cout<<"Find the word: E _  E _ _ T _ _ N"<< endl;
    cin>> userAnswer;

    if (userAnswer == "EXECUTION" || userAnswer == "Execution" || userAnswer == "execution")
    { Points += 10;
        cout<<" You gained 10 points." << endl;
    }
    else{ Points -= 20;
             cout<<"You are wrong! Minus 20 points."<< endl;     
}

    cout << "Your total points: " << Points << endl;

    return 0;
}
