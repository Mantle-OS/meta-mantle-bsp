FILES:${PN}-plugins:append:imxgpu = " \
    ${libdir}/qt5/plugins/video/videonode/libeglvideonode.so \
    ${libdir}/qt5/plugins/video/videonode/libimx6vivantevideonode.so \
    ${libdir}/qt5/plugins/mediaservice/libgst*.so \
    ${libdir}/qt5/plugins/playlistformats/libqtmultimedia_m3u.so \
    ${libdir}/qt5/plugins/audio/libqtaudio_alsa.so \
    ${libdir}/qt5/plugins/audio/libqtmedia_pulse.so \
    ${libdir}/plugins/videoimx6vivantevideonode/libeglvideonode.so \
    ${libdir}/plugins/videoimx6vivantevideonode/libimx6vivantevideonode.so \
"
