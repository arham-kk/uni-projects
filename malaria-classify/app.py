import tkinter as tk
from PIL import Image, ImageTk
from tkinter import filedialog, messagebox
import numpy as np
import tensorflow as tf
from keras.models import load_model
from keras.preprocessing import image

class malaria:
    def __init__(self):
        # Load the model
        try:
            self.model = load_model('model.h5')
        except Exception as e:
            messagebox.showerror("Error", f"Failed to load model: {str(e)}")

        # Set up the GUI
        self.root = tk.Tk()
        self.root.title("Malaria Disease Classifier")
        self.root.configure(bg='#ffffff')
        self.root.geometry("600x500")
        self.root.resizable(False, False)

        # Set up fonts
        self.title_font = ("Helvetica", 28, "bold")
        self.subtitle_font = ("Helvetica", 12)
        self.label_font = ("Helvetica", 18)
        self.button_font = ("Helvetica", 12, "bold")
        self.footer_font = ("Helvetica", 8)

        # Set up colors
        self.primary_color = "#3f51b5"
        self.secondary_color = "#ffffff"
        self.highlight_color = "#757de8"
        self.active_color = "#1a237e"
        self.footer_color = "#808080"

        self.padx = 10
        self.pady = 10

        self.title_label = tk.Label(self.root, text="Malaria Disease Classifier", font=self.title_font, bg=self.primary_color, fg=self.secondary_color, padx=self.padx, pady=self.pady)
        self.title_label.pack(fill=tk.X)

        self.subtitle_label = tk.Label(self.root, text="Upload an image to classify it as infected or uninfected with malaria", font=self.subtitle_font, bg=self.secondary_color, fg=self.primary_color, padx=self.padx, pady=self.pady)
        self.subtitle_label.pack(fill=tk.X)

        self.file_button = tk.Button(self.root, text="Open Image", font=self.button_font, fg=self.secondary_color, bg=self.primary_color, activebackground=self.active_color, activeforeground=self.secondary_color, bd=0, command=self.open_file)
        self.file_button.pack(padx=self.padx, pady=self.pady)

        self.result_label = tk.Label(self.root, text="", font=self.label_font, bg=self.secondary_color, fg=self.primary_color, padx=self.padx, pady=self.pady)
        self.result_label.pack(fill=tk.X, padx=self.padx, pady=self.pady)

        self.image_label = tk.Label(self.root, text="", font=self.label_font, bg=self.secondary_color, fg=self.primary_color, padx=self.padx, pady=self.pady)
        self.image_label.pack(fill=tk.BOTH, expand=True, padx=self.padx, pady=self.pady)

        self.footer_label = tk.Label(self.root, text="©2023 Malaria Disease Classifier. All rights reserved.", font=self.footer_font, bg=self.secondary_color, fg=self.footer_color, padx=self.padx, pady=self.pady)
        self.footer_label.pack(side=tk.BOTTOM, fill=tk.X)

        self.root.mainloop()

    def model_predict(self, img_path):
        # Load the image
        try:
            img = image.load_img(img_path, target_size=(50, 50))
        except Exception as e:
            messagebox.showerror("Error", f"Failed to load image: {str(e)}")

        # Preprocess the image
        x = image.img_to_array(img) / 255
        x = np.expand_dims(x, axis=0)

        # Make predictions
        preds = self.model.predict(x)
        preds = np.argmax(preds, axis=1)

        return "INFECTED" if preds[0] == 1 else "UNINFECTED"

    def open_file(self):
        file_path = filedialog.askopenfilename()
        if file_path and file_path.endswith(('.jpeg', '.jpg', '.png', '.JPEG', '.JPG', '.PNG')):
            prediction = self.model_predict(file_path)
            self.result_label.config(text=prediction)

            img = Image.open(file_path)
            img = img.resize((200, 200), resample=Image.LANCZOS)
            img = ImageTk.PhotoImage(img)
            self.image_label.config(image=img)
            self.image_label.image = img
        else:
            messagebox.showerror("Error", "File format not supported or no file selected. Please select a .jpeg, .jpg or .png image")

if __name__ == "__main__":
    malaria()
