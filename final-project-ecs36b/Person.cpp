#include "Person.h"

Person::Person(std::string argName, bool argIsOnline, std::string argLastOnline, std::string argProfileID, 
               std::string argPostID, std::vector<Person *> argFriends, std::vector<Page *> argPagesFollowed)
{
    this->name = argName;
    this->isOnline = argIsOnline;
    this->lastOnline = argLastOnline;
    this->profileID = argProfileID;
    this->postID = argPostID;
    this->friends = argFriends;
    this->pagesFollowed = argPagesFollowed;
}

std::string Person::getProfileID()
{
    return this->profileID;
}

std::string Person::getPostID()
{
    return this->postID;
}

std::string Person::getName()
{
    return this->name;
}

std::string Person::getTime()
{
    return this->lastOnline;
}