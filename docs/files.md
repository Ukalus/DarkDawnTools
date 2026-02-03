## File Types

|        |        |        |        |        |
|--------|--------|--------|--------|--------|
|.bin    |.cam    |.cbarc  |.cbin   |.cbmdl  |
|.col    |.chr    |.dat    |.dat1   |.dat2   |
|.dat3   |.dat4   |.dat5   |.dat6   |.dat7   |
|.inc    |.inst   |.mdlr   |.narc   |.nbb    |
|.nsbca  |.nsbma  |.nsbmd  |.nsbsd  |.nsbta  |
|.nsbtp  |.nsbtx  |.nsbva  |.sdat   |.sim    |
|.spr    |.xsadl  |

## File Glossary


### .cbmdl

- Compressed file containing Models Textures (maybe Animations?)
- Compressed with LZX (lzx decompression tool works here).
- After decompressing All bytes at the beginning of the file until BMD0 have to be removed 
- deleting the bytes might lead to weird deformations of the model but still works (apicula recognizes it)s
- Can then be viewed/exported with apicula  

### .cbin

- are often paired up with .cbmdl files
- maybe additional data for rendering? 
- maybe stands for compressed binary?
- might be data on where objects are spawned? ./unpacked_rom/flmodel/djinn02.narc/djinn02.narc/djinn02.narc
./unpacked_rom/flmodel/chibi_col_04.narc/niru.narc/niru.narc

### .narc

- Widely used nintendo format
- Stands for Nintendo-archive (files have to be extracted)
- can be extracted with Apicula?! (is nowhere mentioned in the docs i think)
- It needs to be checked if Apicula actually exports everything or only parts (.cbark files are skipped for example)
- can also be extracted with tinke

### .cbark

- Its a NARC Archive file that has compressed (some) files inside!
- some of the files have the same compression used in .cbmdl files (LZ40)
- Some Models have weird Proportions (like very a small head) <- still has to be figured out why