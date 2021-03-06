# teensy_audio_player
SD card audio file player using teensy3.6, SdFat-beta library. Features:
 - Long file name and ExFAT support through SdFat-beta
 - Files are sorted by name
 - Directory support

To build this project,
 - Delete play_sd_wav.cpp/h and play_sd_raw.cpp/h from the teensy audio library (arduino-1.8.10/hardware/teensy/avr/libraries/Audio). They require SD.h which conflicts with SdFat.
 - Use my patched Arduino-Teensy-Codec-lib which has the SD.h dependency removed. (https://github.com/jcj83429/Arduino-Teensy-Codec-lib)
 - Use my fork of OpenAudio_ArduinoLibrary with proper 32 bit output (https://github.com/jcj83429/OpenAudio_ArduinoLibrary)
 - Use my fork of SdFat-beta with fixes and enhancements (https://github.com/jcj83429/SdFat-beta)
