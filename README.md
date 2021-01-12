# Image-Processing-in-C++-through-Open-CV-
This repository contains c++ code that can convert an image according to the angle given by the user
This is a Project Of Open CV in C++ through which  one can rotate the image  at a particular angle.<br/>
This project consists of following configurations and softwares:<br/>
1: VS CODE<br/>
2:Clang(c++ compiler in VS Code).<br/>
3:System must have Open CV installed.<br/>
4:Also you should make CMakeLists.txt file for running the project.<br/>
There are two functions in main.cpp file.<br/>
1: main():This is the function from which the code starts running.In this function an image is passed as an argument by the user by which will be passed in rotate function which will rotate the required image at a particular angle given in function (positive angle for anticlockwise and negative angle for clockwise) and then it will display the original as well the rotated image.<br/>
2:Rotate():This is function which will rotate the image at an particular angle.In this function we will first make at object of rotated image matrix and then pass it to inbuilt function Point2f of Open CV which indicates from which point we have to rotate we will pass the rows as well as the columns of the inputted matrix from where to rotate i.e row/2 && col/2.Then we will pass the required result of former function to getRotationMatrix2D which store the object of resultant image after rotation.This function will have an angle,and an isometric point and the object of Point2f function .Finally we will use wrapAffine() function of openCV which will applie an affine transforation to image and then return the object of rotated image.<br/>
NOTE:image extensions can be jpg,png,jpeg etc;
NOTE: for inputting the image the user has to specify the entire folder path of the image that is stored in the system<br/>
In my case my image is in the file at "image" folder so i have to input ./ImageProcessing /Users/saarimkhan/image/picture.jpg in the console screen by  which the code will process on picture.jpg.

