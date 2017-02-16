#pragma once
#ifndef STABLE_H
#define STABLE_H
#include "Horse.h"

const int maxHorses = 2;

class Stable {
private:
	Horse horsesInStable[maxHorses];
	int currentHorseNum;
public:
	Stable();
	void addHorse(Horse*);
	Horse removeHorse();
	int getHorseNum();
	class FullStable;
	class EmptyStable;
	
	//FullStable Class Definition
	class FullStable {
	private:
		int index;
	public:
		FullStable(int i) { index = i; }
		int getValue() { return index; }
	};
	//EmptyStable Class Definition
	class EmptyStable {
	public:
		EmptyStable() { }
	};
};

#endif