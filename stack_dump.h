#ifndef DUMP_H
#define DUMP_H

#define DUMP(arg) do                \       //TODO функциоанльные макросы погуглить
{                                   \
    stack_dump(__LINE__, __LINE__); \
} while(0);                         \

#endif