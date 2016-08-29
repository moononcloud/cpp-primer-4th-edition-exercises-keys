#include "Message.hpp"

Message::Message(const Message&m):contents(m.contents),folders(m.folders)
{
    put_Msg_in_Folders(folders);
}

Message& Message::operator=(const Message&rhs)
{
    if(&rhs!=this)
    {
    remove_Msg_from_Folders();
    contents=rhs.contents;
    folders=rhs.folders;
    put_Msg_in_Folders(folders);
    }
    return *this;

}

Message::~Message()
{
    remove_Msg_from_Folders();
}

void Message::put_Msg_in_Folders(const std::set<Folder*>&rhs)
{
    for(std::set<Folder*>::const_iterator bit=rhs.begin();
    bit!=rhs.end();++bit)
        (*bit)->addFldr(this);
}

void Message::remove_Msg_from_Folders()
{
    for(std::set<Folder*>::const_iterator bit=folders.begin();
    bit!=folders.end();++bit)
        (*bit)->remFldr(this);
}

void Message::addFldr(Folder* ptF)
{
    folders.insert(ptF);
}

void Message::remFldr(Folder* ptF)
{
    folders.erase(ptF);
}