#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

struct Question
{
    string questionTxt;
};

struct Answer
{
    string answer[3];
    int correctAns = 0;
};

void printQuestion(Question question)
{
    cout << question.questionTxt << endl;
}
void printAnswer(Answer answer)
{
    for (int i = 0; i < 3; i++)
    {
        cout << i << "." << answer.answer[i] << endl;
    }
}

void CorrectAnswer(int ans)
{
    int answer;
    cout << "Choose 1-3: ";
    cin >> answer;
    if (answer < 0 || answer > 3)
    {
        cout << "Invalid option!";
    }
    if (answer == ans)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
}
int main()
{
    Question question1;
    question1.questionTxt = "What is the smallest country ?";
    printQuestion(question1);
    Answer ans;
    ans.answer[0] = "1. USA";
    ans.answer[1] = "2. India";
    ans.answer[2] = "3. Vatican City";
    ans.correctAns = 3;
    printAnswer(ans);
    CorrectAnswer(ans.correctAns);

    Question question2;
    question2.questionTxt = "What is the biggest animal in the world ?";
    printQuestion(question2);
    Answer ans2;
    ans2.answer[0] = "1. Elephant";
    ans2.answer[1] = "2. Blue whale";
    ans2.answer[2] = "3. Great white shark";
    ans2.correctAns = 2;
    printAnswer(ans2);
    CorrectAnswer(ans2.correctAns);

    Question question3;
    question3.questionTxt = "How many elements are there in the periodic table of element ?";
    printQuestion(question3);
    Answer ans3;
    ans3.answer[0] = "1. 118 elements";
    ans3.answer[1] = "2. 119 elements";
    ans3.answer[2] = "3. 120 elements";
    ans3.correctAns = 1;
    printAnswer(ans3);
    CorrectAnswer(ans3.correctAns);

    Question question4;
    question4.questionTxt = "155 % 10 ?";
    printQuestion(question4);
    Answer ans4;
    ans4.answer[0] = "1. 15";
    ans4.answer[1] = "2. 5";
    ans4.answer[2] = "3. 15,5";
    ans4.correctAns = 2;
    printAnswer(ans4);
    CorrectAnswer(ans4.correctAns);

    Question question5;
    question5.questionTxt = "Where is Bali";

    printQuestion(question5);
    Answer ans5;
    ans5.answer[0] = "1. Malaysia";
    ans5.answer[1] = "2. Venezuela";
    ans5.answer[2] = "3. Indonesia";
    ans5.correctAns = 3;
    printAnswer(ans5);
    CorrectAnswer(ans5.correctAns);

    return 0;
}