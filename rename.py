import os


def file_rename(file_path):
	file_names = os.listdir(file_path)
	for i in file_names:
		if os.path.isdir(i):
			continue
		k = i.split(".")
		new_name = "0" * (4 - len(k[0])) + i
		os.rename(i, new_name)



if __name__ == "__main__":
	file_rename(os.getcwd())