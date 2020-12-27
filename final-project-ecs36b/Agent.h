#ifndef _AGENT_H_
#define _AGENT_H_

#include "Person.h"
#include "Page.h"

#include <string>
#include <vector>

class Agent
{
 private:
 protected:
    bool isOnline;
 public:
    Agent(void);
    Agent(Person*);
    bool userPreferences(bool disabilitySetting);
    int autoReply(std::string, std::string);
    int autoReport(Person *);
};

class AgentPlus: public Agent
{
 private:
 protected:
 public:
    AgentPlus(void);
    int typeAssist(std::string);
};


#endif /* _AGENT_H_ */