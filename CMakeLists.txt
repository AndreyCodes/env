cmake_minimum_required(VERSION 3.23)


add_subdirectory(boost EXCLUDE_FROM_ALL)


project(MyApp)


add_executable(MyApp main.cpp)
target_include_directories(MyApp PUBLIC boost/libs/thread/include)
target_link_libraries(MyApp PUBLIC Boost::thread)
