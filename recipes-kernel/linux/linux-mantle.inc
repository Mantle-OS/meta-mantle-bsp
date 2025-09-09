SUMMARY = "Mantle Os linux kernel"
SECTION = "kernel"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"

SRC_URI = "git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git;protocol=https;branch=master"
S = "${WORKDIR}/git"
PV = "${LINUX_VERSION}"

inherit pkgconfig kernel

DEPENDS += " \
    xz-native bc-native zstd-native zlib-native \
    elfutils-native \
    pkgconfig-native \
    openssl-native \
    util-linux-native \
    libyaml-native\
    python3-dtschema-wrapper-native \
"

DEPENDS:append:aarch64 = " libgcc"
KERNEL_CC:append:aarch64 = " ${TOOLCHAIN_OPTIONS}"
KERNEL_LD:append:aarch64 = " ${TOOLCHAIN_OPTIONS}"

KERNEL_CONFIG_COMMAND = "oe_runmake -C ${S} O=${B} ${KBUILD_DEFCONFIG}"
ERROR_QA:remove = "buildpaths"
do_compile:prepend() {
	# setup native pkg-config variables (kconfig scripts call pkg-config directly, cannot generically be overriden to pkg-config-native)
	export PKG_CONFIG_DIR="${STAGING_DIR_NATIVE}${libdir_native}/pkgconfig"
	export PKG_CONFIG_PATH="$PKG_CONFIG_DIR:${STAGING_DATADIR_NATIVE}/pkgconfig"
	export PKG_CONFIG_LIBDIR="$PKG_CONFIG_DIR"
	export PKG_CONFIG_SYSROOT_DIR=""
}
