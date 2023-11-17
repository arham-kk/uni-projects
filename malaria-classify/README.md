# Malaria Classifier
This Python script provides a GUI application to classify an image as infected or uninfected with malaria using a trained machine learning model. The application allows the user to select an image file in JPEG, JPG, or PNG format and displays the classification result and the image.


https://user-images.githubusercontent.com/108623726/222744577-d9933cc4-0c56-442b-a07e-85eed418a90d.mp4


## Prerequisites
This application requires the following Python packages to be installed:

- tkinter
- PIL
- numpy
- tensorflow

The script also requires a trained machine learning model in the form of an h5 file to be stored in the same directory with the name model.h5.

## How to use
To use the application, run the script in a Python environment. A GUI window will open, and the user can follow these steps:

Click the "Open Image" button and select an image file in JPEG, JPG, or PNG format from the file dialog box.
Wait for the classification result to appear in the label below the button.
The image will also be displayed on the window with the size of 200x200 pixels.
Note: The application will only classify an image as infected or uninfected with malaria if the file format is supported, and the image file is loaded successfully. If there is any error, an error message box will appear.

## GUI Elements
- Title:

  The title of the application is displayed at the top of the window with the font size of 28 and bold.

- Subtitle:

  The subtitle of the application is displayed below the title, providing a brief description of the application's purpose with the font size of 12.

- Open Image Button:

  This button allows the user to open a file dialog box to select an image file. The button is labeled "Open Image," with the font size of 12 and bold.

- Result Label:

  This label displays the classification result of the selected image file as "INFECTED" or "UNINFECTED" with the font size of 18.

- Image Label:

  This label displays the selected image with the size of 200x200 pixels.

## Classification Models
- [Models](https://github.com/arham-kk/malaria-detection-models)

#3 Credits

The machine learning model was trained using the [Malaria Cell Images Dataset](https://www.kaggle.com/datasets/iarunava/cell-images-for-detecting-malaria) on Kaggle.
