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
        bool flag = false;

        if (argc < 2)
        {
                string s;
                printf("Enter File Name:");
                getline(cin, s);
                file += s;
        }
        else
        {
                file += argv[1];
        }

        if (exists_test(file + ".cpp"))
        {
                Command += file + ".cpp";
        }
        else if (exists_test(file + ".c"))
        {
                Command += file + ".c";
        }
        else
        {
                if (!exists_test(file))
                {
                        printf("File not found!\nCouldn't initiate compilation.\n");
                        return 0;
                }
                Command += file;
        }
        system(Command.data());
        //system("clear");
        system("a");
        return 0;
}
