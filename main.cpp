#include<boost/thread.hpp>
#include<iostream>

int main()
{
    boost::thread th
    {
        []
        {
            boost::this_thread::sleep_for(boost::chrono::seconds(5));
            std::cout << "1ouhuohouirghotghtgtguiohtguiothoguihfgfihoughidfghiodfigd";
        }
    };
    std::cout << "first";
    th.join();
    std::cout <<"NIGER";
}