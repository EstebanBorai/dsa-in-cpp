#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression {
	protected:
		long first;
		long cur;

		virtual long first_value();
		virtual long next_value();

	public:
		Progression(long f = 0) : first(f), cur(f) {};
		virtual ~Progression() {};
		void print_progression(int n);
};

#endif
