#ifndef DEF_DATE
#define DEF_DATE


class Date{
	public: 
		Date(int inputDay, int inputMounth, int inputYear);
		int getDay();
		int getMounth();
		int getYear();
		void setDay(int inputDay);
		void setMounth(int inputMounth);
		void setYear(int inputYear);
		void setDate(int inputDay, int inputMounth, int inputYear);
	private:
		int day;
		int mounth;
		int year;
};

#endif
