
https://greatscottgadgets.com/sdr/4/

Regarding the homework of lesson 2:
-Only the Throttle block affects the real time rate of the flow graph. It's a quirk of GNU radio. The configuration of the sample rate doesn't mean the same thing to every single block.
- Number of samples per period: sample rate / frequency
- The signal source only cares about the ratio of sample and frequency, which tells it how many samples per period of a cosine wave it should produce. It generates these samples as fast as the next input block in the chain will take them (in this case, the throttle). The signal source only cares about the ratio.
- To the throttle block, it only cares about the real time sample rate that it delivers its input to its output block.
- To the FFT, it simply means the ruler that's at the horizontal frequency graph, which changes when the sample rate is changed. The other thing the sample rate affects for this block is the refresh rate because the refresh rate is based on counting samples.
- **Therefore**, generally, all the blocks in the flow graph are configured to the same sampling rate. It's why GNU radio gives you samp_rate variable on startup.
- Every input/output has a little bit of a buffer. When you change a parameter (for example, frequency), the transition propagates through the buffers.
- There's a noise floor at -180 dB. Signals in the real world might not go that low, so this is acceptable. Different data types (bytes, int, etc.) can be used, but the noise floor will go higher because of the quantization error.
