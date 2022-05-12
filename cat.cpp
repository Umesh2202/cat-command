#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream f;
    string line;

    f.open("sample.txt", ios::in);

    f.seekg(0, ios::beg);

    while (f >> line)
    {
        getline(f, line);

        cout << line << endl;
    }

    f.close();
    return 0;
}