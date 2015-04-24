// Class implementation
// This is where purely the implementation goes

#include <iostream>
#include <string.h>
#include "ConfigReader.h"
using namespace std;

void ConfigReader::set_filename(std::string fname)
{
    m_filename = fname;
}

void ConfigReader::display_filename()
{
    cout << "this is the filename : "<< m_filename << endl;
}

