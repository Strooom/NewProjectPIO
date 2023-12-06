How to keep both projects in sync ? STM32CubeIDE <> PlatformIO

A FreeFileSync document keeps the following in sync
* Core/Src - src
* Core/Inc - include
* lib - lib
    - there is a filter for which directories to sync


At STM32CubeIDE side, the following is needed to have the include files and source files found:
* right click on a folder under lib and select 'Add/Remove include path...'

If you need something out of the way temporarily, move it under backup


TODO : the folder Drivers is currently not yet synced.. Don't know if it is needed.