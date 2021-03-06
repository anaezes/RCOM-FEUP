#ifndef _UTILS_H_
#define _UTILS_H_

// #include <sys/stat.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>



#define BAUDRATE B115200
#define MODEMDEVICE "/dev/ttyS1"
#define _POSIX_SOURCE 1 /* POSIX compliant source */
#define FALSE 		0
#define TRUE 		1

#define TRANSMITTER	0
#define RECEIVER	1

//application
#define PACKING_HEADER_SIZE 4
#define C_START 0X02
#define C_END 0x03
#define C_DATA 0X00
#define MAX_SIZE 10968
#define TIMEOUT		3
#define NUMTRIES	3

#define SUPERVISION_SIZE	5
#define INFO_HEADER_SIZE	4
#define INFO_TAIL_SIZE		2

#define FLAG 		0x7E
#define A 			0x03
#define C_SET 		0x03
#define C_UA 		0x07
#define C_DISC  0x0B

#define C_INFO(x) (0b00000000 + ((x) << 6))
#define C_RR(x) (0b00000101 + ((x) << 7))
#define C_REJ(x) (0b00000001 + ((x) << 7))

extern unsigned char sequenceNumber;
extern unsigned char numberTries;
extern unsigned int sentPackets;
extern unsigned int failPackets;
extern int fd;

struct timespec time_init;
struct timespec time_curr;

/**
 * @brief Handler for SIGALRM
 *
 * Handler for the SIGALRM signal. Resends the last package writen after a timeout
 * occurs.
 */
void writeTimeOut();

float convertToMiliseconds(struct timespec t);

#endif
