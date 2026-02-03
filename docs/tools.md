## MelonDS

MelonDS is a Emulator that runs native on Linux and is OpenSource. It has some Debugging capabilities that you can use with `GDB`. 

![https://sourceware.org/gdb/](https://sourceware.org/gdb/)

how to start GDB and live Debugging:

    arm-none-eabi-gdb -ex "set arch armv5t"

make sure that GDB server is actually running, theres currently a bug in MelonDS. you can activate MelonDS through 
`melonDS.toml`

## Apicula

![Apicula](https://github.com/scurest/apicula) is an Application for viewing NDS models written in Rust. The Backend of this Application is written in Rust aswell, so maybe i could take some parts of it to display files in my editor (If its OpenSource, have to check).
Apicula displays most of the Models, Textures and Sprites and Animations correctly, there is currently a bug where some models are rendered weirdly when a certain Draw command is used. Here is the Issue: 

https://github.com/scurest/apicula/issues/22

## Tinke

Tinke is a Tool for unpacking a ROM written in C#. Some Folders and Files inside the rom are "archived" multiple times in the NARC format.
By unpacking the folder multiple times it is possible to extract the currently biggest list of files as far as i know ( current highest number of viewable models: 4270).

![Tinke](https://github.com/pleonex/tinke)

## NDS Tool

https://github.com/PeterLemon/Nintendo_DS_Compressors

A collection of decompression tools, we need LZX to decompress some files that have are LZ40 compressed. you can identify these files by their first two bytes "0x40" 