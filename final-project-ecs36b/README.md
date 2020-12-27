# Mobile Agent Demo Project

This is a demo for how a mobile agent could perform certain tasks to aid a user in responding to messages and staying caught up on daily social media information.

# Scenario.cpp

Scenario.cpp is the driver function that displays a particular scenario for the mobile agent.

## usage

To Compile
```bash
$ g++ -std=c++2a *.cpp -o agent
```

To Execute:
```bash
$ ./agent
```

# Agent.cpp

Agent.cpp contains the functions that the agent can perform to help the user.

The Agent class contains the functions autoReply, which automatically responds to simple messages that the agent knows the answer to, and autoReport, which delivers a streamlined summary of important social media posts since the user was last on their device.

The AgentPlus class is specifically meant to help users with cognitive or language disabilities with the function typeAssist, which provides message options for the user to select based on a single word that they type.

An expanded version of this demo would have the agent able to learn from the user to better customize and respond to messages. 

# Person.cpp

Person.cpp contains the information for a person using the mobile agent as well as the people the user follows.

# Page.cpp

Page.cpp contains the information for a page that a user follows.
