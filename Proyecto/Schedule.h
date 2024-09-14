#ifndef schedule_h
#define schedule_h
#include "libraries_of_the_project.h"
#include "hour.h"
class Schedule
{
private:
	string emitDate;
	Hour hourData;
public:
	Schedule();
	Schedule(string aEmitDate, Hour aHourData);

	void setEmitData(string aEmitDate);
	void setHourData(Hour aHourData);

	string getEmitData();
	Hour getHourData();

	void printScheduleData();


};
#endif



