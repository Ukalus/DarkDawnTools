## Helpful Commands

Unpacking a NDS rom 

    ndstool -x file.nds -d ./unpacked

Removing bytes from file (1131 bytes in example)

    dd bs=1 skip=1131 if=filtered.dump of=trimmed.dump

Viewing (most) nintendo 3D/Texture/Animation files

    apicula view <filename,foldername>
View all files in a directory tree using apicula 

    apicula view $(find ./unpacked_rom -type f)

Decompress .cbmdl files (LZX using compression)

    lzx -D filename.cbmdl

Get all file extensions

    find ./data -type f | perl -ne 'print $1 if m/\.([^.\/]+)$/' | sort -u

Get all paths of file with certain extension

    find ./unpacked -type f -name \*.narc