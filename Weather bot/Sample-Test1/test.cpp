

#include "../../Weather bot/Weather bot/Date.h"

#include "../../Weather bot/Weather bot/weath.h"
#include "../../Weather bot/Weather bot/catch_amalgamated.hpp"


TEST_CASE("Datetest", "[Feb_test]")
{
    REQUIRE(Feb_test(29,2,2024) == true);
    REQUIRE(Feb_test(30, 2, 2024) == false);
    REQUIRE(IsLeap(2024) == true);
    REQUIRE(IsLeap(2023) == false);


 
}