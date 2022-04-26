# temp_cplus_raspberry/temp.cc
This is a file containing a C++ simple example code to show the Raspberry CPU temperature on the Raspbian command console.
It require <conio.h> library to use colors and cursor position in the console, but you can remove all references if you only wish just to show the cpu temperature.

Should be compiled using: "g++ -o temp temp.cc", and then moved to the configured users-path using "sudo mv ./temp /usr/local/bin/"
