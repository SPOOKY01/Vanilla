#!/usr/bin/python
# -*- coding: UTF-8 -*-

def changeextend(str):
    "print string with extend"
    mylist.extend([40,50,60]);
    print("print string mylist:",mylist)
    return
def changeappend(str):
    "print string with append"
    mylist.append( [7,8,9] )
    print("print string mylist:",mylist)
    return
mylist = [10,20,30]
changeextend( mylist );
print("print extend mylist:", mylist)
changeappend( mylist );
print("print append mylist:", mylist)
