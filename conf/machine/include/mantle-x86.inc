MACHINE_EXTRA_RDEPENDS:append = " udev-extraconf "

include conf/machine/include/machine-base.inc

GRUB_TIMEOUT = "5"
LABELS_LIVE = "install"

PREFERRED_PROVIDER_virtual/xserver ?= "xserver-xorg"
XSERVER ?= "${XSERVER_X86_BASE} \
            ${XSERVER_X86_EXT} \
            ${XSERVER_X86_I915} \
            ${XSERVER_X86_I965} \
            ${XSERVER_X86_FBDEV} \
            ${XSERVER_X86_VESA} \
            ${XSERVER_X86_MODESETTING} \
           "

SERIAL_CONSOLE = "115200 ttyS0"
SERIAL_CONSOLES = "115200;ttyS0 115200;tty0"

APPEND = " rootwait raid=noautodetect trace_clock=local quiet "

IMAGE_FSTYPES += "wic iso "

