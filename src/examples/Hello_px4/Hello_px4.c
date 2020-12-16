#include <px4_platform_common/log.h>

__EXPORT int Hello_px4_main(int argc, char *argv[]);

int Hello_px4_main(int argc, char *argv[])
{
    PX4_INFO("Hello Sky!");
    return OK;
}
