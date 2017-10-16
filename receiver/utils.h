#ifndef _UTILS_H_
#define _UTILS_H_

#define BAUDRATE B38400
#define MODEMDEVICE "/dev/ttyS1"
#define _POSIX_SOURCE 1 /* POSIX compliant source */
#define FALSE 		0
#define TRUE 		1

#define TRANSMITTER	0
#define RECEIVER	1

#define PACKING_HEADER_SIZE 4
#define INFO_HEADER_SIZE	4
#define INFO_TAIL_SIZE		2

#define FLAG 		0x7E
#define A 			0x03
#define C_SET 		0x03
#define C_UA 		0x07

#define C_INFO(x) (0b00000000 + ((x) << 6))
#define C_RR(x) (0b00000101 + ((x) << 7))
#define C_REJ(x) (0b00000001 + ((x) << 7))






#endif