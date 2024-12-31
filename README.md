| Supported Targets | ESP32 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- |

This is a example modified from ili9341 example.
It can drive 3.2inch,320*240 TFTLCD(ili9341chip) with touch support(ft6336u).


## How to Use Example
use with NXP GUIGuider.
this example only work with LVGL8.
### Hardware Required
320*240 display with ili9341 and ft6336u
### Software Required
esp-idf v4.4.4
### Build and Flash
Select chip target.
Modify pin out in spi_master_example_main.
Put your ui file generated from GUIGuider(only /generated and /custom folder)in /main/ui folder.
Change the include in /main/ui/generated/images/*.c from #include "lvgl/lvgl.h" to #include "lvgl.h"
build and flash
enjoy it!




