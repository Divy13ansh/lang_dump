/*
Every file has associated pointers.
get pointer and put pointer.
get pointer is used for reading from a file and put pointer is used for writing in a file.

When we open the file in ios::in mode, then get pointer moves to beginning of the file.
When we open the file in ios::app mode, then put pointer moves to end of the file.
When we open the file in ios::out mode, then put pointer moves to beginning of the file.
*/
/*
FUNCTIONS FOR MANIPULATING FILE POINTERS
    seekg(): moves the get pointer at a specific location.
    seekp(): moves the put pointer at a specific location.
    tellg(): gives the current position of get pointer.
    tellp(): gives the current position of put pointer.
    fstream F;
    F.open("abc.txt",ios::in|ios::out|ios::app);
    F.seekg(0);
    F.seekg(10);
    F.seekg(10,ios::cur);
    F.seekg(+10,ios::cur);
    F.seekg(-10,ios::cur);
    F.seekg(0,ios::end);
    F.seekg(-10,ios::end);
