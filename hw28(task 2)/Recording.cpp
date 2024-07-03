#include "Recording.h"

Recording::Recording()
{
    speaker = "Empty";
    duration = 0;
    recordingDate = Date();
}

Recording::Recording(string speaker, int duration, Date recordingDate)
{
    this->speaker = speaker;
    this->duration = duration;
    this->recordingDate = recordingDate;
}

void Recording::setSpeaker(string speaker)
{
    this->speaker = speaker;
}

void Recording::setDuration(int duration)
{
    this->duration = duration;
}

void Recording::setRecordingDate(Date recordingDate)
{
    this->recordingDate = recordingDate;
}

string Recording::getSpeaker() const
{
    return speaker;
}

int Recording::getDuration() const
{
    return duration;
}

Date Recording::getRecordingDate() const
{
    return recordingDate;
}

void Recording::showInfo() const
{
    cout << "Speaker: " << speaker << endl;
    cout << "Duration: " << duration << " minutes" << endl;
    cout << "Recording date:" << recordingDate << endl;
}
