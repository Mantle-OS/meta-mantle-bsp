FILESEXTRAPATHS:prepend := "${THISDIR}/${BPN}:"

LINUX_VERSION = "6.12-rc4"
SRCREV = "42f7652d3eb527d03665b09edac47f85fb600924"
require linux-mantle.inc

KBUILD_DEFCONFIG:x86-64 = "mantle-x86-64_defconfig"

## defconfig
SRC_URI:append = " \
    file://mantle-x86-64_defconfig;subdir=git/arch/x86/configs \
"

## dts[i]
