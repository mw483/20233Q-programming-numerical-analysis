#include<fstream>
#include<iomanip>
using namespace std;
//--- main:
int main(int argc, char **argv)
{
    ofstream file1;
    file1.open(argv[1]);
    file1 << "0";
    file1.close();
    return 0;
}