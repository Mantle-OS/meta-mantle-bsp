MACHINE_FEATURES = " \
    can \
    serial \
    i2c \
    spi \
    gpio \
"

## yocto built in machine features. We add them all then remove in each machine/conf file based on
## what hardware is on the machine
MACHINE_FEATURES:append = "\
    alsa \
    bluetooth \
    keyboard \
    numa \
    pci \
    pcmcia \
    phone \
    qemu-usermode \
    rtc \
    screen touchscreen \
    usbgadget usbhost \
    vfat \
    wifi \
"

MACHINE_FEATURES:x86:append = " \
    pcbios \
    efi \
    acpi \
"

# ext2
# qvga: Machine has a QVGA (320x240) display

MACHINE_FIRMWARE ??= ""
MACHINE_HWCODECS ??= ""
