/*
 * Do not edit this file. This toggles between the test harness and 
 * the student written main function depending on the settings inside toggletests.
 * 
 * Author: Avery Wang (awvry952@stanford.edu)
 */

#include "hashmap.h"
#include "tests.cpp"
#include "student_main.cpp"
#include "test_settings"

int main() {
#if RUN_TEST_HARNESS
    run_test_harness(); 
#else
    student_main();
#endif
    return 0;
}