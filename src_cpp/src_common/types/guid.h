#pragma once

#include <cstdint>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

namespace FakePDB::Common {
    struct GUID {
        unsigned long Data1;
        unsigned short Data2;
        unsigned short Data3;
        unsigned char Data4[8];

        [[nodiscard]] std::string ToHex() const;

        static std::string ToHex(const std::vector<uint8_t> &vec);
    };
}
