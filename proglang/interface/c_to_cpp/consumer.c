#include <stdio.h>
#include "InterfaceCHeader.h"

int main()
{
    ConfigReader *r = get_config_reader();
    set_config_reader_fname(r, "/some/file/path");
    print_config_reader_fname(r);
    delete_config_reader(r);
    return 0;
}
