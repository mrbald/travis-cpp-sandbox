#include <type_traits>
#include <iostream>
#include <string_view>

int main() {
    static_assert(std::is_same_v<int, std::remove_reference_t<int&>>);

    std::clog << "Testing...";

    using namespace std::literals;

    if constexpr ("hello"sv.find("llo"sv) == 2u) {
        std::clog << "PASS" << std::endl;
        return 0;
    } else {
        std::clog << "FAIL" << std::endl;
        return 1;
    }
}
