#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // Variables for user input.
    string name;
    int age;

    // Asking user for name and age.
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << '\n';
    cout << "Continue to your personalized page\n";

    // Variable to hold all HMTL code.
    string HTMLcode = "<!DOCTYPE html>\n"
                      "<html>\n"
                      "<head>\n"
                      "\t<title>TherapyMe</title>\n"
                      "</head>\n"
                      "<body>\n"
                      "\t<h1>Therapy Sessions</h1>\n"
                      "\t<h3>--Your Information--</h3>\n"
                      "\t<p>Greetings, " +
                      name + ". :))</p>\n"
                             "<br>"
                             "\t<p>Check out your available sessions below...</p>\n"
                             "\t<ul><li>Tuesday, August 16th</li><li>Thursday, August 18th</li><li>Saturday, August 20th</li></ul>"
                             "<br><br>"
                             "<p>For more help, click here --- ><button>H+</button></p>"
                             "</body>\n"
                             "</html>\n";
    system("pause");

    // Created to write into "report.html" file.
    ofstream myfile;

    // Opens ofstream file in order to write into "report.html" file.
    myfile.open("report.html");
    cout << HTMLcode;

    // If file is loaded successfully, then output everything in "report.html".
    // And if not, then break program.
    if (!myfile)
    {
        cout << "Could not create file. " << endl;
        return 0;
    }
    else
    {
        // Stashes content from HTMLcode into "report.html" file.
        myfile << HTMLcode;
        cout << "File created successfully!\n"
             << endl;
    }

    // Have to close the file once you open it.
    myfile.close();
    cout << "File saved and closed successfully!" << endl;
}