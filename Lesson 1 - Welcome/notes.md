
https://greatscottgadgets.com/sdr/1/

GNU radio is a software library (C++ and Python). GNU radio companion is a GUI that generates software programs using the library.

Low pass filter can only re-sample to an integer number. The use of the Rational Sampler is to re-sample by a rational number (12 / 5 in this example).

So input is 10 Million samples/sec. After the low pass filter, the sample rate is 200k samples/sec (10 M samples/sec divided by 50 (the decimation)). After the rational resampler, it becomes 480k samples/sec (200k samples/sec times 12 (the interpolation rate) divided by 5 (the decimation rate)). After the WBFM Receive, it becomes 48k samples/sec (480k samples/sec divided by 10 (the audio decimation)).

48k samples/sec is a very common sample rate, supported by many sound cards.
