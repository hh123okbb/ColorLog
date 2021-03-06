#include "../colorlog.h"

/* compile this example with :
 * g++ example.cpp -o example_cpp -D_LOG_ALL
 *   to print all log line
 * or
 * g++ example.cpp -o example_cpp -D_LOG_WARNING -D_LOG_INFO
 *   to print only warning and info levels
 * or
 * g++ example.cpp -o example_cpp -D_LOG_ALL -D_LOG_NO_VERBOSE
 *   to print all log line except verbose level
 */

int main(int argc, char* argv[]) {

	VERBOSE("main","start log");
	WARNING("main","start warning %d",1);
	ALERT("main","start alert %f",1.2);
	INFO("main","start info %d %f",1,2.3);
	SUCCESS("main","start success %d %d %d",1,2,3);

	return 0;
}
