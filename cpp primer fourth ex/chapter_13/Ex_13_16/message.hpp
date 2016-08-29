#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
#include <string>
#include <set>
class Message
{
public:
    Message(const std::string &str=" "):contents(str){}
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    void save(Folder&);
    void remove(Folder&);
    void addMsg(Folder*);
    void remMsg(Folder*);
private:
    std::string contents;
    std::set<Folder*> folders;
    void put_Msg_in_Folders(const std::set<Folder*>&);
    void remove_Msg_from_Folders();
};
#endif
