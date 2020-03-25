
https://greatscottgadgets.com/sdr/5/

The clock ports on the HackRF is to sync multiple HackRFs on the same clock. You can also plug your own clock to it if you want to use a more stable clock than the internal one of the hackRF.

`net-libs/libhackrf` package is software for programs to communicate with HackRF

`net-wireless/hackrf-tools` is some cli tools to communicate with HackRF

Some commands:
- `hackrf_info`
- `hackrf_transfer`: To test if your usb and cpu can handle a particular throughput, use `hackrf_transfer -r /dev/null -s 1600000`. The Mib/sec read should be two times the sample rate because 1 sample is 16 bits (2 bytes). You can also use this to transmit data with `hackrf_transfer -t /dev/zero -s 160000`.

Note that the gain stage in the hackRF is right next to the antenna input. This means that the gain stage happens before the filter stage. So if you have a strong signal at some frequency, and you set the gain high, you can potentially damage the equipment. Whenever possible, perform the gain stage in software. Be sure to always have an antenna or a dummy load at the antenna input to help mitigate this.
