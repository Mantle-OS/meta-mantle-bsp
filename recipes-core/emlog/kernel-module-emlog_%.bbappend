FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " \
    file://0001-emlog-Do-not-use-no_llseek-with-kernel-6.12.0.patch \
"
