#include "Agent.h"
#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>

int main()
{
    Page page_1("Gotham City Crime", "7654", "0022");

    Page page_2("Batmobile", "3210", "4455");

    Person person_1("Alfred", false, "4pm", "1234", "9999", {}, {});

    Person person_2("Robin", false, "10am", "2345", "7777", {}, {});

    Person person_3("Batman", true, "12am", "6789", "3333", {&person_1, &person_2}, {&page_1, &page_2});

    std::cout << "\n======================" << std::endl;
    std::cout << "Agent with Auto Report" << std::endl;
    std::cout << "======================\n";

    Agent agent_0(&person_3);

    sleep(3);

    agent_0.autoReport(&person_3);

    sleep(10);

    std::cout << "\n=====================" << std::endl;
    std::cout << "Agent with Auto Reply" << std::endl;
    std::cout << "=====================\n";

    Agent agent_1(&person_1);

    sleep(3);

    agent_1.autoReply("11am", "What time will you be back?");

    sleep(7);

    std::cout << "\n=====================" << std::endl;
    std::cout << "Agent with Auto Reply" << std::endl;
    std::cout << "=====================\n";

    Agent agent_2(&person_2);

    sleep(3);

    agent_2.autoReply("12pm", "What do you want to eat?");

    sleep(7);

    std::cout << "\n==========================" << std::endl;
    std::cout << "AgentPlus with Type Assist" << std::endl;
    std::cout << "==========================\n";

    AgentPlus agent_3;

    sleep(3);

    agent_3.typeAssist("food");

    sleep(5);

    std::cout << "\n==========================" << std::endl;
    std::cout << "AgentPlus with Type Assist" << std::endl;
    std::cout << "==========================\n";

    AgentPlus agent_4;

    sleep(3);

    agent_4.typeAssist("Help");

    sleep(5);

    std::cout << "\n";
}