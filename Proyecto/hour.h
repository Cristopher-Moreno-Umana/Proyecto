#ifndef hour_h
#define hour_h
class Hour
{
private:
	int hourMovieStarts;
	int hourMovieEnds;
	int minuteMovieStarts;
	int minuteMovieEnds;
public:
	Hour();
	Hour(int aHourMovieStarts, int aHourMovieEnds, int aMinuteMovieStarts,
		int aMinuteMovieEnds);

	void setHourMovieStarts(int aHourMovieStarts);
	void setHourMovieEnds(int aHourMovieEnds);
	void setMinuteMovieStarts(int aMinuteMovieStarts);
	void setMinuteMovieEnds(int aMinuteMovieEnds);

	int getHourMovieStarts();
	int getHourMovieEnds();
	int getMinuteMovieStarts();
	int getMinuteMovieEnds();
};
#endif
