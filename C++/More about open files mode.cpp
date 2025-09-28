/*in general when we use open method with ifstream class Object then ios::in supply as a mode,
when we use open with ofstream, then ios::out supply as a mode, what happens if we want to use open method with fstream object?
then mode should be supplied explicitly.
fstream F;
F.open(<"File name">)<mode;
ios::in ~ open file for reading only.
ios::out ~ open file for writing only.
ios::app ~ append to end of file.
ios::ate ~ go to end of file at opening.
ios::binary ~
ios::trunc ~ deletes the content of file if it exists.
ios::nocreate ~ open fails if the file does not exist.
ios::noreplace ~ open fails if the file already exists.
Note:
    1. When we open the file with ios::out  it also opens in the ios::trunc mode.
    2. ios::app and ios::ate both have the same effect but the basic difference is app append at the end of file
        but wile using ate we can add or modify data anywhere in the file.
    3. ios::app can used only with the files capable of output.
    4. When we open a file with app, it creates a file if file does not exist.
    5. If we want to open a file in app mode, but do not create a new file if file does not exist,
        then we use ios::app|ios::nocreate.
    6.
*/
