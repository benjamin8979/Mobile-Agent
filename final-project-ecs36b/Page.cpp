#include "Page.h"

Page::Page(std::string argPageName, std::string argPageID, std::string argPostID)
{
    this->pageName = argPageName;
    this->pageID = argPageID;
    this->postID = argPostID;
}

std::string Page::getPageName()
{
    return this->pageName;
}

std::string Page::getPageID()
{
    return this->pageID;
}

std::string Page::getPostID()
{
    return this->postID;
}