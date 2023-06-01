add_test([=[Tree.Test1]=]  [==[C:/Users/alesh/CLionProjects/c++ programing university/Idz5/cmake-build-debug/main.exe]==] [==[--gtest_filter=Tree.Test1]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Tree.Test1]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Users/alesh/CLionProjects/c++ programing university/Idz5/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  main_TESTS Tree.Test1)
