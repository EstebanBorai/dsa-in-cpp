#include "limit_exceeded_exception.h"
#include <string>
#include <cstdio>

std::string LimitExceededException::get_message() {
	char buff[100];

	snprintf(buff, sizeof(buff), "Provided amount %.2f $ exceeds the limit for this credit card %d $",
		charge, limit);

	return buff;
}
