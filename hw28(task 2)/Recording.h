#pragma once
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

class Recording
{
	string speaker;
	int duration;
	Date recordingDate;
public:
	Recording();
	Recording(string speaker, int duration, Date recordingDate);

	void setSpeaker(string speaker);
	void setDuration(int duration);
	void setRecordingDate(Date recordingDate);

	string getSpeaker()const;
	int getDuration()const;
	Date getRecordingDate()const;

	void showInfo()const;
};

