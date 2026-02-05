# Ghidra setup

Special thanks to StarcubeLabs and their awesome tutorial about reverse-engineering pokemon mystery dungone on the DS:

https://www.starcubelabs.com/reverse-engineering-ds/#setting-up-ghidra

## Extract ARM9

NDSTool can be used to extract the main binary for the game, the other parts of the rom can be extracted as well if you like.

`ndstool -9 arm9.bin -7 arm7.bin -y9 y9.bin -y7 y7.bin -d data -y overlay -t banner.bin -h header.bin -x <pathToRom>`

## Create Ghidra project

- File > New Project…
- The project defaults to a “Non-Shared Project”. Click Next.
- Choose a project name and a directory to save the project, then click Finish.
- File > Import File…
- Choose the arm9.bin file from the unpacked Explorers of Sky ROM files.
- Select an instruction set architecture (Language) for Ghidra to use for analyzing the binary. 

## Choose the correct instruction set (ARM:LE:32:v5t)

The DS uses the ARMv5T (technically ARMv5TE) instruction set in little-endian format (ARM:LE:32:v5t), 
which you can find by searching for “v5t” in the language select,
then selecting the option with “little” under the Endian column. 

## Working within the Project

Once the project has been setup, there is currently a roadblock, because most of the games code is compressed.
More information under: [./compression.md](./compression.md)
