#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{56, 76, 21, 13, 12};
    assert(score_signal(signal_case_1) == 154);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{95, 74, 14, 12, 7};
    assert(score_signal(signal_case_2) == 223);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{77, 106, 14, 24, 7};
    assert(score_signal(signal_case_3) == 171);
    assert(classify_signal(signal_case_3) == "review");
}
