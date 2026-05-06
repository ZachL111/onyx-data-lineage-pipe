#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{69, 31, 12, 64};
    assert(domain_review_score(item) == 197);
    assert(domain_review_lane(item) == "ship");
}
