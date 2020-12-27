#ifndef _PAGE_H_
#define _PAGE_H_


#include <string>
#include <vector>


class Page
{
 private:
 protected:
 public:
    std::string pageName;
    std::string pageID;
    std::string postID;
    Page(std::string, std::string, std::string);
    std::string getPageName();
    std::string getPageID();
    std::string getPostID();
};

#endif /* _PAGE_H_ */