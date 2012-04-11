#include <iostream>
#include <iomanip>
#include <fstream>
#include <openssl/evp.h>

using namespace std;

//
// Computes the sha1 sum of a file
//
int main(int argc, char** argv)
{
    if(argc != 2)
    {
        cout << "Give a filename as argument." << endl;
        return 0;
    }
    string filename(argv[1]);
    ifstream input;
    input.open(filename.c_str(), ios::in);
    if(!input.is_open())
    {
        cout << "Could not open file [" << filename << "]" << endl;
        return 0;
    }
    

    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_sha1();
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len, i;
    mdctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(mdctx, md, NULL);
    
    const long int chunkSize = 1024;
    char buffer[chunkSize];
    input.seekg(0, ios::end);
    streampos fileEnd = input.tellg(); cout << "length " << fileEnd << endl;
    input.seekg(0, ios::beg);
    streampos current = input.tellg();
    while(current + chunkSize < fileEnd)
    {
        input.read(buffer, chunkSize); cout.write(buffer, chunkSize);
        EVP_DigestUpdate(mdctx, buffer, chunkSize);
        current = input.tellg();
    }
    long int restToRead = fileEnd - current;
    input.read(buffer, restToRead);
    EVP_DigestUpdate(mdctx, buffer, restToRead);
        
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_destroy(mdctx);
    cout << setbase(16) << setfill('0');
    cout << "Digest is:" << endl;
    for(i = 0; i < md_len; i++)
    {
        cout << setw(2) << static_cast<int>(md_value[i]);
    }
    cout << endl;
    string command = string("sha1sum ").append(filename);
    system(command.c_str());

    return 0;
}
