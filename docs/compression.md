## Normal NDS Compression

As far as i know, the games rom itself is not compressed or encryped like some other NDS games, this has to be verified tho.

## LZX

Some Files are compressed using LZ11 this tool can decompress these files. ndspy can also decompress them.

## ARM9 

You cant edit the Game code itself by just patching the binary. If you open the ARM9 inside Ghidra, you will notice that only a small portion is actually executable code. This code is for uncompressing the rest of the Program which is compressed below the executable part.

That means somebody has to write a function, that writes the decompressed Part into a file. once that works, we should be able to patch that file, recompress it, and then, MAYBE it will work. 