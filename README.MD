# Java Native Methods

> The expirement is conducted on the M2 chip of MacOS

[Tutorial](https://www.iitk.ac.in/esc101/05Aug/tutorial/native1.1/stepbystep/index.html)

On mac os, with JDK 17, here is the commands used:

1. Write `helloworld.HelloWorld.java`
2. Compile the java code with `javac helloworld/HelloWorld.java`
3. Generate the header file by `javac -h . helloworld/Helloworld.java`
4. Write the implementation code in C
5. Compile the c code with `gcc -shared -o libhello.dylib -fPIC HelloWorldImp.c -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/darwin"`
6. Run the Java application by executing: `java -Djava.library.path=. helloworld.HelloWorld`

> The header and the source file are not necessary to run the java application.


## how to use system implemented library?

The JVM's native methods are part of the JVM implementation and are not directly exposed to developers.
