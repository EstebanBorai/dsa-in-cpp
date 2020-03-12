#ifndef EMPTY_SCORE_H
#define EMPTY_SCORE_H

#include <cstdio>
#include <string>

class EmptySlotException {
	private:
		int slot_index;

	public:
		EmptySlotException(int slot_index) : slot_index(slot_index) {}
		std::string get_message() {
			char buff[100];

			snprintf(buff, sizeof(buff), "Provided slot is empty or out of bounds. Slot is %d",
				this -> slot_index);

			return buff;
		}
};

#endif
