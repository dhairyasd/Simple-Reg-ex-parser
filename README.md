# Simple Reg-Ex Parser

This program is a Simple beginner level implementation of a Regular expression parser.

## Introduction

This is just a very simple implementation of Regular expression parser. I made this program to make it easy for beginners to understand the basics of how does a regular expression parser work.
Regular reg-ex parser are way more complex and consist of many more match characters. This is just a very simple implementation of the reg-ex parser.

## Assumptions
The reg ex characters used are `'.'` and `'*'`.

`'.'` : Matches every lowercase character [a-z].

`'*'` : Matches the character before it 0 or n number of times.


## Usage
The `isMatch` function takes 2 input strings as its arguments. These are namely the "input string" and the "format string". The format string consists of the reg-ex characters. The function then provides a boolean return value.

`True` : if the format string matches the input string.

`False` : if it doesn't match. 
Enter the sample text and the format string into the strings in the main function and build the program.

The rest is self-explanatory


## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Learn About Reg-ex
To learn more about reg-ex's, here is a helpful [link](https://regexr.com/).

## License
[MIT](https://choosealicense.com/licenses/mit/)