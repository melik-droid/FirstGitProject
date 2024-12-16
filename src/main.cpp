#include <iostream>
#include <string>

using namespace std;


class Printer {

    public:
        Printer(string name, int paper){
            _name = name;
            _availablePaper = paper;
        }

        void Print(string txtDoc) {
            int requiredPaper = txtDoc.length() / 10 ;

            if( requiredPaper > _availablePaper )
                // throw "No Paper";
                throw 101.01;
            cout << "Printing..." << txtDoc << endl;
            _availablePaper -= requiredPaper;
        }
    private:
        string _name;
        int _availablePaper;

};


int main(void){
    Printer myPrinter("HP DeskJet 1234", 10);
    try{    
    myPrinter.Print("Hello, my name is Saldina. I am a Software Engineer.");
    myPrinter.Print("Hello, my name is Saldina. I am a Software Engineer.");
    myPrinter.Print("Hello, my name is Saldina. I am a Software Engineer.");

    cout << "Melik" << endl; 
    }
    catch (const char * txtException ) {
        cout << "Exception: " << txtException << endl;
    }
    catch ( int intException ){
        cout << "Exception: " << intException << endl;
    }
    catch (...){
        cout << "Exception happened!!!" << endl;
    }
}