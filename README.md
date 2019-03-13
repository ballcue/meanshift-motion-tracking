# Motion tracking based on Mean Shift with Intel x86 SSE

## Description

A simple motion tracking application that uses a Mean Shift approach for its tracking logic. Based on [OpenCV's tutorial](https://docs.opencv.org/3.4/db/df8/tutorial_py_meanshift.html "OpenCV tutorial") and coded using Intel x86 Streaming SIMD Extensions (SSE).

Written as a final project for a University of Buenos Aires (UBA) Computer Organization course. A very detailed description of the algorithm, its re-implementation to fit the SIMD model and time benchmarking results are included report-ES.pdf. Build and usage instructions are included README-ES.txt. Both documents are available in Spanish for the time being since they were presented as part of the related school project.

The main purpose of the project is to explore an improvement to the algorithm's running times by re-implementing it in a vectorial SIMD approach using Intel's SSE. To benchmark its performance, two C++ implementations are used: an "idiomatic" approach using iterators on the one hand and a faster plain C-style pointer approach on the other. A substantial improvement in performance is achieved, with the vectorial implementation running up to 20 to 30 times faster than sequential C++ implementations.

This project was motivated by the [Thumberemin](https://github.com/ballcue/thumberemin "Thumberemin repository") project, a virtual musical instrument controlled by tracking the user's thumb using this very motion tracking approach.
