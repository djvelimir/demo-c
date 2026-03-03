add_executable(test_leapyear
    test_leapyear.c
)

target_link_libraries(test_leapyear PRIVATE leapyear)

add_test(NAME leapyear_tests COMMAND test_leapyear)