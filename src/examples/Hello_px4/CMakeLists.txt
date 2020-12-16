px4_add_module(
    MODULE examples__Hello_px4
    MAIN Hello_px4
    STACK_MAIN 2000
    SRCS
        Hello_px4.c
    DEPENDS
    )
