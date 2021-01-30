#BatchInstall.py
#用来安装第三方库
import os
libs = {"numpy", "matplotlib","pillow","sklearn","requests",\
        "jieba","beautidulsoup4","wheel","networkx","sympy",\
        "pyinstaller","django","flask","werobot","pyqt5",\
        "pandas","pyopengl","pypdf2","docopt","pygame"}
try:
    for lib in libs:
        os.system("pip install" + lib)
        print("Successful")
except:
    print("Failed Somehow")
