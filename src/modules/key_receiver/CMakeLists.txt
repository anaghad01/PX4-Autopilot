px4_add_module(
    MODULE inrol__key_receiver
    MAIN key_receiver
    STACK_MAIN 2500
    STACK_MAX 4000
    SRCS
        key_receiver.cpp
    DEPENDS
        platforms__common

    )
