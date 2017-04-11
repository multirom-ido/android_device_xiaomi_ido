#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",
    "/sys/class/graphics/fb1",
    "/sys/devices/virtual/graphics/fb0",
    "/sys/devices/virtual/graphics/fb1",

	"/sys/block/mmcblk0",
    "/sys/block/mmcblk0rpmb",
	"/sys/devices/soc.0",
	"/sys/devices/soc.0/7824900.sdhci",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/*",
    "/dev/block/bootdevice/by-name/*",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p22", //boot
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p25", //cache
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1", //modem
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p24", //persist
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p23", //system
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p30", //cust
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p31", //userdata
    "/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0rpmb", // RPMB


	// sdcard
    "/sys/block/mmcblk1",
    "/sys/block/mmcblk1/mmcblk1p1",
    "/sys/block/mmcblk1/mmcblk1p2",

	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",
    "/sys/module/sdhci",
    "/sys/module/sdhci/*",
    "/sys/module/sdhci_msm",
    "/sys/module/sdhci_msm/*",


    // input
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
	"/sys/devices/soc.0/gpio_keys.67/input*",
    "/sys/bus/platform/devices/gpio_keys.67/input*"
    "/sys/devices/virtual/misc/uinput/*",
	"/sys/devices/soc.0/78b6000.i2c/i2c-5/5-003e/input*",
	"/sys/devices/soc.0/78b6000.i2c/i2c-5/5-0050/input*",

	// for adb
	"/sys/devices/virtual/tty/ptmx",
	"/sys/devices/virtual/android_usb/android0*",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0*",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/bus/platform/drivers/android_usb",
    "/sys/bus/usb",

	// USB drive
    "/sys/devices/platform/msm_hsusb*",
    "/sys/devices/platform/android_usb/*",

    // Wildcard to /sys/ for debugging
    "/sys/*",

	NULL
};
