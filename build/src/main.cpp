#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <bitset>

#include "include/SunSpecModbus.h"

using namespace std;

int main()
{
    map <string,string> configs;
    configs["key"] = "1850954613";
    configs["did"]="1";
    configs["path"]="../data/models/smdx/";
    configs["ip"]="10.10.0.111";
    configs["port"]="502";
    SunSpecModbus ssmb(configs);
    cin.get();
    return 0;
}
