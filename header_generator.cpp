#include <iostream>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;

string getTime(){
    time_t rawtime;
    time(&rawtime);
    return ctime(&rawtime);
}

string getHeader(){
    ifstream file("owner.name");
    string author;
    getline(file, author);
    file.close();
    return "/*\n*\tauthor : " + author + "\n*\tcreate on : " +  getTime() + "*/";
}

int main(){
    cout<<getHeader()<<"\n";
    return 0;
}

