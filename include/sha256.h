#ifndef SHA256_H
#define SHA256_H


#include <hash_code.h>

namespace hash{
    class sha256: virtual hash_type{
    public:
        static std::string code(const std::string &msg);
    };
}

#endif //SHA256_H
