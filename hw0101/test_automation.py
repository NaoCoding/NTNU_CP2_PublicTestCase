import os
import shutil

src_folder = 'test-01'
testing_area = './testing-area'
homework_id = "_HW01"
student_id = '/' + str(input())
def copy_folder_contents(src_folder, dst_folder):

    if os.path.exists(dst_folder):
        shutil.rmtree(testing_area)
    os.makedirs(dst_folder)
    
    for root, _, files in os.walk(src_folder):
        for file in files:
            src_path = os.path.join(root, file)
            dst_path = os.path.join(dst_folder, file)

            if os.path.exists(dst_path):
                os.remove(dst_path)
            shutil.copy2(src_path, dst_path)

copy_folder_contents('./homework' + student_id + homework_id, testing_area)

for c_file in [f for f in os.listdir(src_folder) if f.endswith('.c')]:
    src_file_path = os.path.join(src_folder, c_file)
    dest_file_path = os.path.join(testing_area, 'hw0101.c')
    print("Testcase : ", c_file)

    shutil.copy(src_file_path, dest_file_path)
    os.chdir(testing_area)
    os.system('make > /dev/null 2>&1')
    os.system('./hw0101')
    os.chdir("../")
    print("---------------------------")

print("所有檔案測試完成。")