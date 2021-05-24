#include<iostream>
#include "log_class_static.cpp"

using namespace std;

extern int var_static;

class Log
{
public:
    const int LogLevelError=0;
    const int LogLevelWarning=1;
    const int LogLevelInfo=2;
private:
    int m_LogLevel=2;
public:
    void SetLevel(int level)
    {
        m_LogLevel=level;
    }

    void Error(const char* message)
    {
        if(m_LogLevel>=LogLevelError)
            cout<<" [ERROR] : "<<message<<endl;
    }

    void Warn(const char* message)
    {
        if(m_LogLevel>=LogLevelWarning)
            cout<<" [WARNING] : "<<message<<endl;
    }

    void Info(const char* message)
    {
        if(m_LogLevel>=LogLevelInfo)
            cout<<" [INFO] : "<<message<<endl;
    }
};

int main()
{
    Log log;

    log.SetLevel(log.LogLevelWarning);
    log.Warn("This is a Warning!");
    log.Info("This is Info");
    log.Error("This is an Error");

    cout<<var_static<<endl;

    return 0;
}