#ifndef __CONSTANTS_H
#define __CONSTANTS_H

#include <string>

/**
 * Constants definition.
 *
 * @author Darran Zhang @ codelast.com
 */

const std::string CFG_FILE_SECTION_GPIO = "Gpio";
const std::string CFG_FILE_SECTION_WEB = "Web";

const int DISABLE_STATUS = 0;
const int ENABLE_STATUS = 1;
const int INVALID_POSITION = -1;
const int ONE_DAY_MINUTES = 1440;  // total minutes of a day

#endif