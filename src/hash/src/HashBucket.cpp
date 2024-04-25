#include "HashBucket.h"

#include <fstream>
#define BASE_BUCKET_DIR = "/HashDir"

using namespace std;

HashBucket::HashBucket(const string path, unsigned short int local_depth,
                       vector<tuple<unsigned short int, unsigned short int>> entries): path_(path),
    local_depth_(local_depth), entries_(entries)
{
}

bool HashBucket::create(const string path, unsigned short int local_depth,
                        vector<tuple<unsigned short int, unsigned short int>> entries)
{
    return true;
}
