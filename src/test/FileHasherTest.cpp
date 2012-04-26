#include "FileHasherTest.h"

#include "FileHasher.h"
#include "Log.h"
#include <iostream>
#include <string>

FileHasherTest::FileHasherTest()
{
}

void FileHasherTest::run()
{
    Log::get() << "Testing FileHasher" << Log::Endl;
    HashSum hash = FileHasher::hash("test_file");
    std::cerr << hash << std::endl;

    std::string command = std::string("sha1sum ").append("test_file");
    system(command.c_str());
}
