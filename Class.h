#pragma once

#ifndef CLASS_H
#define CLASS_H

class Phone {
private:
	string name;
	string num;
public:
	string addPhone();
	string editPhone();
	string getPnum();
	string getName();
};

#endif