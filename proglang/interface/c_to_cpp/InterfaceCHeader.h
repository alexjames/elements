// This is the header that declares stuff for C code

typedef struct ConfigReader ConfigReader;

ConfigReader* get_config_reader();
void set_config_reader_fname(ConfigReader *cr, const char* fn);
void print_config_reader_fname(ConfigReader *cr);
void delete_config_reader(ConfigReader *cr);
