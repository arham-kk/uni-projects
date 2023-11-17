# Malaria Classifier

This Python application uses a trained deep learning model to classify whether an input image is infected or uninfected with malaria. The graphical user interface (GUI) is built using the Tkinter library, and image processing is facilitated by the PIL (Pillow) library. The deep learning model is implemented using TensorFlow and Keras.

https://user-images.githubusercontent.com/108623726/222744577-d9933cc4-0c56-442b-a07e-85eed418a90d.mp4

## Installation

1. Clone the repository or download the `app.py` file.
2. Ensure you have Python 3.x installed.
3. Install the required dependencies using the following command:

```bash
pip install -r requirements.txt
```

## Usage

1. Ensure you have a pre-trained model file named `model.h5` in the same directory as the script.
2. Run the script:

```bash
python app.py
```

3. The GUI window will appear with the title "Malaria Disease Classifier."
4. Click the "Open Image" button to choose an image for classification. Supported formats include `.jpeg`, `.jpg`, and `.png`.
5. The result of the classification (INFECTED or UNINFECTED) will be displayed, along with a resized version of the uploaded image.

## Dependencies

- Python 3.x
- Tkinter
- Pillow (PIL)
- NumPy
- TensorFlow
- Keras

## Classification Models
- [Models](https://github.com/arham-kk/malaria-detection-models)

## Credits

The machine learning model was trained using the [Malaria Cell Images Dataset](https://www.kaggle.com/datasets/iarunava/cell-images-for-detecting-malaria) on Kaggle.

## License

This project is licensed under the [License Name] License - see the [LICENSE](LICENSE) file for details.
