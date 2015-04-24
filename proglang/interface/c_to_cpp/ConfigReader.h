// --- C++ class header ---
// Other consumers are going to #include this, so you don't want to add
// any header files here, preventing multiple declaration or unwanted 
// namespace inclusions

class ConfigReader
{
    public:
        int m_version;
        std::string m_filename;
        void set_filename(std::string fname);
        void display_filename();
    private: 
        void do_stuff();
};

