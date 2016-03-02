 ///---------------------------------------///
 /// @file is the helloworld.cpp
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-02 15:36:44
 ///------------------------------------------///
#include <iostream>
#include <log4cpp/Category.hh>
#include <log4cpp/OstreamAppender.hh>
#include <log4cpp/FileAppender.hh>
#include <log4cpp/Layout.hh>
#include <log4cpp/BasicConfigurator.hh>
#include <log4cpp/Priority.hh>

int main ()
{
    log4cpp::Appender * appender1 = new log4cpp::OstreamAppender("console",&std::cout);
    appender1->setLayout(new log4cpp::BasicLayout());
    log4cpp::Category & root = log4cpp::Category::getRoot();
    root.setPriority(log4cpp::Priority::WARN);
    root.setAppender(appender1);

    root.error("root error");
root.info("root info");
root.warn("%d+%d=%s",1,1,"two");
return 0;
}
