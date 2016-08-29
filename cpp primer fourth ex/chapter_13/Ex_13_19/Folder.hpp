#ifndef __FOLDER_HPP
#define __FOLDER_HPP
#include <iostream>
#include <set>
#include "Message.hpp"
class Message;
class Folder
{
public:
    Folder() {}
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void save(Message&);
    void remove(Message&);
    void addMsg(Message*);
    void remMsg(Message*);
private:
    std::set<Message*> messagers;
    void put_Fld_in_messagers(const std::set<Message*>&);
    void remove_Fld_from_messagers();
};
#endif
