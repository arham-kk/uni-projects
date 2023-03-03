import tkinter as tk
from PIL import Image, ImageTk
from tkinter import filedialog, messagebox
import numpy as np
from tensorflow.keras.models import load_model
from tensorflow.keras.preprocessing import image

# Load the model and handle any errors
try:
    model = load_model('model.h5')
except:
    messagebox.showerror("Error", "Failed to load model")

def model_predict(img_path, model):
    # Load the image and handle any errors
    try:
        img = image.load_img(img_path, target_size=(50, 50))
    except:
        messagebox.showerror("Error", "Failed to load image")

    # Preprocess the image
    x = image.img_to_array(img) / 255
    x = np.expand_dims(x, axis=0)

    # Make predictions
    preds = model.predict(x)
    preds = np.argmax(preds, axis=1)

    # Return the prediction
    return "INFECTED" if preds[0] == 1 else "UNINFECTED"

def open_file():
    file_path = filedialog.askopenfilename()
    if file_path and file_path.endswith(('.jpeg', '.jpg', '.png', '.JPEG', '.JPG', '.PNG')):
        prediction = model_predict(file_path, model)
        result_label.config(text=prediction)

        img = Image.open(file_path)
        img = img.resize((200, 200), resample=Image.LANCZOS)
        img = ImageTk.PhotoImage(img)
        image_label.config(image=img)
        image_label.image = img
    else:
        messagebox.showerror("Error", "File format not supported or no file selected. Please select a .jpeg, .jpg or .png image")

# Set up the GUI
root = tk.Tk()
root.title("Malaria Disease Classifier")
root.configure(bg='#ffffff')
root.geometry("600x500")
root.resizable(False, False)

# Set up fonts
title_font = ("Helvetica", 28, "bold")
subtitle_font = ("Helvetica", 12)
label_font = ("Helvetica", 18)
button_font = ("Helvetica", 12, "bold")
footer_font = ("Helvetica", 8)

# Set up colors
primary_color = "#3f51b5"
secondary_color = "#ffffff"
highlight_color = "#757de8"
active_color = "#1a237e"
footer_color = "#808080"

# Set up padding
padx = 10
pady = 10

# Set up the title
title_label = tk.Label(root, text="Malaria Disease Classifier", font=title_font, bg=primary_color, fg=secondary_color, padx=padx, pady=pady)
title_label.pack(fill=tk.X)

# Set up the subtitle
subtitle_label = tk.Label(root, text="Upload an image to classify it as infected or uninfected with malaria", font=subtitle_font, bg=secondary_color, fg=primary_color, padx=padx, pady=pady)
subtitle_label.pack(fill=tk.X)

# Set up the file button
file_button = tk.Button(root, text="Open Image", font=button_font, fg=secondary_color, bg=primary_color, activebackground=active_color, activeforeground=secondary_color, bd=0, command=open_file)
file_button.pack(padx=padx, pady=pady)

# Set up the result label
result_label = tk.Label(root, text="", font=label_font, bg=secondary_color, fg=primary_color, padx=padx, pady=pady)
result_label.pack(fill=tk.X, padx=padx, pady=pady)

# Set up the image label
image_label = tk.Label(root, text="", font=label_font, bg=secondary_color, fg=primary_color, padx=padx, pady=pady)
image_label.pack(fill=tk.BOTH, expand=True, padx=padx, pady=pady)

# Set up the footer
footer_label = tk.Label(root, text="©2023 Malaria Disease Classifier. All rights reserved.", font=footer_font, bg=secondary_color, fg=footer_color, padx=padx, pady=pady)
footer_label.pack(side=tk.BOTTOM, fill=tk.X)

root.mainloop()