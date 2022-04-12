# Sistem Akademik
Program sederhana berbasis sistem akademik OOP C++ dengan fitur multi role login yaitu token 1 untuk admin, token 2 untuk mahasiswa, token 3 untuk dosen dan token 4 untuk tenaga kependidikan. Silahkan masukkan password dan username diikuti dengan token sesuai logika di atas. Password dan username akan disimpan di database.txt sehingga ketika program restart password akan tetap digunakan.
Saat Anda masuk sebagai admin, Anda dapat melakukan semua yang dapat dilakukan pengguna dan Anda juga dapat menambahkan mahasiswa, dosen, dan staf kependidikan. Pada saat login sebagai mahasiswa anda dapat merubah data mahasiswa yang telah admin buat dan melihat nilai IPS, SKS, dan IPK yang diinput oleh dosen dari seluruh mahasiswa. Pada saat login sebagai dosen dapat merubah data yang dibuat oleh admin dan juga menambah nilai IPS dan SKS mahasiswa yang lulus. Ketika Anda login sebagai tenaga kependidikan Anda dapat mengubah data yang telah dibuat oleh admin.

# Cara menjalankan Program
Program dapat dijalankan dengan emninstal G++ dan G++ for make kemudian anda dapat melakukan make pastikan anda berada pada direktori prolan-sim bukan di include src ataupun diluar folder. Folder dapat di make terlebih dahulu dengan perintah make pada terminal atau CMD kemudian dijalankan dengan perintah ./sim atau pada windows dapat menjalankan file sim.exe.

# Note Penting
Program ini dibuat disistem operasi linux sehingga mungkin terdapat perbedaan sedikit sytnak dengan windows yaitu pada system clear layar dimana pada program menggunakan system("clear") jika anda menggunakan windows anda dapat mengganti dengan system("cls") namun jika anda menggunakan linux atau MacOS anda tidak perlu merubah kembali.

# Biografi penulis
Program ini dibuat oleh I Wayan Agus Darmawan dengan NRP 5024211070 untuk memenuhi tugas mata kuliah pemrograman tingkat lanjut.

# Academic System
A simple program based on OOP C++ academic system with multi-role login features, namely token 1 for admin, token 2 for students, token 3 for lecturers and token 4 for education staff. Please enter the password and username followed by the token according to the logic above. Password and username will be stored in database.txt so that when you restart the program the password will still be used.
When you log in as an admin you can do everything that a user can do and also you can add students, lecturers and education staff. When you log in as a student you can change the student data that the admin has created and see the IPS, SKS, and GPA scores inputted by lecturers from all students. When you log in as a lecturer you can change the data created by the admin and also add the IPS and SKS scores for graduating students. When you log in as an education staff you can change the data that has been created by the admin.

# How to run the Program
The program can be run by installing G++ and G++ for make then you can make make sure you are in the prolan-sim directory not in the include src or outside the folder. Folders can be made first with the make command on the terminal or CMD then run with the ./sim command or on windows you can run the sim.exe file.

# Important Notes
This program is made on a Linux operating system so there may be a slight difference in syntax with Windows, namely on a clear screen system where the program uses system("clear") if you are using Windows you can replace it with system("cls") but if you are using Linux or MacOS you don't need to change back.

# Writer biography
This program was created by I Wayan Agus Darmawan with NRP 5024211070 to fulfill assignments for advanced programming courses.
