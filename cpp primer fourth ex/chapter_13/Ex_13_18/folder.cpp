#include "Folder.hpp"
#include "Message.hpp"
#include <iostream>
Folder::Folder(const Folder &f): messagers(f.messagers)
{
    put_Fld_in_messagers(messagers);
}

Folder& Folder::operator=(const Folder&rhs)
{
    if(rhs!=this)
    {
        remove_Fld_from_messagers();
        messagers=rhs.messagers;
        put_Fld_in_messagers(messagers);
    }
return *this;    
}

Folder::~Folder()
{
    remove_Fld_from_messagers();
}

void Folder::put_Fld_in_messagers(const std::set<Message*>&rhs)
{
    for(std::set<Message*>::const_iterator beg=rhs.begin();beg!=rhs.end();++beg)
        (*beg)->addFldr(this);
}

void Folder::remove_Fld_from_messagers()
{
    for(std::set<Message*>::const_iterator beg=messagers.begin();
    beg!=messagers.end();++beg)
    (*beg)->remFldr(this);
}

void Folder::addMsg(Message* ptM)
{
    messagers.insert(ptM);
}

void Folder::remMsg(Message* ptM)
{
    messagers.erase(ptM);
}