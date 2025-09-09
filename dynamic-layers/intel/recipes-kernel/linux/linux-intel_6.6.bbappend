FILESEXTRAPATHS:prepend := "${THISDIR}/${BPN}:"

SRC_URI:append = " file://vbox-extras.cfg "
KERNEL_CONFIG_FRAGMENTS:append = " \
    file://vbox-extras.cfg \
    file://cfg/boot-live.scc \
    file://cfg/cgroup-hugetlb.scc \
    file://cfg/criu.scc \
    file://cfg/dmaengine.scc \
    file://cfg/docker.scc \
    file://cfg/drm-cdvpvr.scc \
    file://cfg/lxc.scc \
    file://cfg/kubernetes.scc \
    file://cfg/paravirt_kvm.scc \
    file://cfg/sound.scc \
    file://cfg/systemd.scc \
    file://cfg/usb-mass-storage.scc \
    file://cfg/vesafb.scc \
    file://cfg/virtio.scc \
    file://cfg/vmware-guest.scc \
    file://cfg/vswitch.scc \
    file://cfg/xen.scc \
    file://cfg/xt-checksum.scc \
    file://bsp/intel-x86/intel-x86-acpi.cfg \
"

KERNEL_CONFIG_FRAGMENTS:append:corei7-64 = " \
    file://cfg/smp_64.scc \
    file://bsp/intel-x86/intel-x86-64.scc \
"

KERNEL_CONFIG_FRAGMENTS:append:core2-32 = " \
    file://cfg/smp.scc \
    file://bsp/intel-x86/intel-x86-32.scc \
"

