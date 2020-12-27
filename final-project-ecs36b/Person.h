#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include <vector>

#include "Page.h"
#include "Person.h"


class Person
{
 private:
 protected:
 public:
    std::string name;
    bool isOnline;
    std::string lastOnline;
    std::string profileID;
    std::string postID;
    std::vector<Person *> friends;
    std::vector<Page *> pagesFollowed;
    Person(std::string, bool, std::string, std::string, std::string, std::vector<Person *>, std::vector<Page *>);
    std::string getName();
    std::string getTime();
    std::string getProfileID();
    std::string getPostID();
};

#endif /* _PERSON_H_ */