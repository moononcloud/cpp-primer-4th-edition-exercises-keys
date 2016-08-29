#include <iostream>
#include "Message.hpp"

int main(int argc, char **argv)
{
  Message msg_in("in"), msg_out("out"), msg_empty, msg_test(msg_out);
  Folder fld_in, fld_out;

  msg_in.save(fld_in);
  msg_out.save(fld_out);
}
