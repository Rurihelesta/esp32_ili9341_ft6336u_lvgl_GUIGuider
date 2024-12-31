set(srcs
   
    "ui/generated/gui_guider.h"
    "ui/generated/gui_guider.c"
    "ui/generated/setup_scr_screen.c"
    )
file(GLOB_RECURSE srcs *.c
                ui/custom/*.c
                ui/generated/*.c
                ui/generated/guider_customer_fonts/*.c
                ui/generated/guider_fonts/*.c
                ui/generated/images/*.c
                )
set(include_dirs
                .
                ui/custom
                ui/generated
                ui/generated/guider_customer_fonts
                ui/generated/guider_fonts
                ui/generated/images
                ../components/lvgl__lvgl/src/extra/widgets/dclock/
                )
idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS ${include_dirs})

 




