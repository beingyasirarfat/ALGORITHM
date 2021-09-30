#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <dirent.h>
using namespace std;
bool exists_test(const string name)
{
    ifstream f(name.c_str());
    return f.good();
}
string current_working_directory()
{
    char *cwd = _getcwd(0, 0);
    string working_directory(cwd);
    free(cwd);
    return working_directory;
}
int main(int argc, char const *argv[])
{
    string file = current_working_directory();
    file += "\\";
    //string file = argv[0];
    //file.erase(file.length() - 11, 11);
    string Command = "g++ ";
    string fileWoExt;
    bool flag = false;

    if (argc < 2)
    {
        string s;
        printf("Enter File Name:");
        getline(cin, s);
        file += s;
        fileWoExt = s;
    }
    else
    {
        file += argv[1];
        fileWoExt = argv[1];
    }
    if (exists_test(file + ".cpp"))
    {
        file += ".cpp";
    }
    else if (exists_test(file + ".c"))
    {
        file += ".c";
    }
    else if (exists_test(file))
    {
        if (file.find_last_of("."))
        {
            string s = file.substr(file.find_last_of("."));
            if (!(s == ".c" || s == ".cpp"))
            {
                printf("File type not valid!\nCouldn't initiate compilation.\n");
                return 0;
            }
        }
    }
    else if (!exists_test(file))
    {
        printf("File not found!\nCouldn't initiate compilation.\n");
        return 0;
    };

    if (fileWoExt.find_last_of("."))
        fileWoExt = fileWoExt.substr(0, fileWoExt.find_last_of("."));

    Command += " -o " + fileWoExt + " " + file + " && echo $?";
    cout << "#Compiling " << fileWoExt << "....." << endl;
    int b = system(Command.data());
    if (!b)
    {
        cout << "Compilation successful" << endl
             << "Running " << fileWoExt << ".exe..." << endl;
        system("clear");
        system(fileWoExt.data());
    }
    else
    {
        cout << endl
             << endl
             << "#Failed." << endl
             << "Fix the errors above and compile again." << endl;
    }

    return 0;
}
