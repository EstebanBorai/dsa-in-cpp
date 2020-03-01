#include "limit_exceed_exception.h"
#include <string>
#include <cstdio>

std::string LimitExceedException::get_message() {
	char buff[100];

	snprintf(buff, sizeof(buff), "Provided amount %.2f $ exceeds the limit for this credit card %d $",
		charge, limit);

	return buff;
}
