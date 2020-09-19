# 

The method to compile the GUI programs took several hours of trial and error to fix. The GUI code provided by Stroustrup had to be edited since they didn't compile. In order to compile the programs, you need to do the following:


### Install fltk on your system

-   Using the program fltk-config, do

```bash
fltk-config --cxxflags
```

and copy the output.


### Use g++ in the following method:

-   Copy-paste the output from fltk-config
-   Include the fltk-images library by doing -lfltk_images
-   (OPTIONAL?) Include the local GUI library by doing -I./GUI
-   Place the name of your program and then its output file.


### TLDR

```bash
g++ -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -g -O2 -fstack-protector-strong -Wformat -Werror=format-security -fvisibility-inlines-hidden -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -o [OUTPUT FILE] [INPUT FILE_NAME] GUI/Simple_window.cpp GUI/GUI.cpp GUI/Window.cpp GUI/Graph.cpp  -Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,-z,now -Wl,--as-needed -lfltk -lfltk_images -lX11
```
