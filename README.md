﻿﻿﻿Embedded Template Library (ETL)
-------------------------

![GitHub release (latest by date)](https://img.shields.io/github/v/release/ETLCPP/etl-arduino)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)
![CI](https://github.com/ETLCPP/etl/workflows/vs2019/badge.svg)
![CI](https://github.com/ETLCPP/etl/workflows/gcc/badge.svg)
![CI](https://github.com/ETLCPP/etl/workflows/clang/badge.svg)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/3c14cd918ccf40008d0bcd7b083d5946)](https://www.codacy.com/manual/jwellbelove/etl?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=ETLCPP/etl&amp;utm_campaign=Badge_Grade)

**This repository is an Arduino compatible clone of the Embedded Template Library (ETL)**

https://github.com/ETLCPP/etl

See (https://www.etlcpp.com/arduino.html) for up-to-date information.

To update this repository:

- start from a "master folder", for example in my case ```~/Desktop/Jean/Git```.
- from this "master folder", have a clone of both the etl repository (https://github.com/ETLCPP/etl or a clone of it), and the etl-arduino repository (https://github.com/ETLCPP/etl-arduino or a clone of if).
- from the etl-arduino repository, run the etl repository ```arduino/create_arduino_library.py``` script.

For example, on my machine:

```
jj@MBX20:~/Desktop/Jean/Git$ ls -d etl*
etl  etl-arduino
jj@MBX20:~/Desktop/Jean/Git$ cd etl-arduino/
jj@MBX20:~/Desktop/Jean/Git/etl-arduino$ python3 ../etl/arduino/create_arduino_library.py 

Copy ETL files to the etl-arduino repository

arduino_dir         =  ../etl/arduino
etl_dir             =  ../etl
include_dir         =  ../etl/include
common_dir          =  ..
etl_arduino_dir     =  ../etl-arduino
etl_arduino_src_dir =  ../etl-arduino/src

Copy the library properties
  From : ../etl/library.properties
  To   : ../etl-arduino/library.properties

Copy the Arduino ETL header
  From : ../etl/arduino/Embedded_Template_Library.h
  To   : ../etl-arduino/src/Embedded_Template_Library.h

Copy the ETL headers
  From : ../etl/include
  To   : ../etl-arduino/src
```


