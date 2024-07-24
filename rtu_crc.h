
#ifndef RTU_CRC_H
#define RTU_CRC_H

#define   ADRESS        1

#define ERR             0
#define PAS             1
#define ERR_FRAME       2
#define NOT_SUPPORT     3



unsigned short crc16(unsigned char *buffer, int buffer_length);

#endif // RTU_CRC_H
