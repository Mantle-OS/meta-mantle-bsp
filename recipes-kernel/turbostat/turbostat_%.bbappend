do_configure:corei7-64() {
    :
}

do_compile:corei7-64() {
    oe_runmake -C ${STAGING_KERNEL_DIR}/tools/power/x86/turbostat \
               O=${B} \
               CROSS_COMPILE=${TARGET_PREFIX} \
               CC="${CC}" \
               LDFLAGS="${LDFLAGS} -lcap -lrt"
}

do_install:corei7-64() {
    install -d ${D}${bindir}
    install -m 0755 ${B}/turbostat ${D}${bindir}
}
