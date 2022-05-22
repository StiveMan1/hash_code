#include "hash_code.h"
#include "sha256.h"

std::string hash::code(const std::string &msg, const int type) {
    switch (type) {
        case SHA256:
            return hash::sha256::code(msg);
    }
    throw WrongType();
}

std::string hash::hash_type::code(const std::string &msg) {
    throw NotRepresentedType();
}
