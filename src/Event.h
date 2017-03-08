//
// Created by huan on 3/7/17.
//

#ifndef CPU_SCHEDULING_SIMULATOR_EVENT_H
#define CPU_SCHEDULING_SIMULATOR_EVENT_H

#include <iostream>

enum EventType {
    THREAD_ARRIVED = 0,
    THREAD_DISPATCH_COMPLETED,
    PROCESS_DISPATCH_COMPLETED,
    CPU_BRUST_COMPLETED,
    IO_BRUST_COMPLETED,
    THREAD_COMPLETED,
    THREAD_PREEMPTED,
    DISPATCHER_INVOKED,
    NONE_EVENT_TYPE
};

class Event {
public:
    // default constructor
    Event();
    Event(EventType type);

    EventType eventType;

    friend std::ostream &operator<<(std::ostream &os, const Event &dt);
private:
    const char *eventStr[8] = {"THREAD_ARRIVED", "THREAD_DISPATCH_COMPLETED", "PROCESS_DISPATCH_COMPLETED",
                            "CPU_BRUST_COMPLETED", "IO_BRUST_COMPLETED", "THREAD_COMPLETED", "THREAD_PREEMPTED",
                            "DISPATCHER_INVOKED"};
};


#endif //CPU_SCHEDULING_SIMULATOR_EVENT_H
