#ifndef HASH_CODE_H
#define HASH_CODE_H


#define SHA256 1

#include <string>

namespace hash {

    class NotRepresentedType : public std::exception {
    };
    class WrongType : public std::exception {
    };

    class hash_type {
    public:
        static std::string code(const std::string &msg);
    };

    std::string code(const std::string &msg, int type);
}


#endif //HASH_CODE_H
