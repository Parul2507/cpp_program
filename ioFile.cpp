#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string foutput;
    string finput;
    cout << "Enter output file nama\n";
    cin >> foutput;
    cout << "Enter input file nama\n";
    cin >> finput;

    ofstream out(foutput);
    ifstream in(finput);
    string lines;

    if (out.is_open() && in.is_open())
    {
        while (getline(in, lines))
        {
            out << lines << endl;
        }
        cout << "files has been copied\n";
        in.close();
        out.close();
    }
    else
    {
        cout << finput << " This file does not exist\n";
    }
}