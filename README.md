# shrek-decompress

Library to provide compression and decompression functions compatible with the
algorithms used with the compressed Shrek SuperSlam files. This is used to power
[shrek-file-extract](https://github.com/ShrekBoards/shrek-file-extract) for
extracting the game's files, and
[shrek-file-create](https://github.com/ShrekBoards/shrek-file-create) for
inserting user-made modifications back into the game.

## Downloads

Windows and Linux downloads are available from the
[releases](https://github.com/ShrekBoards/shrek-decompress/releases) page.

## Building

### Windows

Open the solution file in Visual Studio 2017, and click `Build -> Build Solution`.
This will build the `include` and `lib` directories, which can be copied to the
root directories of the previously mentioned projects.

### Linux

Simply open a terminal within the root directory and type `make`. This will again
output a `lib` and `include` directory which can be used for the other projects.

## Why does shrek_compress make the file bigger?

The aim of this project was simply to 'compress' the files in a way that the game
could understand. It was thus decided to not compress the files at all, and instead
just insert metadata to tell the game's parser that each chunk is uncompressed. This
makes the files slightly larger. For more information, see this
[StackExchange](https://reverseengineering.stackexchange.com/questions/16021/what-compression-algorithm-is-this)
question.