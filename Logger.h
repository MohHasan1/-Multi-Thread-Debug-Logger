
enum Level {
    DEBUG, 
    WARNING, 
    ERROR, 
    CRITICAL
};

void InitializeLog() {
    cout << "this is a test server, yet to implemenr \n";
}

void SetLogLevel(Level _level) {

}

void Log(Level _level, const std::string &_file, const std::string &_func, int _line, const std::string& _msg) {
    std::cout << "Level: " << _level << ", File: " << _file << ", Function: " << _func << ", Line: " << _line << ", Message: " << _msg << std::endl;
}

void ExitLog() {
    cout << "exiting\n";
}
