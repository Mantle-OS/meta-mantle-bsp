FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " \
    file://001-realtime-patch-6.12.8-rt8.patch \
    file://mantle-multilib.cfg \
"

LINUX_VPATCH = "8"
SRCREV = "77f85ccd3618f324d221f0faaed6d9cdc118c74a"
