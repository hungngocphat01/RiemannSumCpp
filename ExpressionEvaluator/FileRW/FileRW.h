#ifndef FileRW_h
#define FileRW_h

#include <string>
#include <exception>
using std::string;
using std::exception;
using std::runtime_error;

string FileRead(const char* filename);
void FileWrite(const char* filename, string content);

#endif /* FileRW_h */
