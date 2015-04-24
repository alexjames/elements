// This is the interface
// Best practices:
//               1. Use opaque types instead of void * so that data-type correctness can be assured by compiler
//               2. Since there is no exception handling in C, ensure you do it within the interface
//                  and return appropriate errors
//               3. Use C input data-types as much as possible
#include <string>
#include "ConfigReader.h"

extern "C"
{
    ConfigReader* get_config_reader()
    {
        return reinterpret_cast<ConfigReader* >((new ConfigReader()));
    }

    void set_config_reader_fname(ConfigReader *cr, const char* fn)
    {
        std::string str(fn);
        cr->set_filename(str);
    }

    void print_config_reader_fname(ConfigReader *cr)
    {
        cr->display_filename();
    }

    void delete_config_reader(ConfigReader *cr)
    {
        if (cr != NULL)
        {
            delete reinterpret_cast<ConfigReader* >(cr);
        }
    }
}

