#include "Agent.h"
#include <string>
#include <iostream>
#include <unistd.h>

Agent::Agent(void)
{}

Agent::Agent(Person *user)
{
    std::cout << "\nAgent: Hello!" << std::endl;
    std::cout << "\nAgent: I am a mobile Agent acting on behalf of " << user->getName() << "!\n\n" << std::endl;
}

int Agent::autoReply(std::string sendTime, std::string message)
{

       if (sendTime == "12pm")
       {
           std::cout << "It is " << sendTime << "\n" << std::endl;
           sleep(3);
           std::cout << "Agent: It is lunchtime, can you pick me up something?\n" << std::endl;
       }
       
       sleep(3);
       std::cout << "Incoming Message: " << message << std::endl;

       if (message == "What time will you be back?")
       {
           sleep(3);
           std::cout << "\nAgent: I will be back at 5pm." << std::endl;
       } 

       if (message == "What do you want to eat?")
       {
           sleep(3);
           std::cout << "\nAgent: I would like some ice cream, please." << std::endl;
       }

       return 0;

}

int Agent::autoReport(Person* user)
{
    if (user->isOnline == true)
    {
        std::cout << "Hello, " << user->getName() << std::endl;
        std::cout << "\nYou were last online at " << user->getTime() << std::endl;
        sleep(3);
        std::cout << "\nWhile you were away..." << std::endl;
        sleep(3);
        std::cout << "\nYour friends' posts:" << std::endl;
        for (int i = 0; i < (user->friends).size(); i++)
        {
            std::cout << "\nPost from " << ((user->friends)[i])->getName() << std::endl;
            std::cout << "<" << ((user->friends)[i])->getProfileID() << "_" << ((user->friends)[i])->getPostID() << ">" << std::endl;
        }
        sleep(5);
        std::cout << "\nPosts from the pages you follow:" << std::endl;
        for (int i = 0; i < (user->pagesFollowed).size(); i++)
        {
            std::cout << "\nPost from " << ((user->pagesFollowed)[i])->getPageName() << std::endl;
            std::cout << "<" << ((user->pagesFollowed)[i])->getPageID() << "_" << ((user->pagesFollowed)[i])->getPostID() << ">" << std::endl;
        }
    }
    return 0;
}


AgentPlus::AgentPlus(void)
{
    std::cout << "\nAgent: Hello!" << std::endl;
    std::cout << "\nAgent: I am a mobile agent here to help you with type assist!\n\n" << std::endl;
}

int AgentPlus::typeAssist(std::string word)
{
    std::cin >> word;
    std::string response;
    if (word == "food" || word == "Food")
    {
        std::string A = "Can you please get me some food?";
        std::string B = "I got food for you.";
        std::string C = "What food do we have?";
        
        std::cout << "\nWhich message would you like to send?" << std::endl;
        std::cout << "\nA: " << A << std::endl;
        std::cout << "\nB: " << B << std::endl;
        std::cout << "\nC: " << C << "\n" << std::endl;
        std::cin >> response;
        std::cout << "\n";

        if (response == "A" || response == "a")
        {
            std::cout << A << std::endl;
            return 0;
        }
        
        if (response == "B" || response == "b")
        {
            std::cout << B << std::endl;
            return 0;
        }

        if (response == "C" || response == "c")
        {
            std::cout << C << std::endl;
            return 0;
        }

    }

    if (word == "help" || word == "Help")
    {
        std::string A = "I need help immediately!";
        std::string B = "Do you need any help?";
        std::string C = "I could use some help today.";
        
        std::cout << "\nWhich message would you like to send?" << std::endl;
        std::cout << "\nA: " << A << std::endl;
        std::cout << "\nB: " << B << std::endl;
        std::cout << "\nC: " << C << "\n" << std::endl;
        std::cin >> response;
        std::cout << "\n";

        if (response == "A" || response == "a")
        {
            std::cout << A << std::endl;
            return 0;
        }
        
        if (response == "B" || response == "b")
        {
            std::cout << B << std::endl;
            return 0;
        }

        if (response == "C" || response == "c")
        {
             std::cout << C << std::endl;
             return 0;
        }
    }
    return 0;
}



